// A Bison parser, made by GNU Bison 3.3.

// Skeleton implementation for Bison GLR parsers in C

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

/* C GLR parser skeleton written by Paul Hilfinger.  */

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.cc"

/* Pure parsers.  */
#define YYPURE 1


// //                    "%code top" blocks.
#line 8 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:221

#define yylex(yylval, yyloc, lexer) lexer->lex(yylval, yyloc)
#define createNode(...) (new ASTNode(*manager, __VA_ARGS__))
#define strfy(x) std::string(x)
#define unused(...)

#line 60 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:221






# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ion.tab.h"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;

// Second part of user prologue.
#line 101 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:259
static void yyerror (const yy::parser::location_type *yylocationp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root, const char* msg);
#line 103 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:259
// Unqualified %code blocks.
#line 15 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:260

void yy::parser::error (const location_type& loc, const std::string& msg) {
    // do nothing
}

#line 111 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:260

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef unsigned char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YYASSERT (0);                                \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* The _Noreturn keyword of C11.  */
#if ! defined _Noreturn
# if defined __cplusplus && 201103L <= __cplusplus
#  define _Noreturn [[noreturn]]
# elif !(defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__)
#  if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
       || 0x5110 <= __SUNPRO_C)
#   define _Noreturn __attribute__ ((__noreturn__))
#  elif defined _MSC_VER && 1200 <= _MSC_VER
#   define _Noreturn __declspec (noreturn)
#  else
#   define _Noreturn
#  endif
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  142
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  331
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  495
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token number (for yychar).  */
#define YYMAXUTOK   342
/* YYFAULTYTOK -- Token number (for yychar) that denotes a
   syntax_error thrown from the scanner.  */
#define YYFAULTYTOK (YYMAXUTOK + 1)
/* YYUNDEFTOK -- Symbol number (for yytoken) that denotes an unknown
   token.  */
#define YYUNDEFTOK  2

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   139,   139,   145,   151,   159,   160,   161,   164,   171,
     174,   175,   176,   177,   189,   192,   193,   196,   205,   218,
     219,   228,   241,   254,   269,   273,   281,   286,   296,   297,
     298,   301,   305,   312,   319,   326,   335,   342,   347,   357,
     358,   365,   374,   380,   389,   390,   395,   405,   412,   421,
     425,   443,   456,   469,   484,   488,   496,   501,   516,   517,
     518,   521,   525,   532,   539,   546,   555,   562,   567,   577,
     578,   585,   594,   600,   609,   610,   615,   625,   632,   640,
     646,   647,   650,   655,   660,   667,   668,   669,   670,   671,
     672,   673,   676,   680,   686,   697,   698,   711,   715,   721,
     722,   725,   726,   727,   728,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   744,   746,   749,
     750,   751,   752,   754,   756,   759,   760,   763,   764,   765,
     774,   775,   777,   782,   789,   793,   798,   799,   806,   813,
     820,   827,   828,   831,   832,   839,   840,   852,   856,   864,
     865,   875,   879,   886,   893,   902,   907,   916,   917,   918,
     919,   920,   921,   922,   925,   926,   936,   948,   962,   971,
     989,   999,  1019,  1029,  1044,  1059,  1079,  1095,  1103,  1113,
    1114,  1115,  1128,  1136,  1137,  1138,  1149,  1154,  1165,  1166,
    1169,  1175,  1181,  1182,  1197,  1200,  1201,  1204,  1212,  1220,
    1225,  1234,  1235,  1243,  1244,  1252,  1253,  1256,  1257,  1264,
    1265,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1275,
    1282,  1283,  1291,  1292,  1300,  1301,  1309,  1310,  1316,  1324,
    1325,  1331,  1339,  1340,  1346,  1352,  1358,  1366,  1367,  1368,
    1369,  1372,  1373,  1381,  1382,  1389,  1394,  1400,  1405,  1411,
    1416,  1425,  1426,  1427,  1428,  1429,  1430,  1433,  1436,  1442,
    1447,  1456,  1457,  1460,  1461,  1471,  1472,  1475,  1481,  1487,
    1493,  1502,  1503,  1506,  1510,  1517,  1521,  1526,  1532,  1539,
    1549,  1550,  1553,  1557,  1564,  1565,  1568,  1569,  1572,  1576,
    1583,  1584,  1587,  1607,  1614,  1622,  1623,  1624,  1625,  1626,
    1629,  1633,  1640,  1660,  1661,  1664,  1665,  1666,  1667,  1668,
    1671,  1675,  1682,  1690,  1700,  1713,  1719,  1723,  1731,  1735,
    1740,  1747,  1753,  1761,  1765,  1771,  1780,  1792,  1798,  1807,
    1811,  1815
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NEWLINE", "INDENT",
  "DEDENT", "ENDMARKER", "NUM_INT", "NUM_FLOAT", "NUM_IMAG", "STRING",
  "BYTES", "KW_FALSE", "KW_NONE", "KW_TRUE", "KW_AND", "KW_AS",
  "KW_ASSERT", "KW_BREAK", "KW_CLASS", "KW_CONTINUE", "KW_DEF", "KW_DEL",
  "KW_ELIF", "KW_ELSE", "KW_EXCEPT", "KW_FINALLY", "KW_FOR", "KW_FROM",
  "KW_GLOBAL", "KW_IF", "KW_IMPORT", "KW_IN", "KW_IS", "KW_LAMBDA",
  "KW_NOT", "KW_OR", "KW_PASS", "KW_RAISE", "KW_RETURN", "KW_TRY",
  "KW_WHILE", "KW_WITH", "DLM_PLUS", "DLM_MINS", "DLM_AST", "DLM_DAST",
  "DLM_DIV", "DLM_FDIV", "DLM_MOD", "DLM_LSFT", "DLM_RSFT", "DLM_AND",
  "DLM_OR", "DLM_XOR", "DLM_FLP", "DLM_LSS", "DLM_LSE", "DLM_GTT",
  "DLM_GTE", "DLM_EQT", "DLM_NEQ", "DLM_LPTS", "DLM_RPTS", "DLM_LBKT",
  "DLM_RBKT", "DLM_LBC", "DLM_RBC", "DLM_CMM", "DLM_CLN", "DLM_DOT",
  "DLM_SCLN", "DLM_EQL", "DLM_RARW", "DLM_PLUSE", "DLM_MINSE", "DLM_MULE",
  "DLM_EXPE", "DLM_DIVE", "DLM_FDVE", "DLM_MODE", "DLM_ANDE", "DLM_ORE",
  "DLM_XORE", "DLM_LSTE", "DLM_RSTE", "DLM_POWE", "$accept", "input",
  "single_input", "file_input", "file_input_first", "eval_input",
  "eval_input_first", "funcdef", "parameters", "typedargslist",
  "typedargslist_begin", "typedargslist_first", "typedargslist_first_1",
  "typedargslist_first_1_begin", "typedargslist_second",
  "typedargslist_second_1", "typedargslist_second_2",
  "typedargslist_third", "tfpdef", "varargslist", "varargslist_begin",
  "varargslist_first", "varargslist_first_1", "varargslist_first_1_begin",
  "varargslist_second", "varargslist_second_1", "varargslist_second_2",
  "varargslist_third", "vfpdef", "stmt", "simple_stmt", "small_stmt",
  "expr_stmt", "eql_expr", "annassign", "testlist_star_expr",
  "testlist_star_expr_without_trail", "augassign", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "import_from_part",
  "import_from_part_begin", "import_import_part", "import_as_names",
  "import_as_names_without_trail", "import_as_name", "dotted_name",
  "dotted_as_name", "dotted_as_names", "global_stmt", "assert_stmt",
  "compound_stmt", "if_stmt", "if_stmt_without_else", "while_stmt",
  "for_stmt", "try_stmt", "try_except", "except_clause", "with_stmt",
  "with_items_part", "with_item_begin_part", "suite", "suite_stmts",
  "test", "test_nocond", "lambdef", "lambdef_nocond", "lambdef_begin_part",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "star_expr",
  "expr", "xor_expr", "and_expr", "shift_expr", "arith_expr", "term",
  "factor", "power", "atom_expr", "atom", "atom_multi_string",
  "testlist_comp", "testlist_comp_items_with_trail", "testlist_comp_items",
  "testlist_comp_item", "trailer", "subscriptlist",
  "subscriptlist_without_trail", "subscript", "exprlist",
  "exprlist_without_trail", "exprlist_item", "testlist",
  "testlist_without_trail", "dictorsetmaker", "dictorsetmaker_dict",
  "dictorsetmaker_dict_item", "dictorsetmaker_dict_second",
  "dictorsetmaker_dict_second_without_trail", "dictorsetmaker_set",
  "dictorsetmaker_set_item", "dictorsetmaker_set_second",
  "dictorsetmaker_set_second_without_trail", "classdef", "arglist",
  "arglist_without_trail", "argument", "comp_iter", "comp_for", "comp_if",
  "number", YY_NULLPTR
};
#endif

#define YYPACT_NINF -409
#define YYTABLE_NINF -289

  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
static const short yypact[] =
{
     510,  -409,    57,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  1119,  -409,    91,  -409,   109,   240,   240,  -409,   122,
    1119,   130,   133,  1157,  -409,  1119,  1119,    70,  1119,  1119,
    1195,  1195,  1195,  1195,   922,   961,   444,   104,  -409,  -409,
     575,  -409,    86,  -409,  -409,   121,    13,  -409,   249,    76,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     120,     6,    96,  -409,   156,  -409,    18,  -409,  -409,  -409,
    -409,    14,  -409,    20,  -409,   108,    41,   168,  -409,   231,
    -409,   141,   142,   153,    92,   138,   113,  -409,  -409,    59,
    -409,   191,  -409,   148,  -409,  -409,   157,    47,   147,  -409,
     141,  -409,   159,  -409,   185,  -409,   152,  -409,    29,  -409,
     160,  -409,  -409,    62,   162,  -409,   207,  -409,  -409,   764,
     167,   222,  -409,  -409,   141,  -409,  -409,  -409,  -409,   176,
     214,  -409,   178,  1195,  -409,   175,  -409,   188,  -409,   365,
    -409,    51,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,   803,  1040,  1119,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,   184,  -409,  1119,
    -409,    42,  -409,  -409,   187,   256,  -409,  1119,   190,  1119,
     764,  1119,  1157,  1157,  1157,  -409,   225,   229,  -409,  -409,
    -409,  -409,  -409,  -409,  1195,  1195,  1195,  1195,  1195,  1195,
    1195,  1195,  1195,  1195,  1195,  1195,  1195,   842,  1119,   263,
    -409,  -409,  1119,  1119,   882,   764,    16,    53,   240,  1119,
     764,   265,   266,   130,   133,   133,    45,  -409,  -409,  -409,
     201,  -409,  1119,  1119,   267,  -409,   144,   638,   764,  1195,
    -409,   240,  -409,   202,  -409,  -409,   141,  1119,  -409,  -409,
     175,  -409,  -409,   209,  -409,  -409,  -409,  -409,  -409,   210,
    -409,  -409,  -409,  -409,  -409,   203,  1040,  -409,   264,  -409,
     277,  -409,   213,  -409,  -409,   224,   764,   278,  -409,  -409,
      38,   168,  -409,  -409,  -409,   141,   142,   153,    92,   146,
     149,   118,   126,  -409,  -409,  -409,  -409,  -409,  1119,  1119,
    -409,    -5,   219,   228,  -409,   230,   235,   233,  -409,  -409,
    -409,  -409,   236,   244,  -409,   239,  -409,   247,    88,   241,
     764,  1119,  -409,   242,  -409,  -409,  -409,  -409,  -409,   246,
     133,   133,  -409,   248,   243,    27,  -409,  -409,   699,  1119,
     250,   123,   252,  -409,  -409,   302,   141,   304,  1040,  -409,
    1079,  1040,  1119,   269,   337,   279,   277,   764,  -409,  1195,
    1119,  -409,  -409,  1119,  -409,  -409,  1000,  1119,  -409,  1119,
     764,   271,  1119,  -409,   341,   341,    55,  -409,  -409,  -409,
     280,  -409,  1119,  -409,   276,   764,  -409,  -409,   285,    34,
    1119,   133,   274,  -409,   338,   764,   287,   288,   289,   764,
     291,  1157,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     141,  -409,  -409,  -409,   292,  -409,  -409,   764,  -409,  -409,
     295,   341,   341,  -409,   296,   297,    66,  -409,   764,   346,
    -409,   133,   308,  -409,   314,  1119,   374,  -409,   764,   764,
     764,  -409,   764,    39,  1119,  -409,  -409,  -409,   315,    68,
    1119,   341,   312,  -409,   316,   318,  1119,  -409,  -409,  -409,
     361,  -409,  -409,  -409,  1119,  -409,  -409,  -409,  -409,  -409,
     341,   319,  -409,   320,  1119,   764,  -409,  -409,   321,   101,
    -409,   324,   358,   327,  1119,  -409,  -409,  -409,   764,  -409,
    1119,  -409,  -409,  -409,  -409
};

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
static const unsigned short yydefact[] =
{
       0,   251,    10,     9,   329,   330,   331,   257,   256,   254,
     255,     0,   123,     0,   124,     0,     0,     0,   136,     0,
       0,     0,   199,     0,   118,   127,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       0,     4,     0,   162,    11,    80,     0,    85,    95,    99,
      86,    87,    88,   119,   120,   121,   122,    89,   130,   131,
       0,   135,    90,    91,    81,   157,   164,   158,   159,   160,
     161,     0,   183,   101,   194,     0,   192,   201,   203,   206,
     102,   207,   220,   222,   224,   226,   229,   232,   240,   241,
     243,   253,    15,   286,   163,   252,   155,     0,     0,   285,
     284,   117,   280,   282,     0,   153,     0,   147,   149,   151,
     132,    79,   200,    58,    54,   205,   128,   288,   126,     0,
       0,   186,   237,   238,   219,   239,   245,   265,   266,     0,
     263,   247,     0,     0,   249,   303,   304,     0,   290,   299,
     291,   309,     1,    12,     8,    13,    80,    81,   101,    16,
      14,    82,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    94,    92,     0,
     100,     0,   133,   137,   134,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,   215,   217,     0,   209,   213,
     210,   212,   211,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   258,   287,     0,     0,     0,     0,     0,   281,     0,
       0,     0,     0,     0,    72,     0,    59,    51,    52,    74,
       0,    53,     0,     0,     0,   188,     0,     0,     0,     0,
     246,     0,   260,   261,   259,   248,   294,     0,   250,   298,
       0,   300,   292,   296,   295,   308,   303,   310,   302,   306,
     305,    83,    84,   103,   104,    97,     0,    93,   145,   138,
       0,   140,   141,   143,   154,     0,     0,   184,   182,   197,
       0,   202,   204,   218,   216,   208,   221,   223,   225,   227,
     228,   230,   231,   233,   234,   236,   235,   242,     0,     0,
     267,   318,     0,     0,   316,   275,     0,   271,   273,   270,
     289,   156,     0,     0,   312,    49,    19,     0,    28,    24,
       0,     0,   283,     0,   166,   150,   148,   152,    73,    77,
       0,     0,    60,     0,    56,    69,    55,   129,     0,   179,
       0,   172,     0,   189,   191,   168,   187,     0,   262,   293,
     297,   307,     0,    96,     0,     0,   142,     0,   165,     0,
       0,   322,   321,     0,   319,   268,   315,   276,   269,   272,
       0,     0,     0,    20,    42,     0,    29,    21,    22,    44,
       0,    23,     0,    17,     0,     0,    78,    66,    64,    61,
       0,     0,    75,   190,   180,     0,     0,     0,     0,     0,
       0,     0,   264,   301,   311,    98,   146,   139,   144,   167,
     185,   193,   320,   317,   277,   274,   313,     0,    50,    43,
      47,     0,     0,    30,     0,    26,    39,    25,     0,   170,
      65,     0,    67,    57,    70,     0,     0,   176,     0,     0,
       0,   177,     0,   325,   278,   314,    48,    36,    34,    31,
       0,     0,    45,    18,     0,    62,     0,    71,    76,   181,
     173,   174,   178,   169,     0,   326,   323,   324,   279,    35,
       0,    37,    27,    40,     0,     0,    63,    68,     0,   327,
     196,     0,   195,    32,     0,    41,    46,   171,     0,   328,
       0,    33,    38,   175,   198
};

  // YYPGOTO[NTERM-NUM].
static const short yypgoto[] =
{
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -323,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -193,   -34,
       4,  -409,  -409,  -409,  -409,   131,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,   128,  -409,    43,   342,   179,  -409,  -409,  -409,   404,
    -409,  -409,  -409,  -409,  -409,  -409,    64,  -409,  -409,  -409,
    -165,  -409,     0,   -84,  -409,  -409,  -408,  -177,   232,   -11,
    -409,  -409,     5,   -14,   212,   215,   211,     1,    15,   -17,
    -409,  -409,  -409,  -409,   378,  -409,  -409,    69,  -409,  -409,
    -409,    49,   -10,  -409,   196,   -18,  -409,  -409,  -409,  -129,
    -409,  -409,  -409,  -140,  -409,  -409,  -409,   205,  -409,    50,
     -59,   -92,  -409,  -409
};

  // YYDEFGOTO[NTERM-NUM].
static const short yydefgoto[] =
{
      -1,    37,    38,    39,    40,    41,    42,    43,   217,   317,
     318,   377,   423,   424,   378,   379,   380,   381,   319,   112,
     113,   227,   332,   333,   228,   229,   230,   231,   114,    44,
     235,    46,    47,   167,   168,    48,    49,   169,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     172,   271,   272,   273,   108,   109,   110,    62,    63,   147,
      65,    66,    67,    68,    69,   341,   342,    70,    71,    72,
     236,   237,   148,   479,    74,   480,    75,    76,    77,    78,
      79,   194,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   129,   242,   243,   130,   210,   306,
     307,   308,   101,   102,   103,    92,    93,   137,   138,   139,
     252,   253,   140,   141,   258,   259,    94,   302,   303,   304,
     465,   466,   467,    95
};

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
static const short yytable[] =
{
      73,   257,   100,   100,    45,   280,   145,   104,   118,   107,
     251,    96,   115,   122,   123,   278,   125,   151,   124,   315,
     106,    99,    99,   241,  -101,   116,   117,  -288,   120,   121,
     111,   328,   329,   334,   127,   127,   135,   111,   244,   128,
     128,   136,   177,   178,   146,   268,   221,   254,   111,   260,
     314,   419,   420,   425,     1,   324,   481,    -5,   315,     4,
       5,     6,     7,   360,     8,     9,    10,   241,   363,   315,
     464,   315,   182,   345,   391,   183,   183,   173,   183,   241,
     316,   431,   481,   179,   180,   152,    22,    23,   269,  -101,
     149,   330,   331,   150,    97,    30,    31,    32,   447,   448,
     222,   421,   422,   452,   142,   270,   206,    33,   224,   225,
     214,   358,    98,   451,    34,   470,    35,   215,    36,   246,
     255,    -6,   207,   320,   208,   105,   471,   321,   473,   241,
     209,   226,   464,   107,   374,   375,   111,   387,   388,   250,
     119,   256,   392,   198,   199,   170,   136,   483,   396,   339,
     397,   267,   171,   263,   265,   383,   262,   376,   264,   202,
     176,   203,   204,   205,   202,   175,   203,   204,   205,   117,
     339,   340,   202,   282,   203,   204,   205,   275,   181,   277,
     285,   279,   200,   201,   184,   293,   294,   295,   296,   297,
     200,   201,   409,   200,   201,   195,   432,   196,   434,   289,
     290,   323,   211,   344,   100,   416,   197,   301,   305,   364,
     216,   404,   310,   311,   301,   291,   292,   212,   219,   117,
     429,   403,   220,    99,   443,   346,   213,   100,   218,   223,
     437,   347,   336,   337,   441,   232,   233,   238,   455,   239,
     240,   146,   241,     1,   245,   247,    99,   349,     4,     5,
       6,     7,   445,     8,     9,    10,   248,   266,   222,   274,
     276,   283,   284,   453,   185,   186,   309,   187,   325,   326,
     335,   348,   338,   460,   461,   462,   352,   463,   350,   351,
     268,   354,   356,   365,    30,    31,    32,   482,   188,   189,
     190,   191,   192,   193,   357,   359,    33,   366,   361,   362,
     367,   368,   369,    34,   393,    35,   370,    36,   371,   372,
     487,   373,   385,   482,   382,   386,   390,   389,   153,   154,
     395,   384,   399,   493,   155,   156,   157,   400,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   401,   153,   394,
     406,   417,   146,   407,   315,   410,   428,   435,   127,   426,
     250,   256,   405,   128,   430,   436,   136,   438,   439,   440,
     411,   442,   444,   412,   446,   449,   301,   414,     1,   305,
     450,   454,   418,     4,     5,     6,     7,   459,     8,     9,
      10,   456,   427,   457,   469,   474,   475,   476,   478,   485,
     433,   488,   484,   241,   490,   183,   491,   353,   355,   408,
      22,    23,   327,   174,    64,   398,   494,   286,   288,    30,
      31,   287,   133,   132,   322,   281,   413,   402,   415,   313,
     489,    33,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     0,    36,     0,   249,   458,     0,     0,     0,     0,
       0,     0,     0,     0,   468,     0,     0,     1,     0,     0,
     472,     0,     4,     5,     6,     7,   477,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,     0,     0,     0,     0,    22,
      23,     0,     0,     0,   492,     0,     0,     0,    30,    31,
      32,   133,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,   134,     1,     2,     0,     0,     3,     4,     5,
       6,     7,     0,     8,     9,    10,     0,     0,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,    17,    18,
      19,    20,    21,     0,     0,    22,    23,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,    34,     0,    35,     0,    36,     1,   143,
       0,     0,   144,     4,     5,     6,     7,     0,     8,     9,
      10,     0,     0,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,    17,    18,    19,    20,    21,     0,     0,
      22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     1,    36,     0,   343,     0,     4,     5,     6,     7,
       0,     8,     9,    10,     0,     0,    11,    12,    13,    14,
      15,    16,     0,     0,     0,     0,    17,    18,    19,    20,
      21,     0,     0,    22,    23,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,    34,     1,    35,     0,    36,     0,     4,     5,     6,
       7,     0,     8,     9,    10,     0,     0,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,    17,    18,    19,
      20,    21,     0,     0,    22,    23,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,     1,   234,     0,
       0,     0,     4,     5,     6,     7,     0,     8,     9,    10,
       0,     0,    11,    12,     0,    14,     0,    16,     0,     0,
       0,     0,     0,    18,    19,     0,    21,     0,     0,    22,
      23,     0,    24,    25,    26,     0,     1,   261,    30,    31,
      32,     4,     5,     6,     7,     0,     8,     9,    10,     0,
      33,    11,    12,     0,    14,     0,    16,    34,     0,    35,
       0,    36,    18,    19,     0,    21,     0,     0,    22,    23,
       0,    24,    25,    26,     0,     1,     0,    30,    31,    32,
       4,     5,     6,     7,     0,     8,     9,    10,     0,    33,
       0,     0,     0,     0,     0,     0,    34,     0,    35,     0,
      36,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     1,    30,    31,   298,   299,
       4,     5,     6,     7,     0,     8,     9,    10,    33,     0,
       0,     0,     0,     0,     0,    34,   300,    35,     0,    36,
       0,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     1,    30,    31,   298,   299,
       4,     5,     6,     7,     0,     8,     9,    10,    33,     0,
       0,     0,     0,     0,     0,    34,   312,    35,     0,    36,
       0,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     1,     0,    30,    31,    32,     4,
       5,     6,     7,     0,     8,     9,    10,     0,    33,     0,
       0,     0,     0,     0,     0,    34,   126,    35,     0,    36,
       0,     0,     0,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     1,     0,    30,    31,    32,     4,     5,
       6,     7,     0,     8,     9,    10,     0,    33,     0,     0,
       0,     0,     0,     0,    34,     0,    35,   131,    36,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     1,    30,    31,   298,   299,     4,     5,
       6,     7,     0,     8,     9,    10,    33,     0,     0,     0,
       0,     0,     0,    34,     0,    35,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     1,     0,    30,    31,    32,     4,     5,     6,
       7,     0,     8,     9,    10,     0,    33,     0,     0,     0,
       0,     0,     0,    34,     0,    35,     0,    36,     0,     0,
       0,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     1,    30,    31,     0,   133,     4,     5,     6,
       7,     0,     8,     9,    10,    33,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,     0,     0,     0,
       0,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       1,     0,     0,    30,    31,     4,     5,     6,     7,     0,
       8,     9,    10,     0,     0,    33,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     1,     0,
       0,    30,    31,     4,     5,     6,     7,     0,     8,     9,
      10,     0,     0,    33,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     0,    36
};

static const short yycheck[] =
{
       0,   141,    16,    17,     0,   182,    40,    17,    26,     3,
     139,    11,    23,    30,    31,   180,    33,     4,    32,     3,
      20,    16,    17,    28,     4,    25,    26,     7,    28,    29,
       3,   224,   225,   226,    34,    35,    36,     3,   130,    34,
      35,    36,    24,    25,    40,     3,    17,   139,     3,   141,
     215,   374,   375,   376,     3,   220,   464,     0,     3,     8,
       9,    10,    11,    25,    13,    14,    15,    28,    73,     3,
      31,     3,    31,   238,    47,    37,    37,    71,    37,    28,
      64,    47,   490,    69,    70,    72,    35,    36,    46,    69,
       4,    46,    47,     7,     3,    44,    45,    46,   421,   422,
      71,    46,    47,   426,     0,    63,    47,    56,    46,    47,
      63,   276,     3,    47,    63,    47,    65,    70,    67,   133,
      69,     0,    63,    70,    65,     3,   449,    74,   451,    28,
      71,    69,    31,     3,    46,    47,     3,   330,   331,   139,
      70,   141,   335,    51,    52,    69,   141,   470,    25,    26,
      27,   169,    32,   153,   154,   320,   152,    69,   153,    46,
       4,    48,    49,    50,    46,    69,    48,    49,    50,   169,
      26,    27,    46,   184,    48,    49,    50,   177,    70,   179,
     194,   181,    44,    45,    16,   202,   203,   204,   205,   206,
      44,    45,   357,    44,    45,    54,   389,    55,   391,   198,
     199,   219,    11,   237,   218,   370,    53,   207,   208,   301,
      63,   351,   212,   213,   214,   200,   201,    69,    33,   219,
     385,   350,    70,   218,   401,   239,    69,   241,    69,    69,
     395,   241,   232,   233,   399,    73,    29,    70,   431,    17,
      64,   237,    28,     3,    66,    70,   241,   247,     8,     9,
      10,    11,   417,    13,    14,    15,    68,    73,    71,     3,
      70,    36,    33,   428,    33,    34,     3,    36,     3,     3,
      69,    69,     5,   438,   439,   440,    73,   442,    69,    69,
       3,    17,    69,    64,    44,    45,    46,   464,    57,    58,
      59,    60,    61,    62,    70,    17,    56,    69,   298,   299,
      70,    66,    69,    63,   338,    65,    70,    67,    64,    70,
     475,    64,    70,   490,    73,    69,    73,    69,    69,    70,
      70,   321,    70,   488,    75,    76,    77,    25,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    33,    69,   339,
       3,    70,   338,    64,     3,   359,    70,    73,   348,    69,
     350,   351,   352,   348,    69,    17,   351,    70,    70,    70,
     360,    70,    70,   363,    69,    69,   366,   367,     3,   369,
      73,    25,   372,     8,     9,    10,    11,     3,    13,    14,
      15,    73,   382,    69,    69,    73,    70,    69,    27,    69,
     390,    70,    73,    28,    70,    37,    69,   266,   270,   356,
      35,    36,   223,    61,     0,   341,   490,   195,   197,    44,
      45,   196,    47,    35,   218,   183,   366,   348,   369,   214,
     479,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,   435,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   444,    -1,    -1,     3,    -1,    -1,
     450,    -1,     8,     9,    10,    11,   456,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,   484,    -1,    -1,    -1,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    67,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,     3,    67,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,     3,    65,    -1,    67,    -1,     8,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,     3,     4,    -1,
      -1,    -1,     8,     9,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    -1,     3,     4,    44,    45,
      46,     8,     9,    10,    11,    -1,    13,    14,    15,    -1,
      56,    18,    19,    -1,    21,    -1,    23,    63,    -1,    65,
      -1,    67,    29,    30,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    -1,     3,    -1,    44,    45,    46,
       8,     9,    10,    11,    -1,    13,    14,    15,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    44,    45,    46,    47,
       8,     9,    10,    11,    -1,    13,    14,    15,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    44,    45,    46,    47,
       8,     9,    10,    11,    -1,    13,    14,    15,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    44,    45,    46,     8,
       9,    10,    11,    -1,    13,    14,    15,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    44,    45,    46,     8,     9,
      10,    11,    -1,    13,    14,    15,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    44,    45,    46,    47,     8,     9,
      10,    11,    -1,    13,    14,    15,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    44,    45,    46,     8,     9,    10,
      11,    -1,    13,    14,    15,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    44,    45,    -1,    47,     8,     9,    10,
      11,    -1,    13,    14,    15,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    44,    45,     8,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    44,    45,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67
};

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
static const unsigned char yystos[] =
{
       0,     3,     4,     7,     8,     9,    10,    11,    13,    14,
      15,    18,    19,    20,    21,    22,    23,    28,    29,    30,
      31,    32,    35,    36,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    56,    63,    65,    67,    89,    90,    91,
      92,    93,    94,    95,   117,   118,   119,   120,   123,   124,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   145,   146,   147,   148,   149,   150,   151,   152,
     155,   156,   157,   160,   162,   164,   165,   166,   167,   168,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   193,   194,   204,   211,   160,     3,     3,   170,
     171,   190,   191,   192,   190,     3,   160,     3,   142,   143,
     144,     3,   107,   108,   116,   167,   160,   160,   193,    70,
     160,   160,   177,   177,   171,   177,    64,   160,   170,   182,
     185,    66,   182,    47,    68,   160,   170,   195,   196,   197,
     200,   201,     0,     4,     7,   117,   118,   147,   160,     4,
       7,     4,    72,    69,    70,    75,    76,    77,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   121,   122,   125,
      69,    32,   138,    71,   142,    69,     4,    24,    25,    69,
      70,    70,    31,    37,    16,    33,    34,    36,    57,    58,
      59,    60,    61,    62,   169,    54,    55,    53,    51,    52,
      44,    45,    46,    48,    49,    50,    47,    63,    65,    71,
     186,    11,    69,    69,    63,    70,    63,    96,    69,    33,
      70,    17,    71,    69,    46,    47,    69,   109,   112,   113,
     114,   115,    73,    29,     4,   118,   158,   159,    70,    17,
      64,    28,   183,   184,   209,    66,   171,    70,    68,    69,
     160,   197,   198,   199,   209,    69,   160,   201,   202,   203,
     209,     4,   118,   160,   170,   160,    73,   193,     3,    46,
      63,   139,   140,   141,     3,   160,    70,   160,   158,   160,
     165,   166,   167,    36,    33,   171,   172,   173,   174,   175,
     175,   176,   176,   177,   177,   177,   177,   177,    46,    47,
      64,   160,   205,   206,   207,   160,   187,   188,   189,     3,
     160,   160,    64,   205,   158,     3,    64,    97,    98,   106,
      70,    74,   192,   193,   158,     3,     3,   143,   116,   116,
      46,    47,   110,   111,   116,    69,   160,   160,     5,    26,
      27,   153,   154,     6,   117,   158,   171,   190,    69,   160,
      69,    69,    73,   123,    17,   139,    69,    70,   158,    17,
      25,   160,   160,    73,   209,    64,    69,    70,    66,    69,
      70,    64,    70,    64,    46,    47,    69,    99,   102,   103,
     104,   105,    73,   158,   160,    70,    69,   116,   116,    69,
      73,    47,   116,   117,   160,    70,    25,    27,   154,    70,
      25,    33,   185,   197,   201,   160,     3,    64,   141,   158,
     171,   160,   160,   207,   160,   189,   158,    70,   160,   106,
     106,    46,    47,   100,   101,   106,    69,   160,    70,   158,
      69,    47,   116,   160,   116,    73,    17,   158,    70,    70,
      70,   158,    70,   165,    70,   158,    69,   106,   106,    69,
      73,    47,   106,   158,    25,   116,    73,    69,   160,     3,
     158,   158,   158,   158,    31,   208,   209,   210,   160,    69,
      47,   106,   160,   106,    73,    70,    69,   160,    27,   161,
     163,   164,   165,   106,    73,    69,   160,   158,    70,   208,
      70,    69,   160,   158,   161
};

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
static const unsigned char yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   102,   103,   103,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   114,   115,   115,   116,
     117,   117,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   127,   128,
     128,   128,   128,   129,   130,   131,   131,   132,   132,   132,
     133,   133,   134,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   152,   152,   153,   153,   154,
     154,   154,   155,   156,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   162,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   174,   175,
     175,   175,   176,   176,   176,   176,   176,   177,   177,   177,
     177,   178,   178,   179,   179,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   197,   197,   198,   198,   198,   198,   198,
     199,   199,   200,   201,   201,   202,   202,   202,   202,   202,
     203,   203,   204,   204,   204,   205,   206,   206,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   211
};

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     1,     2,     5,     7,     2,
       3,     2,     2,     2,     1,     3,     3,     5,     0,     1,
       2,     2,     4,     5,     2,     3,     2,     3,     5,     2,
       4,     5,     1,     2,     1,     3,     5,     2,     3,     1,
       3,     2,     2,     2,     1,     3,     3,     5,     0,     1,
       2,     2,     4,     5,     2,     3,     2,     3,     5,     2,
       4,     5,     1,     2,     1,     3,     5,     2,     3,     1,
       1,     1,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     0,     3,     2,     4,     1,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     4,
       1,     1,     2,     2,     2,     1,     1,     2,     2,     4,
       2,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     3,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     4,     7,
       6,     9,     4,     7,     7,    10,     6,     3,     4,     1,
       2,     4,     3,     1,     3,     5,     2,     4,     1,     2,
       3,     2,     1,     5,     1,     1,     1,     3,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     2,     2,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     0,     3,     1,     1,     2,     3,     3,
       2,     1,     2,     1,     3,     1,     2,     3,     4,     5,
       1,     2,     1,     3,     1,     1,     1,     2,     1,     3,
       1,     1,     2,     3,     2,     1,     1,     2,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     4,     6,     7,     2,     1,     3,     1,     2,
       3,     2,     2,     1,     1,     4,     5,     2,     3,     1,
       1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       3,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    13,     0,     0,     0,     0,     0,     0,
      25,    27,     0,    29,    31,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,    99,     0,    81,     0,   288,     0,   288,     0,   206,
       0,   226,     0,   226,     0,   229,     0,   241,     0,   241,
       0,   241,     0,   253,     0,   227,     0,   227,     0,   228,
       0,   228,     0,   230,     0,   231,     0
};

/* Error token number */
#define YYTERROR 1


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)


static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*--------------------.
| Print this symbol.  |
`--------------------*/

static void
yy_symbol_print (FILE *, int yytype, const yy::parser::semantic_type *yyvaluep, const yy::parser::location_type *yylocationp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  YYUSE (yyparser);
  YYUSE (lexer);
  YYUSE (manager);
  YYUSE (root);
  yyparser.yy_symbol_print_ (yytype, yyvaluep, yylocationp);
}


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value, Location, yyparser, lexer, manager, root);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return (size_t) (yystpcpy (yyres, yystr) - yyres);
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, yyparser, lexer, manager, root, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yySymbol
yygetToken (int *yycharp, yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  yySymbol yytoken;
  YYUSE (yyparser);
  YYUSE (lexer);
  YYUSE (manager);
  YYUSE (root);
  if (*yycharp == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
#if YY_EXCEPTIONS
      try
        {
#endif // YY_EXCEPTIONS
          *yycharp = yylex (&yylval, &yylloc, lexer);
#if YY_EXCEPTIONS
        }
      catch (const yy::parser::syntax_error& yyexc)
        {
          YYDPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
          yylloc = yyexc.location;
          yyerror (&yylloc, yyparser, lexer, manager, root, yyexc.what ());
          // Map errors caught in the scanner to the undefined token
          // (YYUNDEFTOK), so that error handling is started.
          // However, record this with this special value of yychar.
          *yycharp = YYFAULTYTOK;
        }
#endif // YY_EXCEPTIONS
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yybool) (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (yyparser);
  YYUSE (lexer);
  YYUSE (manager);
  YYUSE (root);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, yyparser, lexer, manager, root, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

#if YY_EXCEPTIONS
  typedef yy::parser::syntax_error syntax_error;
  try
  {
#endif // YY_EXCEPTIONS
  switch (yyn)
    {
  case 2:
#line 139 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused((*yyvalp));
    if (*root != nullptr)
        throw std::runtime_error("Root pointer is not empty");
    *root = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
  }
#line 1755 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 3:
#line 145 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused((*yyvalp));
    if (*root != nullptr)
        throw std::runtime_error("Root pointer is not empty");
    *root = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
  }
#line 1766 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 4:
#line 151 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused((*yyvalp));
    if (*root != nullptr)
        throw std::runtime_error("Root pointer is not empty");
    *root = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
  }
#line 1777 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 5:
#line 159 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("root"); }
#line 1783 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 6:
#line 160 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("root"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 1789 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 7:
#line 161 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("root"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node); }
#line 1795 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 8:
#line 164 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node == nullptr)
        (*yyvalp).node = createNode("root");
    else
        (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
  }
#line 1807 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 9:
#line 171 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval, (*yyvalp)); }
#line 1813 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 10:
#line 174 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval, (*yyvalp)); }
#line 1819 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 11:
#line 175 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("root"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 1825 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 12:
#line 176 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 1831 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 13:
#line 177 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    if(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node == nullptr) {
        (*yyvalp).node = createNode("root");
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    }
    else {
        (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    }
  }
#line 1846 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 14:
#line 189 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("root"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node); }
#line 1852 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 15:
#line 192 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 1858 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 16:
#line 193 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 1864 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 17:
#line 196 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("funcdef");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->attributes["has_return_type"] = false;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 1878 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 18:
#line 205 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("funcdef");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->attributes["has_return_type"] = true;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 1894 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 19:
#line 218 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("parameters"); }
#line 1900 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 20:
#line 219 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("parameters");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 1911 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 21:
#line 228 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }
#line 1929 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 22:
#line 241 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }
#line 1947 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 23:
#line 254 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing typedargslist");
        }
    }
  }
#line 1965 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 24:
#line 269 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("varargslist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 1974 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 25:
#line 273 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("varargslist");
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 1987 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 26:
#line 281 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 1997 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 27:
#line 286 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2010 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 28:
#line 296 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 2016 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 29:
#line 297 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = nullptr; }
#line 2022 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 30:
#line 298 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2028 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 31:
#line 301 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
  }
#line 2037 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 32:
#line 305 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2049 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 33:
#line 312 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2061 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 34:
#line 319 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2073 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 35:
#line 326 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2085 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 36:
#line 335 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2097 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 37:
#line 342 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2107 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 38:
#line 347 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2120 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 39:
#line 357 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 2126 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 40:
#line 358 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2138 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 41:
#line 365 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2150 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 42:
#line 374 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    (*yyvalp).node->appendChild(arg);
  }
#line 2161 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 43:
#line 380 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2173 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 44:
#line 389 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;}
#line 2179 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 45:
#line 390 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2189 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 46:
#line 395 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2202 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 47:
#line 405 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2214 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 48:
#line 412 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2226 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 49:
#line 421 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("identifier");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
  }
#line 2235 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 50:
#line 425 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("identifier");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2246 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 51:
#line 443 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }
#line 2264 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 52:
#line 456 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }
#line 2282 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 53:
#line 469 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node != nullptr) {
        if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "tmp") {
            for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
                (*yyvalp).node->appendChild(child);
            delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
        }
        else {
            throw std::runtime_error("Unknown error occurred while parsing varargslist");
        }
    }
  }
#line 2300 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 54:
#line 484 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("varargslist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2309 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 55:
#line 488 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("varargslist");
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2322 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 56:
#line 496 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2332 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 57:
#line 501 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2345 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 58:
#line 516 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 2351 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 59:
#line 517 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = nullptr; }
#line 2357 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 60:
#line 518 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2363 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 61:
#line 521 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
  }
#line 2372 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 62:
#line 525 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2384 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 63:
#line 532 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2396 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 64:
#line 539 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2408 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 65:
#line 546 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2420 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 66:
#line 555 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2432 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 67:
#line 562 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2442 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 68:
#line 567 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2455 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 69:
#line 577 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 2461 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 70:
#line 578 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2473 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 71:
#line 585 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2485 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 72:
#line 594 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    (*yyvalp).node->appendChild(arg);
  }
#line 2496 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 73:
#line 600 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("*");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2508 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 74:
#line 609 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;}
#line 2514 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 75:
#line 610 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2524 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 76:
#line 615 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto arg = createNode("=");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2537 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 77:
#line 625 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2549 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 78:
#line 632 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tmp");
    auto arg = createNode("**");
    arg->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(arg);
  }
#line 2561 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 79:
#line 640 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("identifier");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
  }
#line 2570 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 80:
#line 646 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2576 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 81:
#line 647 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2582 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 82:
#line 650 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("stmt");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 2592 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 83:
#line 655 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("stmt");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
  }
#line 2602 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 84:
#line 660 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->prependChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
  }
#line 2612 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 85:
#line 667 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2618 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 86:
#line 668 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2624 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 87:
#line 669 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2630 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 88:
#line 670 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2636 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 89:
#line 671 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2642 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 90:
#line 672 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2648 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 91:
#line 673 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2654 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 92:
#line 676 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval, (*yyvalp));
    throw std::runtime_error("Not implemented: Annotated assignment");
  }
#line 2663 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 93:
#line 680 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("expr");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2674 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 94:
#line 686 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("expr");
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node == nullptr)
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    else {
        ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->prependChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    }
  }
#line 2688 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 95:
#line 697 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 2694 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 96:
#line 698 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    if ((*yyvalp).node == nullptr)
        (*yyvalp).node = createNode("eql_expr");
    else
        (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2707 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 97:
#line 711 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval, (*yyvalp));
    throw std::runtime_error("Not implemented: Annotated assignment");
  }
#line 2716 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 98:
#line 715 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval, (*yyvalp));
    throw std::runtime_error("Not implemented: Annotated assignment");
  }
#line 2725 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 99:
#line 721 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2731 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 100:
#line 722 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 2737 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 101:
#line 725 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("testlist_star_expr"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2743 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 102:
#line 726 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("testlist_star_expr"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2749 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 103:
#line 727 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node; (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2755 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 104:
#line 728 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node; (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2761 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 105:
#line 731 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("+="); }
#line 2767 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 106:
#line 732 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("-="); }
#line 2773 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 107:
#line 733 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("*="); }
#line 2779 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 108:
#line 734 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("/="); }
#line 2785 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 109:
#line 735 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("//="); }
#line 2791 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 110:
#line 736 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("%="); }
#line 2797 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 111:
#line 737 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("&="); }
#line 2803 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 112:
#line 738 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("|="); }
#line 2809 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 113:
#line 739 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("^="); }
#line 2815 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 114:
#line 740 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("<<="); }
#line 2821 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 115:
#line 741 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode(">>="); }
#line 2827 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 116:
#line 742 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("**="); }
#line 2833 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 117:
#line 744 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("return"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2839 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 118:
#line 746 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("pass"); }
#line 2845 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 119:
#line 749 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2851 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 120:
#line 750 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2857 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 121:
#line 751 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2863 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 122:
#line 752 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2869 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 123:
#line 754 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("break"); }
#line 2875 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 124:
#line 756 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("continue"); }
#line 2881 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 125:
#line 759 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("return"); }
#line 2887 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 126:
#line 760 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("return"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2893 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 127:
#line 763 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("raise"); }
#line 2899 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 128:
#line 764 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("raise"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 2905 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 129:
#line 765 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("raise");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2917 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 130:
#line 774 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2923 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 131:
#line 775 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 2929 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 132:
#line 777 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("import");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2939 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 133:
#line 782 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("from_import");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2949 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 134:
#line 789 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 2958 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 135:
#line 793 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
  }
#line 2966 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 136:
#line 798 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("from"); }
#line 2972 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 137:
#line 799 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(".");
  }
#line 2982 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 138:
#line 806 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("import");
    auto all = createNode("*");
    (*yyvalp).node->appendChild(all);
  }
#line 2994 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 139:
#line 813 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("import");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 3006 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 140:
#line 820 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("import");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3016 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 141:
#line 827 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3022 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 142:
#line 828 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 3028 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 143:
#line 831 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("import_names"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3034 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 144:
#line 832 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3044 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 145:
#line 839 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("identifier"); (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val); }
#line 3050 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 146:
#line 840 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("as");
    auto as_identifier_1 = createNode("identifier");
    auto as_identifier_2 = createNode("identifier");
    as_identifier_1->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str_val);
    as_identifier_2->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(as_identifier_1);
    (*yyvalp).node->appendChild(as_identifier_2);
  }
#line 3065 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 147:
#line 852 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("identifier");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
  }
#line 3074 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 148:
#line 856 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->attributes["name"].get<std::string>() += strfy(".");
    (*yyvalp).node->attributes["name"].get<std::string>() += strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
  }
#line 3085 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 149:
#line 864 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3091 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 150:
#line 865 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("as");
    auto as_identifier = createNode("identifier");
    as_identifier->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(as_identifier);
  }
#line 3104 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 151:
#line 875 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("import_names");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3113 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 152:
#line 879 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3123 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 153:
#line 886 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("global");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(identifier);
  }
#line 3135 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 154:
#line 893 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(identifier);
  }
#line 3147 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 155:
#line 902 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("assert");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3157 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 156:
#line 907 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("assert");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3169 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 157:
#line 916 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3175 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 158:
#line 917 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3181 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 159:
#line 918 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3187 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 160:
#line 919 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3193 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 161:
#line 920 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3199 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 162:
#line 921 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3205 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 163:
#line 922 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3211 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 164:
#line 925 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3217 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 165:
#line 926 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;
    auto else_node = createNode("else");
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3230 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 166:
#line 936 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("if_else");
    auto if_node = createNode("if");
    auto if_decl = createNode("if_decl");

    if_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    if_node->appendChild(if_decl);
    if_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(if_node);
  }
#line 3247 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 167:
#line 948 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto elif_node = createNode("elif");
    auto elif_decl = createNode("elif_decl");

    elif_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    elif_node->appendChild(elif_decl);
    elif_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(elif_node);
  }
#line 3264 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 168:
#line 962 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("while");
    auto while_decl = createNode("while_decl");
    while_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(while_decl);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3278 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 169:
#line 971 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("while_else");
    auto while_node = createNode("while");
    auto while_decl = createNode("while_decl");
    auto else_node = createNode("else");
    while_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.node);
    while_node->appendChild(while_decl);
    while_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(while_node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3299 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 170:
#line 989 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("for");
    auto for_decl = createNode("for_decl");
    for_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    for_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3314 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 171:
#line 999 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("for_else");
    auto for_node = createNode("for");
    auto for_decl = createNode("for_decl");
    auto else_node = createNode("else");
    for_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.node);
    for_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.node);
    for_node->appendChild(for_decl);
    for_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(for_node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3337 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 172:
#line 1019 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);

    (*yyvalp).node->appendChild(try_node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3352 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 173:
#line 1029 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    auto else_node = createNode("else");
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);

    (*yyvalp).node->appendChild(try_node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3372 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 174:
#line 1044 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    auto finally_node = createNode("finally");
    finally_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);

    (*yyvalp).node->appendChild(try_node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(finally_node);
  }
#line 3392 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 175:
#line 1059 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.node);
    auto else_node = createNode("else");
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    auto finally_node = createNode("finally");
    finally_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);

    (*yyvalp).node->appendChild(try_node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(else_node);
    (*yyvalp).node->appendChild(finally_node);
  }
#line 3417 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 176:
#line 1079 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("try_except");
    auto try_node = createNode("try");
    try_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    auto else_node = createNode("else");
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(try_node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3436 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 177:
#line 1095 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("except");
    auto except_clause_node = createNode("except_clause");
    except_clause_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    except_clause_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(except_clause_node);
  }
#line 3449 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 178:
#line 1103 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node;;
    auto except_clause_node = createNode("except_clause");
    except_clause_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    except_clause_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(except_clause_node);
  }
#line 3462 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 179:
#line 1113 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("except_decl"); }
#line 3468 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 180:
#line 1114 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("except_decl"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3474 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 181:
#line 1115 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("except_decl");
    auto as_node = createNode("as");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    as_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    as_node->appendChild(identifier);
    (*yyvalp).node->appendChild(as_node);
  }
#line 3490 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 182:
#line 1128 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("with");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3501 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 183:
#line 1136 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3507 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 184:
#line 1137 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node; (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3513 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 185:
#line 1138 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node;
    auto as_node = createNode("as");
    as_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    as_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(as_node);
  }
#line 3527 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 186:
#line 1149 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("with_decl");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3537 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 187:
#line 1154 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("with_decl");
    auto as_node = createNode("as");
    as_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    as_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(as_node);
  }
#line 3551 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 188:
#line 1165 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("suite"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3557 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 189:
#line 1166 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 3563 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 190:
#line 1169 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("suite");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3574 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 191:
#line 1175 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3583 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 192:
#line 1181 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3589 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 193:
#line 1182 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("if_else");
    auto if_node = createNode("if");
    auto if_decl = createNode("if_decl");
    auto else_node = createNode("else");

    if_decl->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    if_node->appendChild(if_decl);
    if_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    else_node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(if_node);
    (*yyvalp).node->appendChild(else_node);
  }
#line 3609 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 194:
#line 1197 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3615 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 195:
#line 1200 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3621 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 196:
#line 1201 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3627 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 197:
#line 1204 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->attributes["lambdef_body_cond"] = false;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3638 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 198:
#line 1212 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->attributes["lambdef_body_cond"] = true;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3649 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 199:
#line 1220 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("lambdef");
    (*yyvalp).node->attributes["lambdef_has_args"] = false;
  }
#line 3659 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 200:
#line 1225 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("lambdef");
    (*yyvalp).node->attributes["lambdef_has_args"] = true;
    (*yyvalp).node->attributes["lambdef_arglist_pos"].get<long long>() = 0;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3671 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 201:
#line 1234 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3677 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 202:
#line 1235 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("or");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3688 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 203:
#line 1243 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3694 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 204:
#line 1244 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("and");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3705 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 205:
#line 1252 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("not"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3711 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 206:
#line 1253 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3717 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 207:
#line 1256 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3723 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 208:
#line 1257 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3733 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 209:
#line 1264 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("<"); }
#line 3739 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 210:
#line 1265 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode(">"); }
#line 3745 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 211:
#line 1266 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("=="); }
#line 3751 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 212:
#line 1267 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode(">="); }
#line 3757 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 213:
#line 1268 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("<="); }
#line 3763 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 214:
#line 1269 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("!="); }
#line 3769 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 215:
#line 1270 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("in"); }
#line 3775 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 216:
#line 1271 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("not in"); }
#line 3781 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 217:
#line 1272 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("is"); }
#line 3787 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 218:
#line 1273 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("is not"); }
#line 3793 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 219:
#line 1275 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("unpack");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3803 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 220:
#line 1282 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3809 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 221:
#line 1283 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("|");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3820 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 222:
#line 1291 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3826 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 223:
#line 1292 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("^");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3837 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 224:
#line 1300 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3843 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 225:
#line 1301 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("&");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3854 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 226:
#line 1309 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3860 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 227:
#line 1310 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("<<");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3871 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 228:
#line 1316 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode(">>");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3882 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 229:
#line 1324 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3888 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 230:
#line 1325 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("+");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3899 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 231:
#line 1331 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("-");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3910 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 232:
#line 1339 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3916 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 233:
#line 1340 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("*");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3927 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 234:
#line 1346 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("/");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3938 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 235:
#line 1352 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("%");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3949 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 236:
#line 1358 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("//");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 3960 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 237:
#line 1366 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("+"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3966 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 238:
#line 1367 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("-"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3972 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 239:
#line 1368 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("~"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3978 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 240:
#line 1369 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 3984 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 241:
#line 1372 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("**"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 3990 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 242:
#line 1373 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("**");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4001 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 243:
#line 1381 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("atom_expr"); (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node); }
#line 4007 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 244:
#line 1382 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("atom_expr");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4017 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 245:
#line 1389 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tuple");
  }
#line 4027 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 246:
#line 1394 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("tuple");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4038 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 247:
#line 1400 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("list");
  }
#line 4048 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 248:
#line 1405 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("dict");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4059 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 249:
#line 1411 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("dict");
  }
#line 4069 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 250:
#line 1416 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->attributes["type"].get<std::string>() == "dict")
        (*yyvalp).node = createNode("dict");
    else if (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node->attributes["type"].get<std::string>() == "set")
        (*yyvalp).node = createNode("set");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4083 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 251:
#line 1425 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = createNode("identifier"); (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val); }
#line 4089 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 252:
#line 1426 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4095 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 253:
#line 1427 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4101 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 254:
#line 1428 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("none"); (*yyvalp).node->attributes["value"] = Null(); }
#line 4107 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 255:
#line 1429 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("bool"); (*yyvalp).node->attributes["value"] = true; }
#line 4113 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 256:
#line 1430 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = createNode("bool"); (*yyvalp).node->attributes["value"] = false; }
#line 4119 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 257:
#line 1433 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("string");
    (*yyvalp).node->attributes["value"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val); }
#line 4127 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 258:
#line 1436 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->attributes["value"].get<std::string>() += ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val;
  }
#line 4136 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 259:
#line 1442 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("testlist_comp");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4146 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 260:
#line 1447 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node == nullptr)
        (*yyvalp).node = createNode("testlist_comp");
    else
        (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->prependChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4158 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 261:
#line 1456 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4164 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 262:
#line 1457 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4170 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 263:
#line 1460 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 4176 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 264:
#line 1461 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node == nullptr)
        (*yyvalp).node = createNode("testlist_comp");
    else
        (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4189 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 265:
#line 1471 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4195 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 266:
#line 1472 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4201 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 267:
#line 1475 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("trailer");
    (*yyvalp).node->appendChild("arglist");
  }
#line 4212 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 268:
#line 1481 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("trailer");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4223 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 269:
#line 1487 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("trailer");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4234 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 270:
#line 1493 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("trailer");
    auto identifier = createNode("identifier");
    identifier->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->appendChild(identifier);
  }
#line 4246 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 271:
#line 1502 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4252 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 272:
#line 1503 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4258 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 273:
#line 1506 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("subscriptlist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4267 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 274:
#line 1510 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
  }
#line 4277 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 275:
#line 1517 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("subscript");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4286 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 276:
#line 1521 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("subscript");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4296 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 277:
#line 1526 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("subscript");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4307 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 278:
#line 1532 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("subscript");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
  }
#line 4319 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 279:
#line 1539 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("subscript");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4332 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 280:
#line 1549 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4338 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 281:
#line 1550 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4344 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 282:
#line 1553 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("exprlist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4353 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 283:
#line 1557 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
  }
#line 4363 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 284:
#line 1564 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4369 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 285:
#line 1565 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4375 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 286:
#line 1568 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4381 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 287:
#line 1569 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4387 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 288:
#line 1572 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("testlist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4396 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 289:
#line 1576 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
  }
#line 4406 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 290:
#line 1583 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4412 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 291:
#line 1584 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4418 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 292:
#line 1587 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("dictorsetmaker");
    (*yyvalp).node->attributes["type"] = strfy("dict");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node == nullptr) {
        /// only a single trail comma
    }
    else if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "dictorsetmaker_dict_second") {
        /// append $2 children to $$ and delete $2
        for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
            (*yyvalp).node->appendChild(child);
        delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
    }
    else {
        /// comp_for expression
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    }
  }
#line 4441 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 293:
#line 1607 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    /// a pair in the dictionary: test ":" test
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("dict_pair");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4453 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 294:
#line 1614 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    /// unpack another dictionary: "**" expr
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("dict_unpack");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4464 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 295:
#line 1622 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4470 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 296:
#line 1623 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4476 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 297:
#line 1624 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4482 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 298:
#line 1625 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 4488 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 299:
#line 1626 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 4494 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 300:
#line 1629 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("dictorsetmaker_dict_second");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4503 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 301:
#line 1633 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4513 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 302:
#line 1640 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("dictorsetmaker");
    (*yyvalp).node->attributes["type"] = strfy("set");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node == nullptr) {
        /// only a single trail comma
    }
    else if (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->key == "dictorsetmaker_set_second") {
        /// append $2 children to $$ and delete $2
        for (auto child : ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node->children)
            (*yyvalp).node->appendChild(child);
        delete ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node;
    }
    else {
        /// comp_for expression
        (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    }
  }
#line 4536 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 303:
#line 1660 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4542 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 304:
#line 1661 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4548 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 305:
#line 1664 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4554 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 306:
#line 1665 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node; }
#line 4560 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 307:
#line 1666 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node; }
#line 4566 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 308:
#line 1667 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 4572 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 309:
#line 1668 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    { (*yyvalp).node = nullptr; }
#line 4578 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 310:
#line 1671 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("dictorsetmaker_set_second");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4587 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 311:
#line 1675 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4597 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 312:
#line 1682 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("classdef");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->attributes["is_inherit_other_class"] = false;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4610 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 313:
#line 1690 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("classdef");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->attributes["is_inherit_other_class"] = false;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4625 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 314:
#line 1700 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("classdef");
    (*yyvalp).node->attributes["name"] = strfy(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str_val);
    (*yyvalp).node->attributes["is_inherit_other_class"] = true;
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4641 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 315:
#line 1713 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node;
  }
#line 4650 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 316:
#line 1719 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("arglist");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4659 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 317:
#line 1723 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
    (*yyvalp).node = ((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node;
  }
#line 4669 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 318:
#line 1731 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("argument");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4678 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 319:
#line 1735 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("argument");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4688 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 320:
#line 1740 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("argument");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild("DLM_EQL");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4700 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 321:
#line 1747 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("argument");
    (*yyvalp).node->appendChild("DLM_DAST");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4711 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 322:
#line 1753 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("argument");
    (*yyvalp).node->appendChild("DLM_AST");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4722 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 323:
#line 1761 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("comp_iter");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4731 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 324:
#line 1765 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("comp_iter");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4740 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 325:
#line 1771 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("comp_for");
    (*yyvalp).node->appendChild("KW_FOR");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild("KW_IN");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4754 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 326:
#line 1780 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval);
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("comp_for");
    (*yyvalp).node->appendChild("KW_FOR");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild("KW_IN");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4769 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 327:
#line 1792 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("comp_if");
    (*yyvalp).node->appendChild("KW_IF");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4780 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 328:
#line 1798 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    unused(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
    (*yyvalp).node = createNode("comp_if");
    (*yyvalp).node->appendChild("KW_IF");
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node);
    (*yyvalp).node->appendChild(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
  }
#line 4792 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 329:
#line 1807 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("number");
    (*yyvalp).node->attributes["value"] = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.int_val;
  }
#line 4801 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 330:
#line 1811 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("number");
    (*yyvalp).node->attributes["value"] = ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.float_val;
  }
#line 4810 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;

  case 331:
#line 1815 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:880
    {
    (*yyvalp).node = createNode("number");
    (*yyvalp).node->attributes["value"] = Complex(0, ((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.imag_val);
  }
#line 4819 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
    break;


#line 4823 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:880
      default: break;
    }
#if YY_EXCEPTIONS
  }
  catch (const syntax_error& yyexc)
    {
      YYDPRINTF ((stderr, "Caught exception: %s\n", yyexc.what()));
      *yylocp = yyexc.location;
      yyerror (yylocp, yyparser, lexer, manager, root, yyexc.what ());
      YYERROR;
    }
#endif // YY_EXCEPTIONS

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyparser);
  YYUSE (lexer);
  YYUSE (manager);
  YYUSE (root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: // IDENTIFIER
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4886 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 4: // NEWLINE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4892 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 5: // INDENT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4898 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 6: // DEDENT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4904 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 7: // ENDMARKER
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4910 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 8: // NUM_INT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4916 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 9: // NUM_FLOAT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4922 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 10: // NUM_IMAG
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4928 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 11: // STRING
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4934 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 12: // BYTES
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4940 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 13: // KW_FALSE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4946 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 14: // KW_NONE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4952 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 15: // KW_TRUE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4958 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 16: // KW_AND
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4964 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 17: // KW_AS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4970 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 18: // KW_ASSERT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4976 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 19: // KW_BREAK
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4982 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 20: // KW_CLASS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4988 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 21: // KW_CONTINUE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 4994 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 22: // KW_DEF
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5000 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 23: // KW_DEL
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5006 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 24: // KW_ELIF
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5012 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 25: // KW_ELSE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5018 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 26: // KW_EXCEPT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5024 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 27: // KW_FINALLY
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5030 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 28: // KW_FOR
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5036 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 29: // KW_FROM
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5042 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 30: // KW_GLOBAL
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5048 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 31: // KW_IF
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5054 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 32: // KW_IMPORT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5060 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 33: // KW_IN
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5066 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 34: // KW_IS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5072 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 35: // KW_LAMBDA
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5078 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 36: // KW_NOT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5084 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 37: // KW_OR
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5090 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 38: // KW_PASS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5096 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 39: // KW_RAISE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5102 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 40: // KW_RETURN
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5108 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 41: // KW_TRY
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5114 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 42: // KW_WHILE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5120 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 43: // KW_WITH
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5126 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 44: // DLM_PLUS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5132 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 45: // DLM_MINS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5138 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 46: // DLM_AST
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5144 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 47: // DLM_DAST
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5150 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 48: // DLM_DIV
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5156 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 49: // DLM_FDIV
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5162 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 50: // DLM_MOD
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5168 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 51: // DLM_LSFT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5174 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 52: // DLM_RSFT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5180 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 53: // DLM_AND
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5186 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 54: // DLM_OR
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5192 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 55: // DLM_XOR
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5198 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 56: // DLM_FLP
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5204 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 57: // DLM_LSS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5210 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 58: // DLM_LSE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5216 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 59: // DLM_GTT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5222 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 60: // DLM_GTE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5228 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 61: // DLM_EQT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5234 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 62: // DLM_NEQ
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5240 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 63: // DLM_LPTS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5246 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 64: // DLM_RPTS
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5252 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 65: // DLM_LBKT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5258 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 66: // DLM_RBKT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5264 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 67: // DLM_LBC
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5270 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 68: // DLM_RBC
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5276 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 69: // DLM_CMM
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5282 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 70: // DLM_CLN
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5288 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 71: // DLM_DOT
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5294 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 72: // DLM_SCLN
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5300 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 73: // DLM_EQL
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5306 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 74: // DLM_RARW
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5312 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 75: // DLM_PLUSE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5318 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 76: // DLM_MINSE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5324 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 77: // DLM_MULE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5330 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 78: // DLM_EXPE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5336 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 79: // DLM_DIVE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5342 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 80: // DLM_FDVE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5348 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 81: // DLM_MODE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5354 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 82: // DLM_ANDE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5360 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 83: // DLM_ORE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5366 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 84: // DLM_XORE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5372 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 85: // DLM_LSTE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5378 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 86: // DLM_RSTE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5384 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 87: // DLM_POWE
#line 21 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { unused((*yyvaluep)); }
#line 5390 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 89: // input
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5396 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 90: // single_input
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5402 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 91: // file_input
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5408 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 92: // file_input_first
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5414 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 93: // eval_input
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5420 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 94: // eval_input_first
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5426 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 95: // funcdef
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5432 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 96: // parameters
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5438 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 97: // typedargslist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5444 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 98: // typedargslist_begin
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5450 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 99: // typedargslist_first
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5456 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 100: // typedargslist_first_1
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5462 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 101: // typedargslist_first_1_begin
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5468 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 102: // typedargslist_second
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5474 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 103: // typedargslist_second_1
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5480 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 104: // typedargslist_second_2
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5486 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 105: // typedargslist_third
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5492 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 106: // tfpdef
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5498 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 107: // varargslist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5504 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 108: // varargslist_begin
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5510 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 109: // varargslist_first
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5516 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 110: // varargslist_first_1
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5522 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 111: // varargslist_first_1_begin
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5528 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 112: // varargslist_second
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5534 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 113: // varargslist_second_1
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5540 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 114: // varargslist_second_2
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5546 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 115: // varargslist_third
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5552 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 116: // vfpdef
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5558 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 117: // stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5564 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 118: // simple_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5570 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 119: // small_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5576 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 120: // expr_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5582 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 121: // eql_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5588 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 122: // annassign
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5594 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 123: // testlist_star_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5600 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 124: // testlist_star_expr_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5606 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 125: // augassign
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5612 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 126: // del_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5618 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 127: // pass_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5624 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 128: // flow_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5630 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 129: // break_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5636 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 130: // continue_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5642 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 131: // return_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5648 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 132: // raise_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5654 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 133: // import_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5660 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 134: // import_name
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5666 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 135: // import_from
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5672 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 136: // import_from_part
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5678 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 137: // import_from_part_begin
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5684 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 138: // import_import_part
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5690 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 139: // import_as_names
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5696 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 140: // import_as_names_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5702 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 141: // import_as_name
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5708 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 142: // dotted_name
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5714 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 143: // dotted_as_name
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5720 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 144: // dotted_as_names
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5726 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 145: // global_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5732 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 146: // assert_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5738 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 147: // compound_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5744 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 148: // if_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5750 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 149: // if_stmt_without_else
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5756 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 150: // while_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5762 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 151: // for_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5768 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 152: // try_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5774 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 153: // try_except
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5780 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 154: // except_clause
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5786 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 155: // with_stmt
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5792 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 156: // with_items_part
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5798 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 157: // with_item_begin_part
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5804 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 158: // suite
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5810 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 159: // suite_stmts
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5816 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 160: // test
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5822 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 161: // test_nocond
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5828 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 162: // lambdef
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5834 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 163: // lambdef_nocond
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5840 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 164: // lambdef_begin_part
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5846 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 165: // or_test
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5852 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 166: // and_test
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5858 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 167: // not_test
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5864 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 168: // comparison
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5870 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 169: // comp_op
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5876 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 170: // star_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5882 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 171: // expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5888 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 172: // xor_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5894 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 173: // and_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5900 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 174: // shift_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5906 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 175: // arith_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5912 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 176: // term
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5918 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 177: // factor
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5924 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 178: // power
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5930 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 179: // atom_expr
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5936 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 180: // atom
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5942 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 181: // atom_multi_string
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5948 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 182: // testlist_comp
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5954 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 183: // testlist_comp_items_with_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5960 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 184: // testlist_comp_items
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5966 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 185: // testlist_comp_item
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5972 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 186: // trailer
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5978 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 187: // subscriptlist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5984 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 188: // subscriptlist_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5990 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 189: // subscript
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 5996 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 190: // exprlist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6002 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 191: // exprlist_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6008 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 192: // exprlist_item
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6014 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 193: // testlist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6020 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 194: // testlist_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6026 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 195: // dictorsetmaker
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6032 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 196: // dictorsetmaker_dict
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6038 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 197: // dictorsetmaker_dict_item
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6044 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 198: // dictorsetmaker_dict_second
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6050 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 199: // dictorsetmaker_dict_second_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6056 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 200: // dictorsetmaker_set
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6062 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 201: // dictorsetmaker_set_item
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6068 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 202: // dictorsetmaker_set_second
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6074 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 203: // dictorsetmaker_set_second_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6080 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 204: // classdef
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6086 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 205: // arglist
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6092 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 206: // arglist_without_trail
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6098 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 207: // argument
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6104 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 208: // comp_iter
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6110 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 209: // comp_for
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6116 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 210: // comp_if
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6122 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

    case 211: // number
#line 32 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:920
      { delete (*yyvaluep).node; }
#line 6128 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:920
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval, &yys->yyloc, yyparser, lexer, manager, root);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, yyparser, lexer, manager, root);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-409)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return (yybool) yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yyStateNum yystate, yySymbol yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyisDefaultedState (yystate)
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return (yybool) (0 < yyaction);
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return (yybool) (yyaction == 0);
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = (size_t) (yystackp->yynextFree - yystackp->yyitems);
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long) yyi, (unsigned long) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long) yyk, yyrule - 1,
             (unsigned long) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval,
                       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , yyparser, lexer, manager, root);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += (size_t) yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule, yyparser, lexer, manager, root));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yylocp, yyparser, lexer, manager, root);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, yyparser, lexer, manager, root));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, yyparser, lexer, manager, root);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, &yyloc, yyparser, lexer, manager, root);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long) yyk,
                                (unsigned long) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates = YY_NULLPTR;
      yybool* yynewLookaheadNeeds;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, yyparser, lexer, manager, root));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, yyparser, lexer, manager, root));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, yyparser, lexer, manager, root);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, yyparser, lexer, manager, root);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, yyparser, lexer, manager, root);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long) (yys->yyposn + 1),
               (unsigned long) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (yylocp, yyparser, lexer, manager, root, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, yyparser, lexer, manager, root);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YYASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, yyparser, lexer, manager, root);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, yyparser, lexer, manager, root);
              return yyreportAmbiguity (yybest, yyp, yylocp, yyparser, lexer, manager, root);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, yyparser, lexer, manager, root);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, &yydummy, yyparser, lexer, manager, root);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval, yylocp, yyparser, lexer, manager, root);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, yyparser, lexer, manager, root);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , yyparser, lexer, manager, root));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += (size_t) (yystackp->yynextFree - yystackp->yyitems);
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= (size_t) (yystackp->yynextFree - yystackp->yyitems);
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn, YYLTYPE *yylocp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], yyparser, lexer, manager, root);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          yytoken = yygetToken (&yychar, yystackp, yyparser, lexer, manager, root);
          yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long) yynewStack,
                          (unsigned long) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], yyparser, lexer, manager, root);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, yyparser, lexer, manager, root));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], yyparser, lexer, manager, root);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (&yylloc, yyparser, lexer, manager, root, YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  if (yysz < yysize)
                    yysize_overflow = yytrue;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    if (yysz < yysize)
      yysize_overflow = yytrue;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (&yylloc, yyparser, lexer, manager, root, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, yyparser, lexer, manager, root, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, &yylloc, yyparser, lexer, manager, root, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, yyparser, lexer, manager, root);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar, yystackp, yyparser, lexer, manager, root);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    size_t yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, &yylloc, yyparser, lexer, manager, root, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, yyparser, lexer, manager, root);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, yyparser, lexer, manager, root, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, yyparser, lexer, manager, root);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, yyparser, lexer, manager, root));
            }
          else
            {
              yySymbol yytoken = yygetToken (&yychar, yystackp, yyparser, lexer, manager, root);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Don't issue an error message again for exceptions
                     thrown from the scanner.  */
                  if (yychar != YYFAULTYTOK)
                    yyreportSyntaxError (&yystack, yyparser, lexer, manager, root);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, yyparser, lexer, manager, root));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = (yybool) (yychar != YYEMPTY);

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, yyparser, lexer, manager, root));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, yyparser, lexer, manager, root, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, yyparser, lexer, manager, root));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, yyparser, lexer, manager, root);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, yyparser, lexer, manager, root));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, yyparser, lexer, manager, root);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (&yylloc, yyparser, lexer, manager, root, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, yyparser, lexer, manager, root);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, yyparser, lexer, manager, root);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long) yyp->yystate.yyposn,
                     (long) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long) YYINDEX (yyp->yyoption.yystate),
                     (long) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long) yyi,
               (long) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc



#line 7805 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:2603

/*------------------.
| Report an error.  |
`------------------*/

static void
yyerror (const yy::parser::location_type *yylocationp, yy::parser& yyparser, Ion::IonLexer *lexer, ASTManager *manager, ASTNode **root, const char* msg)
{
  YYUSE (yyparser);
  YYUSE (lexer);
  YYUSE (manager);
  YYUSE (root);
  yyparser.error (*yylocationp, msg);
}



namespace yy {
#line 7824 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:2603
  /// Build a parser object.
  parser::parser (Ion::IonLexer *lexer_yyarg, ASTManager *manager_yyarg, ASTNode **root_yyarg)
    :
#if YYDEBUG
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg),
      manager (manager_yyarg),
      root (root_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    return ::yyparse (*this, lexer, manager, root);
  }

#if YYDEBUG
  /*--------------------.
  | Print this symbol.  |
  `--------------------*/

  void
  parser::yy_symbol_value_print_ (int yytype,
                           const semantic_type* yyvaluep,
                           const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
    {
    case 3: // IDENTIFIER
#line 34 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.c:2603
      { fprintf(stderr, "%s", (*yyvaluep).str_val); }
#line 7874 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:2603
        break;

      default:
        break;
    }
  }


  void
  parser::yy_symbol_print_ (int yytype,
                           const semantic_type* yyvaluep,
                           const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < YYNTOKENS ? "token" : "nterm")
               << ' ' << yytname[yytype] << " ("
               << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }

  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    // Actually, it is yydebug which is really used.
    yydebug = l;
  }

#endif

} // yy
#line 7924 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.cc" // glr.c:2603
