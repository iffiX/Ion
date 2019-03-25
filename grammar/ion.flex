/*
 *  The yyscanner definition for Ion. Ion is partially compatible with Python 3.7
 *  PLR is short for: Python Language Reference
 *  PLR link: https://docs.python.org/3/reference/
 */

/***************************************************************
*  Declaration section
***************************************************************/
%{
#include <string>
#include <cstdlib>
#include <ion_def.h>
#include <ion_lex_func.h>
#include <ion.tab.h>

#define buffer                  ((yyextra)->buffer)
#define buffer_size             ((yyextra)->buffer_size)
#define string_quote            ((yyextra)->string_quote)
#define string_buf_ptr          ((yyextra)->string_buf_ptr)
#define string_begin_offset     ((yyextra)->string_begin_offset)
#define flag_string_prefix      ((yyextra)->flag_string_prefix)

#define bytes_quote             ((yyextra)->bytes_quote)
#define bytes_buf_ptr           ((yyextra)->bytes_buf_ptr)
#define bytes_begin_offset      ((yyextra)->bytes_begin_offset)
#define flag_bytes_prefix       ((yyextra)->flag_bytes_prefix)
#define flag_ex_join_line       ((yyextra)->flag_ex_join_line)
#define err_msg                 ((yyextra)->err_msg)
#define yylval                  (*((yyextra)->token))
#define YY_INPUT(buf, result, max_size) \
{\
    auto input_buf = (yyextra)->input.rdbuf();\
    if((max_size) > 0 && input_buf->sgetc() != EOF) {\
        (result) = 1;\
        (buf)[0] = input_buf->sbumpc();\
        if((buf)[0] == '\n') {\
            (yyextra)->major_offset += (yyextra)->minor_offset;\
            (yyextra)->minor_offset = 0;\
        }\
    }\
    else\
        (result) = 0;\
}\


using TokenType=yy::parser::token::yytokentype;
extern int verbose_flag;
%}

/* Condition(state) definitions */
%s              COMMENTS_BLOCK
%s              COMMENTS_INLINE
%s              SHORT_STRING
%s              LONG_STRING
%s              SHORT_BYTES
%s              LONG_BYTES


/* Miscellaneous */
%option noinput
%option nounput
/* disable yywrap and there would be no need to link */
%option noyywrap
%option yylineno
%option stack
%option reentrant
%option extra-type="LexerState*"

/***************************************************************
*  Rule Definition Section
***************************************************************/
%%


 /* ================
  * Inline Comments
  * ================
  * @brief Inline comments begin with '#' and should not cross several lines
  */
<INITIAL>"#" {
    if (!flag_ex_join_line) {
        // Inline comment begins
        yy_push_state(COMMENTS_INLINE, yyscanner);
    }
    else {
        // See PLR 2.1.5
        err_msg = "Inline comment after line joining";
        BEGIN INITIAL;
        return ERROR;
    }
}

<COMMENTS_INLINE>[^\n]* {
    // Comment content is ignored
}

<COMMENTS_INLINE>\n {
    // Inline comment ends
    yy_pop_state(yyscanner);
}

 /* ================
  * String
  * ================
  */

<INITIAL>(r|u|R|U|f|F|fr|Fr|fR|rf|rF|Rf|RF)?(\'|\"){1} {
    yy_push_state(SHORT_STRING, yyscanner);
    string_quote = yytext[yyleng-1];

    // parse prefixes
    flag_string_prefix = 0;
    for(size_t i=0; i<yyleng-1; i++) {
        if (yytext[i] == 'r' || yytext[i] == 'R') {
            flag_string_prefix |= STRING_RAW;
        }
        else {
            err_msg = "String prefixes apart from r/R are not supported";
            return ERROR;
        }
    }
    string_begin_offset = yyleng;
    yymore();
}

<INITIAL>(r|u|R|U|f|F|fr|Fr|fR|rf|rF|Rf|RF)?(\'|\"){3} {
    yy_push_state(LONG_STRING, yyscanner);
    string_quote = yytext[yyleng-1];

    // parse prefixes
    flag_string_prefix = 0;
    for(size_t i=0; i<yyleng-3; i++) {
        if (yytext[i] == 'r' || yytext[i] == 'R') {
            flag_string_prefix |= STRING_RAW;
        }
        else {
            err_msg = "String prefixes apart from r/R are not supported";
            return ERROR;
        }
    }
    string_begin_offset = yyleng;
    yymore();
}

 /* normal escape characters, not \n */
<SHORT_STRING,LONG_STRING>\\[^\n] {
    yymore();
}

 /* seen a '\\' at the end of a line, the string continues */
<SHORT_STRING,LONG_STRING>\\\n {
    yymore();
}

 /* meet a '\n' in the middle of a string without a '\\', error */
<SHORT_STRING>\n {
    err_msg = "EOL while scanning string literal";
    yy_pop_state(yyscanner);
    return ERROR;
}

 /* string ends, we need to deal with some escape characters */
<SHORT_STRING>[\"\'] {
    if (string_quote == yytext[0]) {
        // now "input" only contains the content between quotes
        std::string input(yytext + string_begin_offset, yyleng - string_begin_offset - 1);
        std::string output;
        if (flag_string_prefix & STRING_RAW)
            output = input;
        else
            output = processEscapes(input);

        if (output.length() > TOKEN_BUFFER_SIZE) {
            err_msg = "String literal exceeds maximum buffer size";
            yy_pop_state(yyscanner);
            return ERROR;
        }

        memcpy(buffer, output.c_str(), output.length());
        buffer_size = output.length();
        yy_pop_state(yyscanner);
        yylval.str_val = (char*) buffer;
        return TokenType::STRING;
    }
    else {
        yymore();
    }
}

<LONG_STRING>[\"\']{3} {
    if (string_quote == yytext[0]) {
        // now "input" only contains the content between quotes
        std::string input(yytext + string_begin_offset, yyleng - string_begin_offset - 3);
        std::string output;
        if (flag_string_prefix & STRING_RAW)
            output = input;
        else
            output = processEscapes(input);

        if (output.length() > TOKEN_BUFFER_SIZE) {
            err_msg = "String literal exceeds maximum buffer size";
            yy_pop_state(yyscanner);
            return ERROR;
        }

        memcpy(buffer, output.c_str(), output.length());
        buffer_size = output.length();
        yy_pop_state(yyscanner);
        yylval.str_val = (char*) buffer;
        return TokenType::STRING;
    }
    else {
        yymore();
    }
}

 /* Short string doesn't contain '\\' '\n' or the quote*/
<SHORT_STRING>[^\\\n]* {
    if (yytext[0] == string_quote)
        yy_pop_state(yyscanner);
    else
        yymore();
}
 /* Long string doesn't contain '\\' */
<LONG_STRING>[^\\]* {
    yymore();
}

 /* meet EOF in the middle of a string, error */
<SHORT_STRING,LONG_STRING><<EOF>> {
    err_msg = "EOF while scanning string literal";
    yy_pop_state(yyscanner);
    yyrestart(yyin, yyscanner);
    return ERROR;
}

 /* ================
  * Bytes
  * ================
  */

<INITIAL>(b|B|br|Br|bR|BR|rb|rB|Rb|RB)?(\'|\"){1} {
    yy_push_state(SHORT_BYTES, yyscanner);
    bytes_quote = yytext[yyleng-1];

    // parse prefixes
    flag_bytes_prefix = 0;
    for(size_t i=0; i<yyleng-1; i++) {
        if (yytext[i] == 'r' || yytext[i] == 'R')
            flag_bytes_prefix |= BYTES_RAW;
    }
    bytes_begin_offset = yyleng;
    yymore();
}

<INITIAL>(b|B|br|Br|bR|BR|rb|rB|Rb|RB)?(\'|\"){3} {
    yy_push_state(LONG_BYTES, yyscanner);
    bytes_quote = yytext[yyleng-1];

    // parse prefixes
    for(size_t i=0; i<yyleng-1; i++) {
        if (yytext[i] == 'r' || yytext[i] == 'R')
            flag_bytes_prefix |= BYTES_RAW;
    }
    bytes_begin_offset = yyleng;
    yymore();
}

 /* normal escape characters, not \n */
<SHORT_BYTES,LONG_BYTES>\\[^\n] {
    yymore();
}

 /* seen a '\\' at the end of a line, the bytes continues */
<SHORT_BYTES,LONG_BYTES>\\\n {
    yymore();
}

 /* meet a '\n' in the middle of a bytes without a '\\', error */
<SHORT_BYTES>\n {
    err_msg = "EOL while scanning bytes literal";
    yy_pop_state(yyscanner);
    return ERROR;
}

 /* bytes ends, we need to deal with some escape characters */
<SHORT_BYTES>[\"\'] {
    if (bytes_quote == yytext[0]) {
        // now "input" only contains the content between quotes
        std::string input(yytext + bytes_begin_offset, yyleng - bytes_begin_offset - 1);
        std::string output;
        if (flag_bytes_prefix & STRING_RAW)
            output = input;
        else {
            try {
                output = processEscapes(input);
            } catch(const char *error) {
                err_msg = error;
                yy_pop_state(yyscanner);
                return ERROR;
            }
        }
        if (output.length() > TOKEN_BUFFER_SIZE) {
            err_msg = "Bytes literal exceeds maximum buffer size";
            yy_pop_state(yyscanner);
            return ERROR;
        }

        memcpy(buffer, output.c_str(), output.length());
        buffer_size = output.length();
        yy_pop_state(yyscanner);
        yylval.bytes_val = buffer;
        return TokenType::BYTES;
    }
    else {
        yymore();
    }
}

<LONG_BYTES>[\"\']{3} {
    if (bytes_quote == yytext[0]) {
        // now "input" only contains the content between quotes
        std::string input(yytext + bytes_begin_offset, yyleng - bytes_begin_offset - 3);
        std::string output;
        if (flag_bytes_prefix & STRING_RAW)
            output = input;
        else {
            try {
                output = processEscapes(input);
            } catch(const char *error) {
                err_msg = error;
                yy_pop_state(yyscanner);
                return ERROR;
            }
        }

        if (output.length() > TOKEN_BUFFER_SIZE) {
            err_msg = "Bytes literal exceeds maximum buffer size";
            yy_pop_state(yyscanner);
            return ERROR;
        }

        memcpy(buffer, output.c_str(), output.length());
        buffer_size = output.length();
        yy_pop_state(yyscanner);
        yylval.bytes_val = buffer;
        return TokenType::BYTES;
    }
    else {
        yymore();
    }
}

 /* Short bytes doesn't contain '\\' '\n' or the quote*/
<SHORT_BYTES>[^\\\n]* {
    if (yytext[0] == bytes_quote)
       yy_pop_state(yyscanner);
    else
        yymore();
}
 /* Long bytes doesn't contain '\\' */
<LONG_BYTES>[^\\]* {
    yymore();
}

 /* meet EOF in the middle of a bytes, error */
<SHORT_BYTES,LONG_BYTES><<EOF>> {
    err_msg = "EOF while scanning bytes literal";
    yy_pop_state(yyscanner);
    yyrestart(yyin, yyscanner);
    return ERROR;
}

 /* ================
  * Keywords
  * ================
  */

 /* False */
"False" { return TokenType::KW_FALSE; }

 /* True */
"True" { return TokenType::KW_TRUE; }

 /* None */
"None" { return TokenType::KW_NONE; }

 /* and */
"and" { return TokenType::KW_AND; }

 /* as */
"as" { return TokenType::KW_AS; }

 /* assert */
"assert" { return TokenType::KW_ASSERT; }

 /* break */
"break" { return TokenType::KW_BREAK; }

 /* class */
"class" { return TokenType::KW_CLASS; }

 /* continue */
"continue" { return TokenType::KW_CONTINUE; }

 /* def */
"def" { return TokenType::KW_DEF; }

 /* del */
"del" { return TokenType::KW_DEL; }

 /* elif */
"elif" { return TokenType::KW_ELIF; }

 /* else */
"else" { return TokenType::KW_ELSE; }

 /* except */
"except" { return TokenType::KW_EXCEPT; }

 /* finally */
"finally" { return TokenType::KW_FINALLY; }

 /* for */
"for" { return TokenType::KW_FOR; }

 /* from */
"from" { return TokenType::KW_FROM; }

 /* global */
"global" { return TokenType::KW_GLOBAL; }

 /* if */
"if" { return TokenType::KW_IF; }

 /* import */
"import" { return TokenType::KW_IMPORT; }

 /* in */
"in" { return TokenType::KW_IN; }

 /* is */
"is" { return TokenType::KW_IS; }

 /* lambda */
"lambda" { return TokenType::KW_LAMBDA; }

 /* not */
"not" { return TokenType::KW_NOT; }

 /* or */
"or" { return TokenType::KW_OR; }

 /* pass */
"pass" { return TokenType::KW_PASS; }

 /* raise */
"raise" { return TokenType::KW_RAISE; }

 /* return TokenType::*/
"return" { return TokenType::KW_RETURN; }

 /* try */
"try" { return TokenType::KW_TRY; }

 /* while */
"while" { return TokenType::KW_WHILE; }

 /* with */
"with" { return TokenType::KW_WITH; }

 /* ================
  * Numeric literals
  * ================
  * @brief See PLR 2.4
  */

 /* decimal integer */
[1-9](_?[0-9])* {
    // remove underscores from text
    removeUnderscore(yytext, yyleng);

    // convert text to decimal integer
    yylval.int_val = strtoll(yytext, nullptr, 10);
    return TokenType::NUM_INT;
}

 /* binary integer */
0(b|B)(_?[01]+)+ {
    // remove underscores from text
    removeUnderscore(yytext, yyleng);

    // convert text to decimal integer
    yylval.int_val = strtoll(yytext + 2, nullptr, 2);
    return TokenType::NUM_INT;
}

 /* octal integer */
0(o|O)(_?[0-7]+)+ {
    // remove underscores from text
    removeUnderscore(yytext, yyleng);

    // convert text to decimal integer
    yylval.int_val = strtoll(yytext + 2, nullptr, 8);
    return TokenType::NUM_INT;
}

 /* hexadecimal integer */
0(x|X)(_?[0-9a-fA-F]+)+ {
    // remove underscores from text
    removeUnderscore(yytext, yyleng);

    // convert text to decimal integer
    yylval.int_val = strtoll(yytext + 2, nullptr, 16);
    return TokenType::NUM_INT;
}

 /* float */
 /* eg: 3.14,  10.,  .001,  1e100,  3.14e-10,  0e0,  3.14_15_93)
([0-9](_?[0-9])*(\.)?([0-9](_?[0-9])*)?|\.[0-9](_?[0-9])*)([eE][+-]?([0-9](_?[0-9])*))?  {
    // remove underscores from text
    removeUnderscore(yytext, yyleng);

    // convert text to decimal integer
    yylval.float_val = strtod(yytext, nullptr);
    return TokenType::NUM_FLOAT;
}

 /* Imaginary */
 /* eg: 3.14j,  10.J,  .001J,  1e100j,  3.14e-10J,  0e0j,  3.14_15_93J)
([0-9](_?[0-9])*(\.)?([0-9](_?[0-9])*)?|\.[0-9](_?[0-9])*)([eE][+-]?([0-9](_?[0-9])*))?[jJ]  {
    // remove underscores from text
    size_t real_len = removeUnderscore(yytext, yyleng);

    // set last character j/J to zero
    yytext[real_len-1] = 0;

    // convert text to decimal integer
    yylval.imag_val = strtod(yytext, nullptr);
    return TokenType::NUM_IMAG;
}

 /* White Space */
[ \f\r\t\v]+ { }

 /* ================
  * Identifiers
  * ================
  * @brief See PLR 2.3
  */

[a-zA-Z_][a-zA-Z0-9_]* {
    memcpy(buffer, yytext, yyleng);
    yylval.id_val = (char*)buffer;
    return TokenType::IDENTIFIER;
}

 /* ================
  * Operators and delimiters
  * ================
  * @brief See PLR 2.5 and 2.6
  */

"("   { return TokenType::DLM_LPTS; }
")"   { return TokenType::DLM_RPTS; }
"["   { return TokenType::DLM_LBKT; }
"]"   { return TokenType::DLM_RBKT; }
"{"   { return TokenType::DLM_LBC;  }
"}"   { return TokenType::DLM_RBC;  }
","   { return TokenType::DLM_CMM;  }
":"   { return TokenType::DLM_CLN;  }
"..." { return TokenType::DLM_ELPS; }
"."   { return TokenType::DLM_DOT;  }
";"   { return TokenType::DLM_SCLN; }
"="   { return TokenType::DLM_EQL;  }
"->"  { return TokenType::DLM_RARW; }
"+="  { return TokenType::DLM_PLUSE; }
"-="  { return TokenType::DLM_MINSE; }
"*="  { return TokenType::DLM_MULE; }
"/="  { return TokenType::DLM_DIVE; }
"//=" { return TokenType::DLM_FDVE; }
"%="  { return TokenType::DLM_MODE; }
"&="  { return TokenType::DLM_ANDE; }
"|="  { return TokenType::DLM_ORE;  }
"^="  { return TokenType::DLM_XORE; }
"<<=" { return TokenType::DLM_LSTE; }
">>=" { return TokenType::DLM_RSTE; }
"**=" { return TokenType::DLM_EXPE; }
"+"   { return TokenType::DLM_PLUS;   }
"-"   { return TokenType::DLM_MINS;   }
"**"  { return TokenType::DLM_DAST;   }
"*"   { return TokenType::DLM_AST;   }
"//"  { return TokenType::DLM_FDIV;  }
"/"   { return TokenType::DLM_DIV;   }
"<<"  { return TokenType::DLM_LSFT;  }
">>"  { return TokenType::DLM_RSFT;  }
"&"   { return TokenType::DLM_AND;   }
"|"   { return TokenType::DLM_OR;    }
"^"   { return TokenType::DLM_XOR;   }
"~"   { return TokenType::DLM_FLP;   }
"<>"  { return TokenType::DLM_NEQ;   }
"<="  { return TokenType::DLM_LSE;   }
"<"   { return TokenType::DLM_LSS;   }
">="  { return TokenType::DLM_GTE;   }
">"   { return TokenType::DLM_GTT;   }
"=="  { return TokenType::DLM_EQT;   }
"!="  { return TokenType::DLM_NEQ;   }

 /* ================
  * Error
  * ================
  */

[^\n] {
    err_msg = "Invalid character";
    return ERROR;
}

%%
