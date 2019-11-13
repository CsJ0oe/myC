/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "lang.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
extern int yyparse();
void yyerror (char* s) { printf ("%s\n",s); }

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "lang.y" /* yacc.c:355  */

#include "Table_des_symboles.h"
#include "Attribute.h"

#line 108 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMI = 258,
    NUMF = 259,
    ID = 260,
    TINT = 261,
    TFLOAT = 262,
    STRUCT = 263,
    AO = 264,
    AF = 265,
    PO = 266,
    PF = 267,
    PV = 268,
    VIR = 269,
    RETURN = 270,
    VOID = 271,
    EQ = 272,
    IF = 273,
    ELSE = 274,
    WHILE = 275,
    AND = 276,
    OR = 277,
    NOT = 278,
    DIFF = 279,
    EQUAL = 280,
    SUP = 281,
    INF = 282,
    PLUS = 283,
    MOINS = 284,
    STAR = 285,
    DIV = 286,
    DOT = 287,
    ARR = 288,
    UNA = 289
  };
#endif
/* Tokens.  */
#define NUMI 258
#define NUMF 259
#define ID 260
#define TINT 261
#define TFLOAT 262
#define STRUCT 263
#define AO 264
#define AF 265
#define PO 266
#define PF 267
#define PV 268
#define VIR 269
#define RETURN 270
#define VOID 271
#define EQ 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define AND 276
#define OR 277
#define NOT 278
#define DIFF 279
#define EQUAL 280
#define SUP 281
#define INF 282
#define PLUS 283
#define MOINS 284
#define STAR 285
#define DIV 286
#define DOT 287
#define ARR 288
#define UNA 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "lang.y" /* yacc.c:355  */

	attribute val;

#line 192 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 209 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    42,    47,    48,    51,    52,    53,    57,
      61,    64,    67,    68,    72,    75,    78,    79,    82,    83,
      85,    86,    89,    92,    97,    98,   102,   103,   104,   105,
     109,   110,   116,   117,   121,   122,   123,   124,   125,   126,
     127,   133,   134,   139,   140,   145,   146,   150,   153,   156,
     161,   164,   166,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   185,   189,   190,   191,   192,   193,   194,   195,
     199,   200,   202,   207,   209,   210,   213,   214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMI", "NUMF", "ID", "TINT", "TFLOAT",
  "STRUCT", "AO", "AF", "PO", "PF", "PV", "VIR", "RETURN", "VOID", "EQ",
  "IF", "ELSE", "WHILE", "AND", "OR", "NOT", "DIFF", "EQUAL", "SUP", "INF",
  "PLUS", "MOINS", "STAR", "DIV", "DOT", "ARR", "UNA", "$accept", "prog",
  "block", "decl_list", "decl", "var_decl", "struct_decl", "struct",
  "attr", "fun_decl", "fun", "fun_head", "params", "vlist", "vir",
  "fun_body", "type", "typename", "pointer", "inst_list", "inst", "aff",
  "ret", "cond", "bool_cond", "if", "else", "loop", "while_cond", "while",
  "exp", "app", "args", "arglist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     227,   -47,   -47,     5,   -47,    26,   -47,    75,   227,    21,
      22,   -47,    36,    13,    35,   -47,   -47,   -47,    -6,   227,
     109,   -47,   137,   -47,   -47,   -47,   109,   109,   109,   -47,
      33,   -47,   -47,   -47,    46,    75,   -47,    50,   180,   -47,
     -47,   -47,   -47,     1,   -47,    53,   -47,   -47,    43,   241,
     -47,   109,   109,    65,    52,    -8,    96,   193,   -47,   -47,
     -47,    75,   109,    75,   -47,   109,    75,   109,   109,   109,
     109,   109,   109,   109,   109,   106,   109,    71,    72,   234,
     -47,    76,   227,   -47,   -47,    77,    73,    86,   167,    80,
     -47,   193,   -47,   -47,   109,   -47,   -47,   125,   -47,   147,
     -47,    -3,    39,    37,    37,    37,    37,   206,   206,   109,
       6,     6,   -47,   -47,   -47,    84,    92,    88,   -47,   105,
     -47,   -47,    93,   109,   -47,   -47,   -47,   193,   -47,    88,
     -47,   241,   -47,   241,   -47,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    26,    27,     0,    28,     0,     2,     0,     5,     0,
       0,     8,     0,    25,    29,     1,    60,    61,    59,     5,
       0,    40,     0,    48,    49,    52,     0,     0,     0,     3,
      33,    36,    37,    38,     0,     0,    39,     0,    34,    72,
       4,     6,     7,    21,    14,     0,     9,    31,    24,     0,
      10,    75,     0,     0,    59,     0,     0,    43,    63,    53,
      62,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     5,    15,    30,     0,     0,     0,    77,     0,
      74,    41,    35,    58,     0,    44,    32,     0,    45,     0,
      50,    68,    69,    67,    66,    65,    64,    54,    55,     0,
      56,    57,    71,    70,    16,     0,     0,    21,    20,     0,
      29,    11,    12,     0,    73,    47,    51,    42,    17,    19,
      23,     0,    76,     0,    13,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -18,   108,   -47,   -47,   -47,   -47,   -13,   -47,
     -47,   -47,   -12,    41,    -5,   -47,   -46,   -47,   -47,    66,
     -26,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -20,   -47,   -47,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    10,    50,    86,    11,
      44,    45,   115,    46,    81,    83,    12,    13,    48,    29,
      30,    31,    32,    33,    63,    34,    35,    36,    66,    37,
      38,    39,    89,    90
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    53,    57,    87,    93,    51,    58,    59,    60,    64,
      14,    52,    79,    67,    68,    80,    69,    70,    71,    72,
      73,    74,    94,    76,    77,    78,    15,    67,    68,    77,
      78,    88,    91,   116,    41,    42,    55,    98,    77,    78,
     100,    43,    97,    47,    49,    99,    61,   101,   102,   103,
     104,   105,   106,   107,   108,   110,   111,    62,    67,    68,
      67,    65,    82,    51,   119,    73,    74,    94,    76,    77,
      78,    77,    78,    84,   110,    92,   112,   113,    16,    17,
      18,   117,   120,   121,    19,    87,    20,   116,    21,   127,
      22,   122,   124,    23,    24,    25,   128,   129,    26,    16,
      17,    54,    80,    88,    27,    28,   131,    20,    95,    16,
      17,    54,    16,    17,    54,   130,    40,    20,   134,    26,
      20,   135,   118,   109,   133,    27,    28,    96,     0,    26,
     132,     0,    26,     0,     0,    27,    28,   125,    27,    28,
      16,    17,    54,     0,     0,     0,    67,    68,    56,    69,
      70,    71,    72,    73,    74,    94,    76,    77,    78,   126,
      26,     0,     0,     0,     0,     0,    27,    28,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    94,    76,    77,
      78,   123,     0,     0,     0,     0,     0,     0,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    94,    76,    77,
      78,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    94,    76,    77,    78,    67,    68,     0,
       0,     0,     0,     1,     2,     3,    94,    76,    77,    78,
       1,     2,    85,     4,     0,     0,   114,     1,     2,    85,
       4,     0,     0,     0,     0,     0,     0,     4
};

static const yytype_int16 yycheck[] =
{
      20,    19,    22,    49,    12,    11,    26,    27,    28,    35,
       5,    17,    11,    21,    22,    14,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    21,    22,    32,
      33,    51,    52,    79,    13,    13,    56,    63,    32,    33,
      66,     5,    62,    30,     9,    65,    13,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    11,    21,    22,
      21,    11,     9,    11,    82,    28,    29,    30,    31,    32,
      33,    32,    33,    30,    94,    10,     5,     5,     3,     4,
       5,     5,     5,    10,     9,   131,    11,   133,    13,   109,
      15,     5,    12,    18,    19,    20,    12,     5,    23,     3,
       4,     5,    14,   123,    29,    30,    13,    11,    12,     3,
       4,     5,     3,     4,     5,    10,     8,    11,   131,    23,
      11,   133,    81,    17,   129,    29,    30,    61,    -1,    23,
     123,    -1,    23,    -1,    -1,    29,    30,    12,    29,    30,
       3,     4,     5,    -1,    -1,    -1,    21,    22,    11,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    12,
      23,    -1,    -1,    -1,    -1,    -1,    29,    30,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    21,    22,    -1,
      -1,    -1,    -1,     6,     7,     8,    30,    31,    32,    33,
       6,     7,     8,    16,    -1,    -1,    12,     6,     7,     8,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,    16,    36,    37,    38,    39,    40,
      41,    44,    51,    52,     5,     0,     3,     4,     5,     9,
      11,    13,    15,    18,    19,    20,    23,    29,    30,    54,
      55,    56,    57,    58,    60,    61,    62,    64,    65,    66,
      38,    13,    13,     5,    45,    46,    48,    30,    53,     9,
      42,    11,    17,    37,     5,    65,    11,    65,    65,    65,
      65,    13,    11,    59,    55,    11,    63,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      14,    49,     9,    50,    30,     8,    43,    51,    65,    67,
      68,    65,    10,    12,    30,    12,    54,    65,    55,    65,
      55,    65,    65,    65,    65,    65,    65,    65,    65,    17,
      65,    65,     5,     5,    12,    47,    51,     5,    48,    37,
       5,    10,     5,    14,    12,    12,    12,    65,    12,     5,
      10,    13,    68,    49,    43,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    38,    38,    39,    39,    39,    40,
      41,    42,    43,    43,    44,    45,    46,    46,    47,    47,
      48,    48,    49,    50,    51,    51,    52,    52,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    60,    61,
      62,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     2,     2,     1,     2,
       3,     3,     2,     4,     2,     2,     3,     4,     4,     2,
       3,     1,     1,     3,     2,     1,     1,     1,     1,     2,
       2,     1,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     3,     4,     2,     3,     3,     2,     3,     1,     1,
       3,     3,     1,     2,     3,     3,     3,     3,     3,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     4,     1,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
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
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
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
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 38 "lang.y" /* yacc.c:1646  */
    {}
#line 1403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "lang.y" /* yacc.c:1646  */
    {}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "lang.y" /* yacc.c:1646  */
    {}
#line 1415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "lang.y" /* yacc.c:1646  */
    {}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "lang.y" /* yacc.c:1646  */
    {}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "lang.y" /* yacc.c:1646  */
    {}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "lang.y" /* yacc.c:1646  */
    {}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "lang.y" /* yacc.c:1646  */
    {}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "lang.y" /* yacc.c:1646  */
    {}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "lang.y" /* yacc.c:1646  */
    {}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "lang.y" /* yacc.c:1646  */
    {}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "lang.y" /* yacc.c:1646  */
    {}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 72 "lang.y" /* yacc.c:1646  */
    {}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "lang.y" /* yacc.c:1646  */
    {}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "lang.y" /* yacc.c:1646  */
    {}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 79 "lang.y" /* yacc.c:1646  */
    {}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "lang.y" /* yacc.c:1646  */
    {}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "lang.y" /* yacc.c:1646  */
    {}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "lang.y" /* yacc.c:1646  */
    {}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 86 "lang.y" /* yacc.c:1646  */
    {}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "lang.y" /* yacc.c:1646  */
    {}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 92 "lang.y" /* yacc.c:1646  */
    {}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 97 "lang.y" /* yacc.c:1646  */
    {}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 98 "lang.y" /* yacc.c:1646  */
    {}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 102 "lang.y" /* yacc.c:1646  */
    {}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "lang.y" /* yacc.c:1646  */
    {}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "lang.y" /* yacc.c:1646  */
    {}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 105 "lang.y" /* yacc.c:1646  */
    {}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 109 "lang.y" /* yacc.c:1646  */
    {}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 110 "lang.y" /* yacc.c:1646  */
    {}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "lang.y" /* yacc.c:1646  */
    {}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 117 "lang.y" /* yacc.c:1646  */
    {}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "lang.y" /* yacc.c:1646  */
    {}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "lang.y" /* yacc.c:1646  */
    {}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "lang.y" /* yacc.c:1646  */
    {}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "lang.y" /* yacc.c:1646  */
    {}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "lang.y" /* yacc.c:1646  */
    {}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 126 "lang.y" /* yacc.c:1646  */
    {}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "lang.y" /* yacc.c:1646  */
    {}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 133 "lang.y" /* yacc.c:1646  */
    {}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "lang.y" /* yacc.c:1646  */
    {}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "lang.y" /* yacc.c:1646  */
    {}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "lang.y" /* yacc.c:1646  */
    {}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "lang.y" /* yacc.c:1646  */
    {}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "lang.y" /* yacc.c:1646  */
    {}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 153 "lang.y" /* yacc.c:1646  */
    {}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 156 "lang.y" /* yacc.c:1646  */
    {}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 161 "lang.y" /* yacc.c:1646  */
    {}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 164 "lang.y" /* yacc.c:1646  */
    {}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "lang.y" /* yacc.c:1646  */
    {}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 173 "lang.y" /* yacc.c:1646  */
    {}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 174 "lang.y" /* yacc.c:1646  */
    {}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 175 "lang.y" /* yacc.c:1646  */
    {}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 176 "lang.y" /* yacc.c:1646  */
    {}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 177 "lang.y" /* yacc.c:1646  */
    {}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 178 "lang.y" /* yacc.c:1646  */
    {}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 179 "lang.y" /* yacc.c:1646  */
    {}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 180 "lang.y" /* yacc.c:1646  */
    {}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "lang.y" /* yacc.c:1646  */
    {}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 185 "lang.y" /* yacc.c:1646  */
    {}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 189 "lang.y" /* yacc.c:1646  */
    {}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "lang.y" /* yacc.c:1646  */
    {}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 191 "lang.y" /* yacc.c:1646  */
    {}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 192 "lang.y" /* yacc.c:1646  */
    {}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 193 "lang.y" /* yacc.c:1646  */
    {}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 194 "lang.y" /* yacc.c:1646  */
    {}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 195 "lang.y" /* yacc.c:1646  */
    {}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 199 "lang.y" /* yacc.c:1646  */
    {}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 200 "lang.y" /* yacc.c:1646  */
    {}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 202 "lang.y" /* yacc.c:1646  */
    {}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 209 "lang.y" /* yacc.c:1646  */
    {}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 210 "lang.y" /* yacc.c:1646  */
    {}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 213 "lang.y" /* yacc.c:1646  */
    {}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 214 "lang.y" /* yacc.c:1646  */
    {}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1845 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 219 "lang.y" /* yacc.c:1906  */


int main () { printf ("? "); return yyparse (); }
