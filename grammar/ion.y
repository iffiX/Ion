%code requires {
#include <string>
#include <ion_lex.h>
#include <ion_def.h>
#include <ast/ast.h>
}

%code top {
#define yylex(yylval, yyloc, lexer) lexer->lex(yylval, yyloc)
#define createNode(...) (new ASTNode(*manager, __VA_ARGS__))
#define strfy(x) std::string(x)
#define unused(...)
}

%code {
void yy::parser::error (const location_type& loc, const std::string& msg) {
    // do nothing
}
}

%destructor { unused($$); } IDENTIFIER NEWLINE INDENT DEDENT ENDMARKER NUM_INT NUM_FLOAT
                 NUM_IMAG STRING BYTES KW_FALSE KW_NONE KW_TRUE KW_AND KW_AS KW_ASSERT KW_BREAK
                 KW_CLASS KW_CONTINUE KW_DEF KW_DEL KW_ELIF KW_ELSE KW_EXCEPT KW_FINALLY KW_FOR
                 KW_FROM KW_GLOBAL KW_IF KW_IMPORT KW_IN KW_IS KW_LAMBDA KW_NOT KW_OR KW_PASS
                 KW_RAISE KW_RETURN KW_TRY KW_WHILE KW_WITH KW_END DLM_PLUS DLM_MINS DLM_AST
                 DLM_DAST DLM_DIV DLM_FDIV DLM_MOD DLM_LSFT DLM_RSFT DLM_AND DLM_OR DLM_XOR
                 DLM_FLP DLM_LSS DLM_LSE DLM_GTT DLM_GTE DLM_EQT DLM_NEQ DLM_LPTS DLM_RPTS
                 DLM_LBKT DLM_RBKT DLM_LBC DLM_RBC DLM_CMM DLM_CLN DLM_DOT DLM_SCLN
                 DLM_EQL DLM_RARW DLM_PLUSE DLM_MINSE DLM_MULE DLM_EXPE DLM_DIVE DLM_FDVE
                 DLM_MODE DLM_ANDE DLM_ORE DLM_XORE DLM_LSTE DLM_RSTE DLM_POWE

%destructor { delete $$.node; } <>

%language "c++"
%locations
%define api.value.type {Token}
%define api.location.type {Location}
%define parse.error verbose
%lex-param {Ion::IonLexer *lexer}
%parse-param {Ion::IonLexer *lexer}
%parse-param {ASTManager *manager}

%token IDENTIFIER
%token NEWLINE
%token INDENT
%token DEDENT
%token ENDMARKER

%token NUM_INT
%token NUM_FLOAT
%token NUM_IMAG

%token STRING
%token BYTES

%token KW_FALSE
%token KW_NONE
%token KW_TRUE
%token KW_AND
%token KW_AS
%token KW_ASSERT
%token KW_BREAK
%token KW_CLASS
%token KW_CONTINUE
%token KW_DEF
%token KW_DEL
%token KW_ELIF
%token KW_ELSE
%token KW_EXCEPT
%token KW_FINALLY
%token KW_FOR
%token KW_FROM
%token KW_GLOBAL
%token KW_IF
%token KW_IMPORT
%token KW_IN
%token KW_IS
%token KW_LAMBDA
%token KW_NOT
%token KW_OR
%token KW_PASS
%token KW_RAISE
%token KW_RETURN
%token KW_TRY
%token KW_WHILE
%token KW_WITH
%token KW_END

%token DLM_PLUS
%token DLM_MINS
%token DLM_AST
%token DLM_DAST
%token DLM_DIV
%token DLM_FDIV
%token DLM_MOD
%token DLM_LSFT
%token DLM_RSFT
%token DLM_AND
%token DLM_OR
%token DLM_XOR
%token DLM_FLP
%token DLM_LSS
%token DLM_LSE
%token DLM_GTT
%token DLM_GTE
%token DLM_EQT
%token DLM_NEQ

%token DLM_LPTS
%token DLM_RPTS
%token DLM_LBKT
%token DLM_RBKT
%token DLM_LBC
%token DLM_RBC
%token DLM_CMM
%token DLM_CLN
%token DLM_DOT
%token DLM_SCLN
%token DLM_EQL
%token DLM_RARW
%token DLM_PLUSE
%token DLM_MINSE
%token DLM_MULE
%token DLM_EXPE
%token DLM_DIVE
%token DLM_FDVE
%token DLM_MODE
%token DLM_ANDE
%token DLM_ORE
%token DLM_XORE
%token DLM_LSTE
%token DLM_RSTE
%token DLM_POWE

%glr-parser
%%
input:
  single_input { $$.node = $1.node; }
| file_input { $$.node = $1.node; }
| eval_input { $$.node = $1.node; }

single_input:
  NEWLINE { unused($1); $$.node = createNode("root"); }
| simple_stmt { $$.node = createNode("root"); $$.node->appendChild($1.node); }
| compound_stmt NEWLINE { unused($2); $$.node = createNode("root"); $$.node->appendChild($1.node); }

file_input:
  file_input_first ENDMARKER {
    unused($2);
    if ($1.node == nullptr)
        $$.node = createNode("root");
    else
        $$.node = $1.node;
  }

file_input_first:
  %empty { $$.node = nullptr; }
| file_input_first NEWLINE { unused($2); $$.node = $1.node; }
| file_input_first stmt {
    if($1.node == nullptr) {
        $$.node = createNode("root");
        $$.node->appendChild($2.node);
    }
    else {
        $$.node = $1.node;
        $$.node->appendChild($2.node);
    }
  }

eval_input:
  eval_input_first ENDMARKER { unused($2); $$.node = createNode("root"); $$.node->appendChild($1.node); }

eval_input_first:
  testlist { $$.node = $1.node; }
| eval_input_first NEWLINE { unused($2); $$.node = $1.node; }

funcdef:
  KW_DEF IDENTIFIER parameters DLM_CLN suite {
    unused($1);
    unused($4);
    $$.node = createNode("funcdef");
    $$.node->attributes["name"] = strfy($2.str_val);
    $$.node->attributes["has_return_type"] = false;
    $$.node->appendChild($3.node);
    $$.node->appendChild($5.node);
  }
| KW_DEF IDENTIFIER parameters DLM_RARW test DLM_CLN suite {
    unused($1);
    unused($4);
    unused($6);
    $$.node = createNode("funcdef");
    $$.node->attributes["name"] = strfy($2.str_val);
    $$.node->attributes["has_return_type"] = true;
    $$.node->appendChild($3.node);
    $$.node->appendChild($5.node);
    $$.node->appendChild($7.node);
  }

parameters:
  DLM_LPTS DLM_RPTS { unused($1, $2); $$.node = createNode("parameters"); }
| DLM_LPTS typedargslist DLM_RPTS {
    unused($1);
    unused($3);
    $$.node = createNode("parameters");
    $$.node->appendChild($2.node);
  }

/* The same as varargslist, except replacing vfpdef with tfpdef */
typedargslist:
  typedargslist_begin typedargslist_first {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }
| typedargslist_begin typedargslist_second {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }
| typedargslist_begin typedargslist_third {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }

typedargslist_begin:
  tfpdef {
    $$.node = createNode("varargslist");
    $$.node->appendChild($1.node);
  }
| tfpdef DLM_EQL test {
    unused($2);
    $$.node = createNode("varargslist");
    auto arg = createNode("=");
    arg->appendChild($1.node);
    arg->appendChild($3.node);
    $$.node->appendChild(arg);
  }
| typedargslist_begin DLM_CMM tfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| typedargslist_begin DLM_CMM tfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

typedargslist_first:
  %empty { $$.node = nullptr; }
| DLM_CMM { unused($1); $$.node = nullptr; }
| DLM_CMM typedargslist_first_1 { unused($1); $$.node = $2.node; }

typedargslist_first_1:
  typedargslist_first_1_begin DLM_CMM {
    unused($2);
    $$.node = $1.node;
  }
| typedargslist_first_1_begin DLM_CMM DLM_DAST tfpdef {
    unused($2, $3);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| typedargslist_first_1_begin DLM_CMM DLM_DAST tfpdef DLM_CMM {
    unused($2, $3, $5);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST tfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST tfpdef DLM_CMM {
    unused($1, $3);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

typedargslist_first_1_begin:
  DLM_AST tfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| typedargslist_first_1_begin DLM_CMM tfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| typedargslist_first_1_begin DLM_CMM tfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

typedargslist_second:
  typedargslist_second_2 DLM_CMM { unused($2); $$.node = $1.node; }
| typedargslist_second_2 DLM_CMM DLM_DAST tfpdef {
    unused($2, $3);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| typedargslist_second_2 DLM_CMM DLM_DAST tfpdef DLM_CMM {
    unused($2, $3, $5);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }

typedargslist_second_1:
  DLM_AST {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    $$.node->appendChild(arg);
  }
| DLM_AST tfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

typedargslist_second_2:
  typedargslist_second_1 { $$.node = $1.node;}
| typedargslist_second_2 DLM_CMM tfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| typedargslist_second_2 DLM_CMM tfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

typedargslist_third:
  DLM_DAST tfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST tfpdef DLM_CMM {
    unused($1, $3);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

tfpdef:
  IDENTIFIER {
    $$.node = createNode("identifier");
    $$.node->attributes["name"] = strfy($1.str_val);
  }
| IDENTIFIER DLM_CLN test {
    unused($2);
    $$.node = createNode("identifier");
    $$.node->attributes["name"] = strfy($1.str_val);
    $$.node->appendChild($3.node);
  }

/*
    (vfpdef ['=' test] (',' vfpdef ['=' test])*
        [','
            [ '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
            | '**' vfpdef [',']]
        ]
      | '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
      | '**' vfpdef [',']
    )
*/
varargslist:
  varargslist_begin varargslist_first {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }
| varargslist_begin varargslist_second {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }
| varargslist_begin varargslist_third {
    $$.node = $1.node;
    if ($2.node != nullptr) {
        if ($2.node->key == "tmp") {
            for (auto child : $2.node->children)
                $$.node->appendChild(child);
            delete $2.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }

varargslist_begin:
  vfpdef {
    $$.node = createNode("varargslist");
    $$.node->appendChild($1.node);
  }
| vfpdef DLM_EQL test {
    unused($2);
    $$.node = createNode("varargslist");
    auto arg = createNode("=");
    arg->appendChild($1.node);
    arg->appendChild($3.node);
    $$.node->appendChild(arg);
  }
| varargslist_begin DLM_CMM vfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| varargslist_begin DLM_CMM vfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

/*   [','
        [ '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
        | '**' vfpdef [',']]
     ]
*/
varargslist_first:
  %empty { $$.node = nullptr; }
| DLM_CMM { unused($1); $$.node = nullptr; }
| DLM_CMM varargslist_first_1 { unused($1); $$.node = $2.node; }

varargslist_first_1:
  varargslist_first_1_begin DLM_CMM {
    unused($2);
    $$.node = $1.node;
  }
| varargslist_first_1_begin DLM_CMM DLM_DAST vfpdef {
    unused($2, $3);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| varargslist_first_1_begin DLM_CMM DLM_DAST vfpdef DLM_CMM {
    unused($2, $3, $5);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST vfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST vfpdef DLM_CMM {
    unused($1, $3);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

varargslist_first_1_begin:
  DLM_AST vfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| varargslist_first_1_begin DLM_CMM vfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| varargslist_first_1_begin DLM_CMM vfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

varargslist_second:
  varargslist_second_2 DLM_CMM { unused($2); $$.node = $1.node; }
| varargslist_second_2 DLM_CMM DLM_DAST vfpdef {
    unused($2, $3);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }
| varargslist_second_2 DLM_CMM DLM_DAST vfpdef DLM_CMM {
    unused($2, $3, $5);
    $$.node = $1.node;
    auto arg = createNode("**");
    arg->appendChild($4.node);
    $$.node->appendChild(arg);
  }

varargslist_second_1:
  DLM_AST {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    $$.node->appendChild(arg);
  }
| DLM_AST vfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

varargslist_second_2:
  varargslist_second_1 { $$.node = $1.node;}
| varargslist_second_2 DLM_CMM vfpdef {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }
| varargslist_second_2 DLM_CMM vfpdef DLM_EQL test {
    unused($2, $4);
    $$.node = $1.node;
    auto arg = createNode("=");
    arg->appendChild($3.node);
    arg->appendChild($5.node);
    $$.node->appendChild(arg);
  }

varargslist_third:
  DLM_DAST vfpdef {
    unused($1);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }
| DLM_DAST vfpdef DLM_CMM {
    unused($1, $3);
    $$.node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild($2.node);
    $$.node->appendChild(arg);
  }

vfpdef: IDENTIFIER {
    $$.node = createNode("identifier");
    $$.node->attributes["name"] = strfy($1.str_val);
  }

stmt:
  simple_stmt { $$.node = $1.node; }
| compound_stmt { $$.node = $1.node; }

simple_stmt:
  small_stmt NEWLINE {
    unused($2);
    $$.node = createNode("stmt");
    $$.node->appendChild($1.node);
  }
| small_stmt DLM_SCLN NEWLINE {
    unused($2, $3);
    $$.node = createNode("stmt");
    $$.node->appendChild($1.node);
  }
| small_stmt DLM_SCLN simple_stmt {
    unused($2);
    $$.node = $3.node;
    $$.node->prependChild($1.node);
  }

small_stmt:
  expr_stmt { $$.node = $1.node; }
| del_stmt { $$.node = $1.node; }
| pass_stmt { $$.node = $1.node; }
| flow_stmt { $$.node = $1.node; }
| import_stmt { $$.node = $1.node; }
| global_stmt { $$.node = $1.node; }
| assert_stmt { $$.node = $1.node; }

expr_stmt:
  testlist_star_expr annassign {
    unused($1, $2, $$);
    throw std::runtime_error("Not implemented: Annotated assignment");
  }
| testlist_star_expr augassign testlist {
    $$.node = createNode("expr");
    $$.node->appendChild($2.node);
    $2.node->appendChild($1.node);
    $2.node->appendChild($3.node);
  }
| testlist_star_expr eql_expr {
    $$.node = createNode("expr");
    if ($2.node == nullptr)
        $$.node->appendChild($1.node);
    else {
        $2.node->prependChild($1.node);
        $$.node->appendChild($2.node);
    }
  }

eql_expr:
  %empty { $$.node = nullptr; }
| eql_expr DLM_EQL testlist_star_expr {
    unused($2);
    if ($$.node == nullptr)
        $$.node = createNode("eql_expr");
    else
        $$.node = $1.node;
    $$.node->appendChild($3.node);
  }

/*
    TODO: implement annotated assignment in PEP 528
*/
annassign:
  DLM_CLN test {
    unused($1, $2, $$);
    throw std::runtime_error("Not implemented: Annotated assignment");
  }
| DLM_CLN test DLM_EQL test {
    unused($1, $2, $3, $4, $$);
    throw std::runtime_error("Not implemented: Annotated assignment");
  }

testlist_star_expr:
  testlist_star_expr_without_trail { $$.node = $1.node; }
| testlist_star_expr_without_trail DLM_CMM { unused($2); $$.node = $1.node; }

testlist_star_expr_without_trail:
  test { $$.node = createNode("testlist_star_expr"); $$.node->appendChild($1.node); }
| star_expr { $$.node = createNode("testlist_star_expr"); $$.node->appendChild($1.node); }
| testlist_star_expr DLM_CMM test { unused($2); $$.node = $1.node; $$.node->appendChild($3.node); }
| testlist_star_expr DLM_CMM star_expr { unused($2); $$.node = $1.node; $$.node->appendChild($3.node); }

augassign:
  DLM_PLUSE { unused($1); $$.node = createNode("+="); }
| DLM_MINSE { unused($1); $$.node = createNode("-="); }
| DLM_MULE { unused($1); $$.node = createNode("*="); }
| DLM_DIVE { unused($1); $$.node = createNode("/="); }
| DLM_FDVE { unused($1); $$.node = createNode("//="); }
| DLM_MODE { unused($1); $$.node = createNode("%="); }
| DLM_ANDE { unused($1); $$.node = createNode("&="); }
| DLM_ORE { unused($1); $$.node = createNode("|="); }
| DLM_XORE { unused($1); $$.node = createNode("^="); }
| DLM_LSTE { unused($1); $$.node = createNode("<<="); }
| DLM_RSTE { unused($1); $$.node = createNode(">>="); }
| DLM_POWE { unused($1); $$.node = createNode("**="); }

del_stmt: KW_DEL exprlist { unused($1); $$.node = createNode("return"); $$.node->appendChild($2.node); }

pass_stmt: KW_PASS { unused($1); $$.node = createNode("pass"); }

flow_stmt:
  break_stmt { $$.node = $1.node; }
| continue_stmt { $$.node = $1.node; }
| return_stmt { $$.node = $1.node; }
| raise_stmt { $$.node = $1.node; }

break_stmt: KW_BREAK { unused($1); $$.node = createNode("break"); }

continue_stmt: KW_CONTINUE { unused($1); $$.node = createNode("continue"); }

return_stmt:
  KW_RETURN { unused($1); $$.node = createNode("return"); }
| KW_RETURN testlist { unused($1); $$.node = createNode("return"); $$.node->appendChild($2.node); }

raise_stmt:
  KW_RAISE { unused($1); $$.node = createNode("raise"); }
| KW_RAISE test { unused($1); $$.node = createNode("raise"); $$.node->appendChild($2.node); }
| KW_RAISE test KW_FROM test {
    unused($1);
    unused($3);
    $$.node = createNode("raise");
    $$.node->appendChild($2.node);
    $$.node->appendChild($4.node);
  }

import_stmt:
  import_name { $$.node = $1.node; }
| import_from { $$.node = $1.node; }

import_name: KW_IMPORT dotted_as_names {
    unused($1);
    $$.node = createNode("import");
    $$.node->appendChild($2.node);
  }
import_from: import_from_part import_import_part {
    $$.node = createNode("from_import");
    $$.node->appendChild($1.node);
    $$.node->appendChild($2.node);
  }

import_from_part:
  import_from_part_with_name dotted_name {
    $$.node = $1.node;
    $$.node->appendChild($2.node);
  }
| import_from_part_without_name {
    $$.node = $1.node;
  }

import_from_part_with_name:
  KW_FROM { unused($1); $$.node = createNode("from"); }
| import_from_part_with_name DLM_DOT {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild(".");
  }

import_from_part_without_name:
  KW_FROM DLM_DOT {
    unused($1);
    unused($2);
    $$.node = createNode("from");
    $$.node->appendChild(".");
  }
| import_from_part_without_name DLM_DOT {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild(".");
  }

import_import_part:
  KW_IMPORT DLM_AST {
    unused($1);
    unused($2);
    $$.node = createNode("import");
    auto all = createNode("*");
    $$.node->appendChild(all);
  }
| KW_IMPORT DLM_LPTS import_as_names DLM_RPTS {
    unused($1);
    unused($2);
    unused($4);
    $$.node = createNode("import");
    $$.node->appendChild($3.node);
  }
| KW_IMPORT import_as_names {
    unused($1);
    $$.node = createNode("import");
    $$.node->appendChild($2.node);
  }

import_as_names:
  import_as_names_without_trail { $$.node = $1.node; }
| import_as_names_without_trail DLM_CMM { unused($2); $$.node = $1.node; }

import_as_names_without_trail:
  import_as_name { $$.node = createNode("import_names"); $$.node->appendChild($1.node); }
| import_as_names_without_trail DLM_CMM import_as_name {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }

import_as_name:
  IDENTIFIER { $$.node = createNode("identifier"); $$.node->attributes["name"] = strfy($1.str_val); }
| IDENTIFIER KW_AS IDENTIFIER {
    unused($2);
    $$.node = createNode("as");
    auto as_identifier_1 = createNode("identifier");
    auto as_identifier_2 = createNode("identifier");
    as_identifier_1->attributes["name"] = strfy($1.str_val);
    as_identifier_2->attributes["name"] = strfy($3.str_val);
    $$.node->appendChild(as_identifier_1);
    $$.node->appendChild(as_identifier_2);
  }

dotted_name:
  IDENTIFIER {
    $$.node = createNode("identifier");
    $$.node->attributes["name"] = strfy($1.str_val);
  }
| dotted_name DLM_DOT IDENTIFIER {
    unused($2);
    $$.node = $1.node;
    $$.node->attributes["name"].get<std::string>() += strfy(".");
    $$.node->attributes["name"].get<std::string>() += strfy($3.str_val);
  }

dotted_as_name:
  dotted_name { $$.node = $1.node; }
| dotted_name KW_AS IDENTIFIER {
    unused($2);
    $$.node = createNode("as");
    auto as_identifier = createNode("identifier");
    as_identifier->attributes["name"] = strfy($3.str_val);
    $$.node->appendChild($1.node);
    $$.node->appendChild(as_identifier);
  }

dotted_as_names:
  dotted_as_name {
    $$.node = createNode("import_names");
    $$.node->appendChild($1.node);
  }
| dotted_as_names DLM_CMM dotted_as_name {
    unused($2);
    $$.node = $1.node;
    $$.node->appendChild($3.node);
  }

global_stmt:
  KW_GLOBAL IDENTIFIER {
    unused($1);
    $$.node = createNode("global");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy($2.str_val);
    $$.node->appendChild(identifier);
  }
| global_stmt DLM_CMM IDENTIFIER {
    unused($2);
    $$.node = $1.node;
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy($3.str_val);
    $$.node->appendChild(identifier);
  }

assert_stmt:
  KW_ASSERT test {
    unused($1);
    $$.node = createNode("assert");
    $$.node->appendChild($2.node);
  }
| KW_ASSERT test DLM_CMM test {
    unused($1);
    unused($3);
    $$.node = createNode("assert");
    $$.node->appendChild($2.node);
    $$.node->appendChild($4.node);
  }

compound_stmt:
  if_stmt { $$.node = $1.node; }
| while_stmt { $$.node = $1.node; }
| for_stmt { $$.node = $1.node; }
| try_stmt { $$.node = $1.node; }
| with_stmt { $$.node = $1.node; }
| funcdef { $$.node = $1.node; }
| classdef { $$.node = $1.node; }

if_stmt:
  if_stmt_without_else { $$.node = $1.node; }
| if_stmt_without_else KW_ELSE DLM_CLN suite {
    unused($2);
    unused($3);
    $$.node = $1.node;
    auto else_node = createNode("else");
    else_node->appendChild($4.node);
    $$.node->appendChild(else_node);
  }

if_stmt_without_else:
  KW_IF test DLM_CLN suite {
    unused($1);
    unused($3);
    $$.node = createNode("if_else");
    auto if_node = createNode("if");
    auto if_decl = createNode("if_decl");

    if_decl->appendChild($2.node);
    if_node->appendChild(if_decl);
    if_node->appendChild($4.node);
    $$.node->appendChild(if_node);
  }
| if_stmt_without_else KW_ELIF test DLM_CLN suite {
    unused($2);
    unused($4);
    $$.node = $1.node;
    auto elif_node = createNode("elif");
    auto elif_decl = createNode("elif_decl");

    elif_decl->appendChild($3.node);
    elif_node->appendChild(elif_decl);
    elif_node->appendChild($5.node);
    $$.node->appendChild(elif_node);
  }

while_stmt:
  KW_WHILE test DLM_CLN suite {
    unused($1);
    unused($3);
    $$.node = createNode("while");
    auto while_decl = createNode("while_decl");
    while_decl->appendChild($2.node);
    $$.node->appendChild(while_decl);
    $$.node->appendChild($4.node);
  }
| KW_WHILE test DLM_CLN suite KW_ELSE DLM_CLN suite {
    unused($1);
    unused($3);
    unused($5);
    unused($6);
    $$.node = createNode("while_else");
    auto while_node = createNode("while");
    auto while_decl = createNode("while_decl");
    auto else_node = createNode("else");
    while_decl->appendChild($2.node);
    while_node->appendChild(while_decl);
    while_node->appendChild($4.node);
    else_node->appendChild($7.node);
    $$.node->appendChild(while_node);
    $$.node->appendChild(else_node);
  }

for_stmt:
  KW_FOR exprlist KW_IN testlist DLM_CLN suite {
    unused($1);
    unused($3);
    unused($5);
    $$.node = createNode("for");
    auto for_decl = createNode("for_decl");
    for_decl->appendChild($2.node);
    for_decl->appendChild($4.node);
    $$.node->appendChild($6.node);
  }
| KW_FOR exprlist KW_IN testlist DLM_CLN suite KW_ELSE DLM_CLN suite {
    unused($1);
    unused($3);
    unused($5);
    unused($7);
    unused($8);
    $$.node = createNode("for_else");
    auto for_node = createNode("for");
    auto for_decl = createNode("for_decl");
    auto else_node = createNode("else");
    for_decl->appendChild($2.node);
    for_decl->appendChild($4.node);
    for_node->appendChild(for_decl);
    for_node->appendChild($6.node);
    else_node->appendChild($9.node);
    $$.node->appendChild(for_node);
    $$.node->appendChild(else_node);
  }

try_stmt:
  KW_TRY DLM_CLN suite try_except {
    unused($1);
    unused($2);
    $$.node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild($3.node);

    $$.node->appendChild(try_node);
    $$.node->appendChild($4.node);
  }
| KW_TRY DLM_CLN suite try_except KW_ELSE DLM_CLN suite {
    unused($1);
    unused($2);
    unused($5);
    unused($6);
    $$.node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild($3.node);
    auto else_node = createNode("else");
    else_node->appendChild($7.node);

    $$.node->appendChild(try_node);
    $$.node->appendChild($4.node);
    $$.node->appendChild(else_node);
  }
| KW_TRY DLM_CLN suite try_except KW_FINALLY DLM_CLN suite {
    unused($1);
    unused($2);
    unused($5);
    unused($6);
    $$.node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild($3.node);
    auto finally_node = createNode("finally");
    finally_node->appendChild($7.node);

    $$.node->appendChild(try_node);
    $$.node->appendChild($4.node);
    $$.node->appendChild(finally_node);
  }
| KW_TRY DLM_CLN suite try_except KW_ELSE DLM_CLN suite KW_FINALLY DLM_CLN suite {
    unused($1);
    unused($2);
    unused($5);
    unused($6);
    unused($8);
    unused($9);
    $$.node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild($3.node);
    auto else_node = createNode("else");
    else_node->appendChild($7.node);
    auto finally_node = createNode("finally");
    finally_node->appendChild($10.node);

    $$.node->appendChild(try_node);
    $$.node->appendChild($4.node);
    $$.node->appendChild(else_node);
    $$.node->appendChild(finally_node);
  }
| KW_TRY DLM_CLN suite KW_FINALLY DLM_CLN suite {
    unused($1);
    unused($2);
    unused($5);
    unused($6);
    $$.node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild($3.node);
    auto else_node = createNode("else");
    else_node->appendChild($6.node);
    $$.node->appendChild(try_node);
    $$.node->appendChild($4.node);
    $$.node->appendChild(else_node);
  }

try_except:
  except_clause DLM_CLN suite {
    unused($2);
    $$.node = createNode("except");
    auto except_clause_node = createNode("except_clause");
    except_clause_node->appendChild($1.node);
    except_clause_node->appendChild($3.node);
    $$.node->appendChild(except_clause_node);
  }
| try_except except_clause DLM_CLN suite {
    unused($3);
    $$.node = $1.node;;
    auto except_clause_node = createNode("except_clause");
    except_clause_node->appendChild($2.node);
    except_clause_node->appendChild($4.node);
    $$.node->appendChild(except_clause_node);
  }

except_clause:
  KW_EXCEPT { unused($1); $$.node = createNode("except_decl"); }
| KW_EXCEPT test { unused($1); $$.node = createNode("except_decl"); $$.node->appendChild($2.node); }
| KW_EXCEPT test KW_AS IDENTIFIER {
    unused($1);
    unused($3);
    $$.node = createNode("except_decl");
    auto as_node = createNode("as");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy($4.str_val);
    as_node->appendChild($2.node);
    as_node->appendChild(identifier);
    $$.node->appendChild(as_node);
  }

with_stmt:
  with_items_part DLM_CLN suite {
    unused($2);
    $$.node = createNode("with");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

with_items_part:
  with_item_begin_part { $$.node = $1.node; }
| with_items_part DLM_CMM test { unused($2); $$.node = $1.node; $$.node->appendChild($3.node); }
| with_items_part DLM_CMM test KW_AS expr {
    unused($2);
    unused($4);
    $$.node = $1.node;
    auto as_node = createNode("as");
    as_node->appendChild($3.node);
    as_node->appendChild($5.node);
    $$.node->appendChild(as_node);
  }

with_item_begin_part:
  KW_WITH test {
    unused($1);
    $$.node = createNode("with_decl");
    $$.node->appendChild($2.node);
  }
| KW_WITH test KW_AS expr {
    unused($1);
    unused($3);
    $$.node = createNode("with_decl");
    auto as_node = createNode("as");
    as_node->appendChild($2.node);
    as_node->appendChild($4.node);
    $$.node->appendChild(as_node);
  }

suite:
  simple_stmt { $$.node = createNode("suite"); $$.node->appendChild($1.node); }
| suite_stmts DEDENT { unused($2); $$.node = $1.node; }

suite_stmts:
  NEWLINE INDENT stmt {
    unused($1);
    unused($2);
    $$.node = createNode("suite");
    $$.node->appendChild($3.node);
  }
| suite_stmts stmt {
    $$.node = $1.node;
    $1.node->appendChild($2.node);
  }

test:
  or_test { $$.node = $1.node; }
| or_test KW_IF or_test KW_ELSE test {
    unused($2);
    unused($4);
    $$.node = createNode("if_else");
    auto if_node = createNode("if");
    auto if_decl = createNode("if_decl");
    auto else_node = createNode("else");

    if_decl->appendChild($3.node);
    if_node->appendChild(if_decl);
    if_node->appendChild($1.node);
    else_node->appendChild($5.node);
    $$.node->appendChild(if_node);
    $$.node->appendChild(else_node);
  }
| lambdef { $$.node = $1.node; }

test_nocond:
  or_test { $$.node = $1.node; }
| lambdef_nocond { $$.node = $1.node; }

lambdef:
  lambdef_begin_part DLM_CLN test {
    unused($2);
    $$.node = $1.node;
    $$.node->attributes["lambdef_body_cond"] = false;
    $$.node->appendChild($3.node);
  }

lambdef_nocond:
  lambdef_begin_part DLM_CLN test_nocond {
    unused($2);
    $$.node = $1.node;
    $$.node->attributes["lambdef_body_cond"] = true;
    $$.node->appendChild($3.node);
  }

lambdef_begin_part:
  KW_LAMBDA {
    unused($1);
    $$.node = createNode("lambdef");
    $$.node->attributes["lambdef_has_args"] = false;
  }
| KW_LAMBDA varargslist {
    unused($1);
    $$.node = createNode("lambdef");
    $$.node->attributes["lambdef_has_args"] = true;
    $$.node->attributes["lambdef_arglist_pos"].get<long long>() = 0;
    $$.node->appendChild($2.node);
  }

or_test:
  and_test { $$.node = $1.node; }
| or_test KW_OR and_test {
    unused($2);
    $$.node = createNode("or");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

and_test:
  not_test { $$.node = $1.node; }
| and_test KW_AND not_test {
    unused($2);
    $$.node = createNode("and");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

not_test:
  KW_NOT not_test { unused($1); $$.node = createNode("not"); $$.node->appendChild($2.node); }
| comparison { $$.node = $1.node; }

comparison:
  expr { $$.node = $1.node; }
| comparison comp_op expr {
    $$.node = $2.node;
    $2.node->appendChild($1.node);
    $2.node->appendChild($3.node);
  }

comp_op:
  DLM_LSS { unused($1); $$.node = createNode("<"); }
| DLM_GTT { unused($1); $$.node = createNode(">"); }
| DLM_EQT { unused($1); $$.node = createNode("=="); }
| DLM_GTE { unused($1); $$.node = createNode(">="); }
| DLM_LSE { unused($1); $$.node = createNode("<="); }
| DLM_NEQ { unused($1); $$.node = createNode("!="); }
| KW_IN { unused($1); $$.node = createNode("in"); }
| KW_NOT KW_IN { unused($1, $2); $$.node = createNode("not in"); }
| KW_IS { unused($1); $$.node = createNode("is"); }
| KW_IS KW_NOT { unused($1, $2); $$.node = createNode("is not"); }

star_expr: DLM_AST expr {
    unused($1);
    $$.node = createNode("unpack");
    $$.node->appendChild($2.node);
  }

expr:
  xor_expr { $$.node = $1.node; }
| expr DLM_OR xor_expr {
    unused($2);
    $$.node = createNode("|");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

xor_expr:
  and_expr { $$.node = $1.node; }
| xor_expr DLM_XOR and_expr {
    unused($2);
    $$.node = createNode("^");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

and_expr:
  shift_expr { $$.node = $1.node; }
| and_expr DLM_AND shift_expr {
    unused($2);
    $$.node = createNode("&");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

shift_expr:
  arith_expr { $$.node = $1.node; }
| shift_expr DLM_LSFT arith_expr {
    unused($2);
    $$.node = createNode("<<");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| shift_expr DLM_RSFT arith_expr {
    unused($2);
    $$.node = createNode(">>");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

arith_expr:
  term { $$.node = $1.node; }
| arith_expr DLM_PLUS term {
    unused($2);
    $$.node = createNode("+");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| arith_expr DLM_MINS term {
    unused($2);
    $$.node = createNode("-");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

term:
  factor { $$.node = $1.node; }
| term DLM_AST factor {
    unused($2);
    $$.node = createNode("*");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| term DLM_DIV factor {
    unused($2);
    $$.node = createNode("/");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| term DLM_MOD factor {
    unused($2);
    $$.node = createNode("%");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| term DLM_FDIV factor {
    unused($2);
    $$.node = createNode("//");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

factor:
  DLM_PLUS factor { unused($1); $$.node = createNode("+"); $$.node->appendChild($2.node); }
| DLM_MINS factor { unused($1); $$.node = createNode("-"); $$.node->appendChild($2.node); }
| DLM_FLP factor { unused($1); $$.node = createNode("~"); $$.node->appendChild($2.node); }
| power { $$.node = $1.node; }

power:
  atom_expr { $$.node = createNode("**"); $$.node->appendChild($1.node); }
| atom_expr DLM_DAST factor {
    unused($2);
    $$.node = createNode("**");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }

atom_expr:
  atom { $$.node = createNode("atom_expr"); $$.node->appendChild($1.node); }
| atom_expr trailer {
    $$.node = createNode("atom_expr");
    $$.node->appendChild($1.node);
    $$.node->appendChild($2.node);
  }

atom:
  DLM_LPTS DLM_RPTS {
    unused($1);
    unused($2);
    $$.node = createNode("tuple");
  }
| DLM_LPTS testlist_comp DLM_RPTS {
    unused($1);
    unused($3);
    $$.node = createNode("tuple");
    $$.node->appendChild($2.node);
  }
| DLM_LBKT DLM_RBKT {
    unused($1);
    unused($2);
    $$.node = createNode("list");
  }
| DLM_LBKT testlist_comp DLM_RBKT {
    unused($1);
    unused($3);
    $$.node = createNode("dict");
    $$.node->appendChild($2.node);
  }
| DLM_LBC DLM_RBC {
    unused($1);
    unused($2);
    $$.node = createNode("dict");
  }
| DLM_LBC dictorsetmaker DLM_RBC {
    unused($1);
    unused($3);
    if ($2.node->attributes["type"].get<std::string>() == "dict")
        $$.node = createNode("dict");
    else if ($2.node->attributes["type"].get<std::string>() == "set")
        $$.node = createNode("set");
    $$.node->appendChild($2.node);
  }
| IDENTIFIER { $$.node = createNode("identifier"); $$.node->attributes["name"] = strfy($1.str_val); }
| number { $$.node = $1.node; }
| atom_multi_string { $$.node = $1.node; }
| KW_NONE { unused($1); $$.node = createNode("none"); $$.node->attributes["value"] = Null(); }
| KW_TRUE { unused($1); $$.node = createNode("bool"); $$.node->attributes["value"] = true; }
| KW_FALSE { unused($1); $$.node = createNode("bool"); $$.node->attributes["value"] = false; }

atom_multi_string:
  STRING {
    $$.node = createNode("string");
    $$.node->attributes["value"] = strfy($1.str_val); }
| atom_multi_string STRING {
    $$.node = $1.node;
    $$.node->attributes["value"].get<std::string>() += $2.str_val;
  }

testlist_comp:
  testlist_comp_item comp_for {
    $$.node = createNode("testlist_comp");
    $$.node->appendChild($1.node);
    $$.node->appendChild($2.node);
  }
| testlist_comp_item testlist_comp_items_with_trail {
    if ($2.node == nullptr)
        $$.node = createNode("testlist_comp");
    else
        $$.node = $2.node;
    $$.node->prependChild($1.node);
  }

testlist_comp_items_with_trail:
  testlist_comp_items { $$.node = $1.node; }
| testlist_comp_items DLM_CMM { unused($2); $$.node = $1.node; }

testlist_comp_items:
  %empty { $$.node = nullptr; }
| testlist_comp_items DLM_CMM testlist_comp_item {
    unused($2);
    if ($1.node == nullptr)
        $$.node = createNode("testlist_comp");
    else
        $$.node = $1.node;
    $$.node->appendChild($3.node);
  }

testlist_comp_item:
  test { $$.node = $1.node; }
| star_expr { $$.node = $1.node; }

trailer:
  DLM_LPTS DLM_RPTS {
    unused($1);
    unused($2);
    $$.node = createNode("trailer");
    $$.node->appendChild("arglist");
  }
| DLM_LPTS arglist DLM_RPTS {
    unused($1);
    unused($3);
    $$.node = createNode("trailer");
    $$.node->appendChild($2.node);
  }
| DLM_LBKT subscriptlist DLM_RBKT {
    unused($1);
    unused($3);
    $$.node = createNode("trailer");
    $$.node->appendChild($2.node);
  }
| DLM_DOT IDENTIFIER {
    unused($1);
    $$.node = createNode("trailer");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy($2.str_val);
    $$.node->appendChild(identifier);
  }

subscriptlist:
  subscriptlist_without_trail { $$.node = $1.node; }
| subscriptlist_without_trail DLM_CMM { unused($2); $$.node = $1.node; }

subscriptlist_without_trail:
  subscript {
    $$.node = createNode("subscriptlist");
    $$.node->appendChild($1.node);
  }
| subscriptlist_without_trail DLM_CMM subscript {
    unused($2);
    $1.node->appendChild($3.node);
    $$.node = $1.node;
  }

subscript:
  test {
    $$.node = createNode("subscript");
    $$.node->appendChild($1.node);
  }
| test DLM_CLN {
    unused($2);
    $$.node = createNode("subscript");
    $$.node->appendChild($1.node);
  }
| test DLM_CLN test {
    unused($2);
    $$.node = createNode("subscript");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| test DLM_CLN test DLM_CLN {
    unused($2);
    unused($4);
    $$.node = createNode("subscript");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| test DLM_CLN test DLM_CLN test {
    unused($2);
    unused($4);
    $$.node = createNode("subscript");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
    $$.node->appendChild($5.node);
  }

exprlist:
  exprlist_without_trail { $$.node = $1.node; }
| exprlist_without_trail DLM_CMM { unused($2); $$.node = $1.node; }

exprlist_without_trail:
  exprlist_item {
    $$.node = createNode("exprlist");
    $$.node->appendChild($1.node);
  }
| exprlist_without_trail DLM_CMM exprlist_item {
    unused($2);
    $1.node->appendChild($3.node);
    $$.node = $1.node;
  }

exprlist_item:
  expr { $$.node = $1.node; }
| star_expr { $$.node = $1.node; }

testlist:
  testlist_without_trail { $$.node = $1.node; }
| testlist_without_trail DLM_CMM { unused($2); $$.node = $1.node; }

testlist_without_trail:
  test {
    $$.node = createNode("testlist");
    $$.node->appendChild($1.node);
  }
| testlist_without_trail DLM_CMM test {
    unused($2);
    $1.node->appendChild($3.node);
    $$.node = $1.node;
  }

dictorsetmaker:
  dictorsetmaker_dict { $$.node = $1.node; }
| dictorsetmaker_set { $$.node = $1.node; }

dictorsetmaker_dict:
  dictorsetmaker_dict_item dictorsetmaker_dict_second {
    $$.node = createNode("dictorsetmaker");
    $$.node->attributes["type"] = strfy("dict");
    $$.node->appendChild($1.node);
    if ($2.node == nullptr) {
        /// only a single trail comma
    }
    else if ($2.node->key == "dictorsetmaker_dict_second") {
        /// append $2 children to $$ and delete $2
        for (auto child : $2.node->children)
            $$.node->appendChild(child);
        delete $2.node;
    }
    else {
        /// comp_for expression
        $$.node->appendChild($2.node);
    }
  }

dictorsetmaker_dict_item:
  test DLM_CLN test {
    /// a pair in the dictionary: test ":" test
    unused($2);
    $$.node = createNode("dict_pair");
    $$.node->appendChild($1.node);
    $$.node->appendChild($3.node);
  }
| DLM_DAST expr {
    /// unpack another dictionary: "**" expr
    unused($1);
    $$.node = createNode("dict_unpack");
    $$.node->appendChild($2.node);
  }

dictorsetmaker_dict_second:
  comp_for { $$.node = $1.node; }
| dictorsetmaker_dict_second_without_trail { $$.node = $1.node; }
| dictorsetmaker_dict_second_without_trail DLM_CMM { unused($2); $$.node = $1.node; }
| DLM_CMM { $$.node = nullptr; unused($1); }
| %empty { $$.node = nullptr; }

dictorsetmaker_dict_second_without_trail:
  dictorsetmaker_dict_item {
    $$.node = createNode("dictorsetmaker_dict_second");
    $$.node->appendChild($1.node);
  }
| dictorsetmaker_dict_second_without_trail DLM_CMM dictorsetmaker_dict_item {
    unused($2);
    $$.node = $1.node;
    $1.node->appendChild($3.node);
  }

dictorsetmaker_set:
  dictorsetmaker_set_item dictorsetmaker_set_second {
    $$.node = createNode("dictorsetmaker");
    $$.node->attributes["type"] = strfy("set");
    $$.node->appendChild($1.node);
    if ($2.node == nullptr) {
        /// only a single trail comma
    }
    else if ($2.node->key == "dictorsetmaker_set_second") {
        /// append $2 children to $$ and delete $2
        for (auto child : $2.node->children)
            $$.node->appendChild(child);
        delete $2.node;
    }
    else {
        /// comp_for expression
        $$.node->appendChild($2.node);
    }
  }

dictorsetmaker_set_item:
  test { $$.node = $1.node; }
| star_expr { $$.node = $1.node; }

dictorsetmaker_set_second:
  comp_for { $$.node = $1.node; }
| dictorsetmaker_set_second_without_trail { $$.node = $1.node; }
| dictorsetmaker_set_second_without_trail DLM_CMM { unused($2); $$.node = $1.node; }
| DLM_CMM { $$.node = nullptr; unused($1); }
| %empty { $$.node = nullptr; }

dictorsetmaker_set_second_without_trail:
  dictorsetmaker_set_item {
    $$.node = createNode("dictorsetmaker_set_second");
    $$.node->appendChild($1.node);
  }
| dictorsetmaker_set_second_without_trail DLM_CMM dictorsetmaker_set_item {
    unused($2);
    $$.node = $1.node;
    $1.node->appendChild($3.node);
  }

classdef:
  KW_CLASS IDENTIFIER DLM_CLN suite {
    unused($1);
    unused($3);
    $$.node = createNode("classdef");
    $$.node->attributes["name"] = strfy($2.str_val);
    $$.node->attributes["is_inherit_other_class"] = false;
    $$.node->appendChild($4.node);
  }
| KW_CLASS IDENTIFIER DLM_LPTS DLM_RPTS DLM_CLN suite {
    unused($1);
    unused($3);
    unused($4);
    unused($5);
    $$.node = createNode("classdef");
    $$.node->attributes["name"] = strfy($2.str_val);
    $$.node->attributes["is_inherit_other_class"] = false;
    $$.node->appendChild($6.node);
  }
| KW_CLASS IDENTIFIER DLM_LPTS arglist DLM_RPTS DLM_CLN suite {
    unused($1);
    unused($3);
    unused($5);
    unused($6);
    $$.node = createNode("classdef");
    $$.node->attributes["name"] = strfy($2.str_val);
    $$.node->attributes["is_inherit_other_class"] = true;
    $$.node->appendChild($4.node);
    $$.node->appendChild($7.node);
  }

arglist:
  arglist_without_trail DLM_CMM {
    unused($2);
    $$.node = $1.node;
  }

arglist_without_trail:
  argument {
    $$.node = createNode("arglist");
    $$.node->appendChild($1.node);
  }
| arglist_without_trail DLM_CMM argument {
    unused($2);
    $1.node->appendChild($3.node);
    $$.node = $1.node;
  }


argument:
  test {
    $$.node = createNode("argument");
    $$.node->appendChild($1.node);
  }
| test comp_for {
    $$.node = createNode("argument");
    $$.node->appendChild($1.node);
    $$.node->appendChild($2.node);
  }
| test DLM_EQL test {
    unused($2);
    $$.node = createNode("argument");
    $$.node->appendChild($1.node);
    $$.node->appendChild("DLM_EQL");
    $$.node->appendChild($3.node);
  }
| DLM_DAST test {
    unused($1);
    $$.node = createNode("argument");
    $$.node->appendChild("DLM_DAST");
    $$.node->appendChild($2.node);
  }
| DLM_AST test {
    unused($1);
    $$.node = createNode("argument");
    $$.node->appendChild("DLM_AST");
    $$.node->appendChild($2.node);
  }

comp_iter:
  comp_for {
    $$.node = createNode("comp_iter");
    $$.node->appendChild($1.node);
  }
| comp_if {
    $$.node = createNode("comp_iter");
    $$.node->appendChild($1.node);
  }

comp_for:
  KW_FOR exprlist KW_IN or_test {
    unused($1);
    unused($3);
    $$.node = createNode("comp_for");
    $$.node->appendChild("KW_FOR");
    $$.node->appendChild($2.node);
    $$.node->appendChild("KW_IN");
    $$.node->appendChild($4.node);
  }
| KW_FOR exprlist KW_IN or_test comp_iter {
    unused($1);
    unused($3);
    $$.node = createNode("comp_for");
    $$.node->appendChild("KW_FOR");
    $$.node->appendChild($2.node);
    $$.node->appendChild("KW_IN");
    $$.node->appendChild($4.node);
    $$.node->appendChild($5.node);
  }

comp_if:
  KW_IF test_nocond {
    unused($1);
    $$.node = createNode("comp_if");
    $$.node->appendChild("KW_IF");
    $$.node->appendChild($2.node);
  }
| KW_IF test_nocond comp_iter {
    unused($1);
    $$.node = createNode("comp_if");
    $$.node->appendChild("KW_IF");
    $$.node->appendChild($2.node);
    $$.node->appendChild($3.node);
  }

number:
  NUM_INT {
    $$.node = createNode("number");
    $$.node->attributes["value"] = $1.int_val;
  }
| NUM_FLOAT {
    $$.node = createNode("number");
    $$.node->attributes["value"] = $1.float_val;
  }
| NUM_IMAG {
    $$.node = createNode("number");
    $$.node->attributes["value"] = Complex(0, $1.imag_val);
  }
