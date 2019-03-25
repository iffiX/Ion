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
#define unused(x)
}

%code {
void yy::parser::error (const location_type& loc, const std::string& msg) {
    // do nothing
}
}

%destructor {  } IDENTIFIER NEWLINE INDENT DEDENT ENDMARKER NUM_INT NUM_FLOAT
                 NUM_IMAG STRING BYTES KW_FALSE KW_NONE KW_TRUE KW_AND KW_AS KW_ASSERT KW_BREAK
                 KW_CLASS KW_CONTINUE KW_DEF KW_DEL KW_ELIF KW_ELSE KW_EXCEPT KW_FINALLY KW_FOR
                 KW_FROM KW_GLOBAL KW_IF KW_IMPORT KW_IN KW_IS KW_LAMBDA KW_NOT KW_OR KW_PASS
                 KW_RAISE KW_RETURN KW_TRY KW_WHILE KW_WITH KW_END DLM_PLUS DLM_MINS DLM_AST
                 DLM_DAST DLM_DIV DLM_FDIV DLM_MOD DLM_LSFT DLM_RSFT DLM_AND DLM_OR DLM_XOR
                 DLM_FLP DLM_LSS DLM_LSE DLM_GTT DLM_GTE DLM_EQT DLM_NEQ DLM_LPTS DLM_RPTS
                 DLM_LBKT DLM_RBKT DLM_LBC DLM_RBC DLM_CMM DLM_CLN DLM_DOT DLM_ELPS DLM_SCLN
                 DLM_EQL DLM_RARW DLM_PLUSE DLM_MINSE DLM_MULE DLM_EXPE DLM_DIVE DLM_FDVE
                 DLM_MODE DLM_ANDE DLM_ORE DLM_XORE DLM_LSTE DLM_RSTE DLM_DASTE

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
%token DLM_ELPS
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
%token DLM_DASTE

%glr-parser
%%
input: single_input | file_input | eval_input

single_input: NEWLINE | simple_stmt | compound_stmt NEWLINE

file_input:
  file_input_first ENDMARKER

file_input_first:
  %empty
| file_input_first NEWLINE
| file_input_first stmt

eval_input:
  eval_input_first ENDMARKER

eval_input_first:
  testlist
| eval_input_first NEWLINE

funcdef:
  KW_DEF IDENTIFIER parameters DLM_CLN suite
| KW_DEF IDENTIFIER parameters DLM_RARW test DLM_CLN suite

parameters:
  DLM_LPTS DLM_RPTS
| DLM_LPTS typedargslist DLM_RPTS

/* The same as varargslist, except replacing vfpdef with tfpdef */
typedargslist:
  typedargslist_begin typedargslist_first
| typedargslist_begin typedargslist_second
| typedargslist_begin typedargslist_third

typedargslist_begin:
  tfpdef
  tfpdef DLM_EQL test
| typedargslist_begin DLM_CMM tfpdef
| typedargslist_begin DLM_CMM tfpdef DLM_EQL test

typedargslist_first:
  %empty
| DLM_CMM
| DLM_CMM typedargslist_first_1

typedargslist_first_1:
  typedargslist_first_1_begin DLM_CMM
| typedargslist_first_1_begin DLM_CMM DLM_DAST tfpdef
| typedargslist_first_1_begin DLM_CMM DLM_DAST tfpdef DLM_CMM
| DLM_DAST tfpdef
| DLM_DAST tfpdef DLM_CMM

typedargslist_first_1_begin:
  DLM_AST tfpdef
| typedargslist_first_1_begin DLM_CMM tfpdef
| typedargslist_first_1_begin DLM_CMM tfpdef DLM_EQL test

typedargslist_second:
  typedargslist_second_2 DLM_CMM
| typedargslist_second_2 DLM_CMM DLM_DAST tfpdef
| typedargslist_second_2 DLM_CMM DLM_DAST tfpdef DLM_CMM

typedargslist_second_1:
  DLM_AST
| DLM_AST tfpdef

typedargslist_second_2:
  typedargslist_second_1
| typedargslist_second_2 DLM_CMM tfpdef
| typedargslist_second_2 DLM_CMM tfpdef DLM_EQL test

typedargslist_third:
  DLM_DAST tfpdef
| DLM_DAST tfpdef DLM_CMM

tfpdef:
  IDENTIFIER
| IDENTIFIER DLM_CLN test

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
  varargslist_begin varargslist_first
| varargslist_begin varargslist_second
| varargslist_begin varargslist_third

varargslist_begin:
  vfpdef
  vfpdef DLM_EQL test
| varargslist_begin DLM_CMM vfpdef
| varargslist_begin DLM_CMM vfpdef DLM_EQL test

/*   [','
        [ '*' [vfpdef] (',' vfpdef ['=' test])* [',' ['**' vfpdef [',']]]
        | '**' vfpdef [',']]
     ]
*/
varargslist_first:
  %empty
| DLM_CMM
| DLM_CMM varargslist_first_1

varargslist_first_1:
  varargslist_first_1_begin DLM_CMM
| varargslist_first_1_begin DLM_CMM DLM_DAST vfpdef
| varargslist_first_1_begin DLM_CMM DLM_DAST vfpdef DLM_CMM
| DLM_DAST vfpdef
| DLM_DAST vfpdef DLM_CMM

varargslist_first_1_begin:
  DLM_AST vfpdef
| varargslist_first_1_begin DLM_CMM vfpdef
| varargslist_first_1_begin DLM_CMM vfpdef DLM_EQL test

varargslist_second:
  varargslist_second_2 DLM_CMM
| varargslist_second_2 DLM_CMM DLM_DAST vfpdef
| varargslist_second_2 DLM_CMM DLM_DAST vfpdef DLM_CMM

varargslist_second_1:
  DLM_AST
| DLM_AST vfpdef

varargslist_second_2:
  varargslist_second_1
| varargslist_second_2 DLM_CMM vfpdef
| varargslist_second_2 DLM_CMM vfpdef DLM_EQL test

varargslist_third:
  DLM_DAST vfpdef
| DLM_DAST vfpdef DLM_CMM

vfpdef: IDENTIFIER

stmt: simple_stmt | compound_stmt

simple_stmt:
  small_stmt NEWLINE
| small_stmt DLM_SCLN NEWLINE
| small_stmt DLM_SCLN simple_stmt

small_stmt:
  expr_stmt
| del_stmt
| pass_stmt
| flow_stmt
| import_stmt
| global_stmt
| assert_stmt

expr_stmt:
  testlist_star_expr annassign
| testlist_star_expr augassign testlist
| testlist_star_expr eql_expr

eql_expr:
  %empty
| eql_expr DLM_EQL testlist_star_expr

annassign:
  DLM_CLN test
| DLM_CLN test DLM_EQL test

testlist_star_expr:
  testlist_star_expr_without_trail
| testlist_star_expr_without_trail DLM_CMM

testlist_star_expr_without_trail:
  test
| star_expr
| testlist_star_expr DLM_CMM test
| testlist_star_expr DLM_CMM star_expr

augassign:
  DLM_PLUSE | DLM_MINSE | DLM_MULE | DLM_DIVE
| DLM_FDVE | DLM_MODE | DLM_ANDE | DLM_ORE
| DLM_XORE | DLM_LSTE | DLM_RSTE | DLM_DASTE

del_stmt: KW_DEL exprlist
pass_stmt: KW_PASS
flow_stmt: break_stmt | continue_stmt | return_stmt | raise_stmt
break_stmt: KW_BREAK
continue_stmt: KW_CONTINUE
return_stmt:
  KW_RETURN
| KW_RETURN testlist
raise_stmt:
  KW_RAISE
| KW_RAISE test
| KW_RAISE test KW_FROM test

import_stmt: import_name | import_from
import_name: KW_IMPORT dotted_as_names
import_from: import_from_part import_import_part

import_from_part:
  import_from_part_with_name dotted_name
| import_from_part_without_name

import_from_part_with_name:
  KW_FROM
| import_from_part_with_name DLM_DOT
| import_from_part_with_name DLM_ELPS

import_from_part_without_name:
  KW_FROM DLM_DOT
| KW_FROM DLM_ELPS
| import_from_part_without_name DLM_DOT
| import_from_part_without_name DLM_ELPS

import_import_part:
  KW_IMPORT DLM_AST
| KW_IMPORT DLM_LPTS import_as_names DLM_RPTS
| KW_IMPORT import_as_names

import_as_name:
  IDENTIFIER
| IDENTIFIER KW_AS IDENTIFIER

import_as_names:
  import_as_names_without_trail
| import_as_names_without_trail DLM_CMM

import_as_names_without_trail:
  import_as_name
| import_as_names_without_trail DLM_CMM import_as_name

dotted_name:
  IDENTIFIER
| dotted_name DLM_DOT IDENTIFIER

dotted_as_name:
  dotted_name
| dotted_name KW_AS IDENTIFIER

dotted_as_names:
  dotted_as_name
| dotted_as_names DLM_CMM dotted_as_name

global_stmt:
  KW_GLOBAL IDENTIFIER
| global_stmt DLM_CMM IDENTIFIER

assert_stmt:
  KW_ASSERT test
| KW_ASSERT test DLM_CMM test

compound_stmt:
  if_stmt | while_stmt | for_stmt | try_stmt | with_stmt | funcdef | classdef

if_stmt:
  if_stmt_without_else
| if_stmt_without_else KW_ELSE DLM_CLN suite

if_stmt_without_else:
  KW_IF test DLM_CLN suite
| if_stmt_without_else KW_ELIF test DLM_CLN suite

while_stmt:
  KW_WHILE test DLM_CLN suite
| KW_WHILE test DLM_CLN suite KW_ELSE DLM_CLN suite

for_stmt:
  KW_FOR exprlist KW_IN testlist DLM_CLN suite
| KW_FOR exprlist KW_IN testlist DLM_CLN suite KW_ELSE DLM_CLN suite

try_stmt:
  KW_TRY DLM_CLN suite try_except
| KW_TRY DLM_CLN suite try_except KW_ELSE DLM_CLN suite
| KW_TRY DLM_CLN suite try_except KW_FINALLY DLM_CLN suite
| KW_TRY DLM_CLN suite try_except KW_ELSE DLM_CLN suite KW_FINALLY DLM_CLN suite
| KW_TRY DLM_CLN suite KW_FINALLY DLM_CLN suite

try_except:
  except_clause DLM_CLN suite
| try_except except_clause DLM_CLN suite

with_stmt:
  with_items_part DLM_CLN suite

with_items_part:
  with_item_begin_part
| with_items_part DLM_CMM test
| with_items_part DLM_CMM test KW_AS expr

with_item_begin_part:
  KW_WITH test
| KW_WITH test KW_AS expr

except_clause:
  KW_EXCEPT
| KW_EXCEPT test
| KW_EXCEPT test KW_AS IDENTIFIER

suite:
  simple_stmt
| suite_stmts DEDENT

suite_stmts:
  NEWLINE INDENT stmt
| suite_stmts stmt

test:
  or_test
| or_test KW_IF or_test KW_ELSE test
| lambdef

test_nocond: or_test | lambdef_nocond

lambdef:
  lambdef_begin_part DLM_CLN test

lambdef_nocond:
  lambdef_begin_part DLM_CLN test_nocond

lambdef_begin_part:
  KW_LAMBDA
| KW_LAMBDA varargslist

or_test:
  and_test
| or_test KW_OR and_test

and_test:
  not_test
| and_test KW_AND not_test

not_test:
  KW_NOT not_test
| comparison

comparison:
  expr
| comparison comp_op expr

comp_op:
  DLM_LSS  | DLM_GTT  | DLM_EQT  | DLM_GTE
| DLM_LSE  | DLM_NEQ  | KW_IN    | KW_NOT KW_IN
| KW_IS    | KW_IS KW_NOT

star_expr: DLM_AST expr

expr:
  xor_expr
| expr DLM_OR xor_expr

xor_expr:
  and_expr
| xor_expr DLM_XOR and_expr

and_expr:
  shift_expr
| and_expr DLM_AND shift_expr

shift_expr:
  arith_expr
| shift_expr DLM_LSFT arith_expr
| shift_expr DLM_RSFT arith_expr

arith_expr:
  term
| arith_expr DLM_PLUS term
| arith_expr DLM_MINS term

term:
  factor
| term DLM_AST factor
| term DLM_DIV factor
| term DLM_MOD factor
| term DLM_FDIV factor

factor:
  DLM_PLUS factor
| DLM_MINS factor
| DLM_FLP factor
| power

power:
  atom_expr
| atom_expr DLM_DAST factor

atom_expr:
  atom
| atom_expr trailer

atom:
  DLM_LPTS DLM_RPTS
| DLM_LPTS testlist_comp DLM_RPTS
| DLM_LBKT DLM_RBKT
| DLM_LBKT testlist_comp DLM_RBKT
| DLM_LBC DLM_RBC
| DLM_LBC dictorsetmaker DLM_RBC
| IDENTIFIER
| number
| atom_multi_string
| DLM_ELPS
| KW_NONE
| KW_TRUE
| KW_FALSE

atom_multi_string:
  STRING
| atom_multi_string STRING

testlist_comp:
  testlist_item comp_for
| testlist_item testlist_items_with_trail

testlist_items_with_trail:
  testlist_items
| testlist_items DLM_CMM

testlist_items:
  %empty
| testlist_items DLM_CMM testlist_item

testlist_item:
  test
| star_expr

trailer:
  DLM_LPTS DLM_RPTS
| DLM_LPTS arglist DLM_RPTS
| DLM_LBKT DLM_RBKT
| DLM_LBKT subscriptlist DLM_RBKT
| DLM_DOT IDENTIFIER

subscriptlist:
  subscriptlist_without_trail
| subscriptlist_without_trail DLM_CMM

subscriptlist_without_trail:
  subscript
| subscriptlist_without_trail DLM_CMM subscript

subscript:
  test { $$.node = createNode("subscript"); $$.node->appendChild($1.node); }
| test DLM_CLN { unused($2); $$.node = createNode("subscript"); $$.node->appendChild($1.node); }
| test DLM_CLN test {
    unused($2);
  }
| test DLM_CLN test DLM_CLN
| test DLM_CLN test DLM_CLN test

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
    if ($2.node->key == "empty") {
        /// only a single trail comma
        delete $2.node;
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
| DLM_CMM { $$.node = createNode("empty"); unused($1); }

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
    if ($2.node->key == "empty") {
        /// only a single trail comma
        delete $2.node;
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
| DLM_CMM { $$.node = createNode("empty"); unused($1); }

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
    $$.node->attributes["node_inherit_arglist"] = 1;
    $$.node->appendChild($7.node);
    $$.node->appendChild($4.node);
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
