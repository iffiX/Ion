// A Bison parser, made by GNU Bison 3.3.

// Skeleton interface for Bison GLR parsers in C++

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

// C++ GLR parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_HOME_ADMINISTRATOR_IFFI_PROJECTS_ION_GEN_ION_TAB_H_INCLUDED
# define YY_YY_HOME_ADMINISTRATOR_IFFI_PROJECTS_ION_GEN_ION_TAB_H_INCLUDED
// //                    "%code requires" blocks.
#line 1 "/home/Administrator/iffi/Projects/Ion/grammar/ion.y" // glr.cc:353

#include <string>
#include <ion_lex.h>
#include <ion_def.h>
#include <ast/ast.h>

#line 49 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.h" // glr.cc:353

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif


namespace yy {
#line 166 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.h" // glr.cc:353



  /// A Bison parser.
  class parser
  {
  public:
#ifndef YYSTYPE
    /// Symbol semantic values.
    typedef Token semantic_type;
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef Location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        IDENTIFIER = 258,
        NEWLINE = 259,
        INDENT = 260,
        DEDENT = 261,
        ENDMARKER = 262,
        NUM_INT = 263,
        NUM_FLOAT = 264,
        NUM_IMAG = 265,
        STRING = 266,
        BYTES = 267,
        KW_FALSE = 268,
        KW_NONE = 269,
        KW_TRUE = 270,
        KW_AND = 271,
        KW_AS = 272,
        KW_ASSERT = 273,
        KW_BREAK = 274,
        KW_CLASS = 275,
        KW_CONTINUE = 276,
        KW_DEF = 277,
        KW_DEL = 278,
        KW_ELIF = 279,
        KW_ELSE = 280,
        KW_EXCEPT = 281,
        KW_FINALLY = 282,
        KW_FOR = 283,
        KW_FROM = 284,
        KW_GLOBAL = 285,
        KW_IF = 286,
        KW_IMPORT = 287,
        KW_IN = 288,
        KW_IS = 289,
        KW_LAMBDA = 290,
        KW_NOT = 291,
        KW_OR = 292,
        KW_PASS = 293,
        KW_RAISE = 294,
        KW_RETURN = 295,
        KW_TRY = 296,
        KW_WHILE = 297,
        KW_WITH = 298,
        DLM_PLUS = 299,
        DLM_MINS = 300,
        DLM_AST = 301,
        DLM_DAST = 302,
        DLM_DIV = 303,
        DLM_FDIV = 304,
        DLM_MOD = 305,
        DLM_LSFT = 306,
        DLM_RSFT = 307,
        DLM_AND = 308,
        DLM_OR = 309,
        DLM_XOR = 310,
        DLM_FLP = 311,
        DLM_LSS = 312,
        DLM_LSE = 313,
        DLM_GTT = 314,
        DLM_GTE = 315,
        DLM_EQT = 316,
        DLM_NEQ = 317,
        DLM_LPTS = 318,
        DLM_RPTS = 319,
        DLM_LBKT = 320,
        DLM_RBKT = 321,
        DLM_LBC = 322,
        DLM_RBC = 323,
        DLM_CMM = 324,
        DLM_CLN = 325,
        DLM_DOT = 326,
        DLM_SCLN = 327,
        DLM_EQL = 328,
        DLM_RARW = 329,
        DLM_PLUSE = 330,
        DLM_MINSE = 331,
        DLM_MULE = 332,
        DLM_EXPE = 333,
        DLM_DIVE = 334,
        DLM_FDVE = 335,
        DLM_MODE = 336,
        DLM_ANDE = 337,
        DLM_ORE = 338,
        DLM_XORE = 339,
        DLM_LSTE = 340,
        DLM_RSTE = 341,
        DLM_POWE = 342
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;


    /// Build a parser object.
    parser (Ion::IonLexer *lexer_yyarg, ASTManager *manager_yyarg, ASTNode **root_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yytype       The token type.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (int yytype,
                                         const semantic_type* yyvaluep,
                                         const location_type* yylocationp);
    /// \brief Report a symbol on the debug stream.
    /// \param yytype       The token type.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (int yytype,
                                   const semantic_type* yyvaluep,
                                   const location_type* yylocationp);
  private:
    // Debugging.
    std::ostream* yycdebug_;
#endif


    public:

    Ion::IonLexer *lexer;
    ASTManager *manager;
    ASTNode **root;
  };



#ifndef YYSTYPE
# define YYSTYPE yy::parser::semantic_type
#endif
#ifndef YYLTYPE
# define YYLTYPE yy::parser::location_type
#endif


} // yy
#line 377 "/home/Administrator/iffi/Projects/Ion/gen/ion.tab.h" // glr.cc:353


#endif // !YY_YY_HOME_ADMINISTRATOR_IFFI_PROJECTS_ION_GEN_ION_TAB_H_INCLUDED
