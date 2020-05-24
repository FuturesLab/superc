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
#line 170 "c.y" /* yacc.c:339  */

import xtc.Constants;
import xtc.Limits;

import xtc.lang.cpp.CContext.SymbolTable.STField;

import xtc.tree.Attribute;
import xtc.tree.GNode;
import xtc.tree.Location;
import xtc.tree.Node;
import xtc.tree.Visitor;

import xtc.util.Pair;

import xtc.lang.cpp.Syntax.Kind;
import xtc.lang.cpp.Syntax.LanguageTag;
import xtc.lang.cpp.Syntax.ConditionalTag;
import xtc.lang.cpp.Syntax.DirectiveTag;
import xtc.lang.cpp.Syntax.Layout;
import xtc.lang.cpp.Syntax.Language;
import xtc.lang.cpp.Syntax.Text;
import xtc.lang.cpp.Syntax.Directive;
import xtc.lang.cpp.Syntax.Conditional;
import xtc.lang.cpp.Syntax.Error;

import xtc.type.AliasT;
import xtc.type.ArrayT;
import xtc.type.BooleanT;
import xtc.type.C;
import xtc.type.CastReference;
import xtc.type.Constant;
import xtc.type.DynamicReference;
import xtc.type.EnumT;
import xtc.type.EnumeratorT;
import xtc.type.ErrorT;
import xtc.type.FieldReference;
import xtc.type.FunctionT;
import xtc.type.InternalT;
import xtc.type.LabelT;
import xtc.type.NullReference;
import xtc.type.NumberT;
import xtc.type.PointerT;
import xtc.type.Reference;
import xtc.type.StaticReference;
import xtc.type.StringReference;
import xtc.type.StructOrUnionT;
import xtc.type.StructT;
import xtc.type.Tagged;
import xtc.type.Type;
import xtc.type.Type.Tag;
import xtc.type.UnionT;
import xtc.type.VariableT;
import xtc.type.VoidT;

import xtc.util.SymbolTable;
import xtc.util.SymbolTable.Scope;
import xtc.util.SingletonIterator;
import xtc.util.Utilities;

import xtc.lang.cpp.PresenceConditionManager.PresenceCondition;

import xtc.lang.cpp.ForkMergeParser.StackFrame;

import java.lang.StringBuilder;

import java.util.ArrayList;
import java.util.List;

import java.io.File;
import java.io.Reader;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.StringReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

import xtc.type.Type;
import xtc.type.NumberT;
import xtc.type.StructT;
import xtc.type.VariableT;
import xtc.type.UnitT;
/* TUTORIAL: add any additional type classes here */

import org.sat4j.core.VecInt;
import org.sat4j.minisat.SolverFactory;
import org.sat4j.specs.ContradictionException;
import org.sat4j.specs.IConstr;
import org.sat4j.specs.IProblem;
import org.sat4j.specs.ISolver;
import org.sat4j.specs.TimeoutException;
import org.sat4j.tools.ModelIterator;


#line 160 "c.tab.c" /* yacc.c:339  */

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    DOUBLE = 259,
    INT = 260,
    STRUCT = 261,
    BREAK = 262,
    ELSE = 263,
    LONG = 264,
    SWITCH = 265,
    CASE = 266,
    ENUM = 267,
    REGISTER = 268,
    TYPEDEF = 269,
    CHAR = 270,
    EXTERN = 271,
    RETURN = 272,
    UNION = 273,
    CONST = 274,
    FLOAT = 275,
    SHORT = 276,
    UNSIGNED = 277,
    CONTINUE = 278,
    FOR = 279,
    SIGNED = 280,
    VOID = 281,
    DEFAULT = 282,
    GOTO = 283,
    SIZEOF = 284,
    VOLATILE = 285,
    DO = 286,
    IF = 287,
    STATIC = 288,
    WHILE = 289,
    IDENTIFIER = 290,
    STRINGliteral = 291,
    FLOATINGconstant = 292,
    INTEGERconstant = 293,
    CHARACTERconstant = 294,
    OCTALconstant = 295,
    HEXconstant = 296,
    TYPEDEFname = 297,
    ARROW = 298,
    ICR = 299,
    DECR = 300,
    LS = 301,
    RS = 302,
    LE = 303,
    GE = 304,
    EQ = 305,
    NE = 306,
    ANDAND = 307,
    OROR = 308,
    ELLIPSIS = 309,
    MULTassign = 310,
    DIVassign = 311,
    MODassign = 312,
    PLUSassign = 313,
    MINUSassign = 314,
    LSassign = 315,
    RSassign = 316,
    ANDassign = 317,
    ERassign = 318,
    ORassign = 319,
    LPAREN = 320,
    RPAREN = 321,
    COMMA = 322,
    HASH = 323,
    DHASH = 324,
    LBRACE = 325,
    RBRACE = 326,
    LBRACK = 327,
    RBRACK = 328,
    DOT = 329,
    AND = 330,
    STAR = 331,
    PLUS = 332,
    MINUS = 333,
    NEGATE = 334,
    NOT = 335,
    DIV = 336,
    MOD = 337,
    LT = 338,
    GT = 339,
    XOR = 340,
    PIPE = 341,
    QUESTION = 342,
    COLON = 343,
    SEMICOLON = 344,
    ASSIGN = 345,
    ASMSYM = 346,
    _BOOL = 347,
    _COMPLEX = 348,
    RESTRICT = 349,
    __ALIGNOF = 350,
    __ALIGNOF__ = 351,
    ASM = 352,
    __ASM = 353,
    __ASM__ = 354,
    AT = 355,
    USD = 356,
    __ATTRIBUTE = 357,
    __ATTRIBUTE__ = 358,
    __BUILTIN_OFFSETOF = 359,
    __BUILTIN_TYPES_COMPATIBLE_P = 360,
    __BUILTIN_VA_ARG = 361,
    __BUILTIN_VA_LIST = 362,
    __COMPLEX__ = 363,
    __CONST = 364,
    __CONST__ = 365,
    __EXTENSION__ = 366,
    INLINE = 367,
    __INLINE = 368,
    __INLINE__ = 369,
    __LABEL__ = 370,
    __RESTRICT = 371,
    __RESTRICT__ = 372,
    __SIGNED = 373,
    __SIGNED__ = 374,
    __THREAD = 375,
    TYPEOF = 376,
    __TYPEOF = 377,
    __TYPEOF__ = 378,
    __VOLATILE = 379,
    __VOLATILE__ = 380,
    __INT128 = 381,
    PPNUM = 382,
    BACKSLASH = 383
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 337 "c.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4654

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  231
/* YYNRULES -- Number of rules.  */
#define YYNRULES  624
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   267,   267,   289,   291,   301,   302,   309,   316,   326,
     330,   331,   341,   341,   341,   343,   352,   342,   358,   366,
     367,   372,   377,   382,   388,   389,   394,   399,   404,   412,
     413,   418,   423,   428,   439,   439,   439,   440,   440,   440,
     444,   449,   454,   459,   465,   470,   475,   480,   488,   493,
     498,   503,   536,   537,   541,   541,   542,   542,   543,   543,
     544,   544,   552,   551,   557,   556,   562,   561,   569,   578,
     577,   593,   592,   600,   605,   610,   615,   620,   628,   632,
     637,   641,   646,   654,   662,   673,   687,   695,   709,   715,
     724,   732,   740,   748,   756,   767,   768,   769,   773,   774,
     775,   779,   780,   781,   785,   786,   787,   791,   804,   817,
     831,   847,   858,   871,   884,   902,   903,   904,   908,   909,
     910,   915,   921,   928,   938,   944,   951,   960,   961,   962,
     963,   967,   968,   969,   970,   974,   975,   979,   980,   981,
     985,   991,   997,  1003,  1012,  1017,  1023,  1029,  1038,  1042,
    1048,  1054,  1060,  1066,  1075,  1081,  1087,  1093,  1101,  1107,
    1114,  1120,  1126,  1132,  1138,  1144,  1153,  1154,  1155,  1159,
    1160,  1164,  1165,  1166,  1170,  1171,  1170,  1181,  1182,  1181,
    1192,  1193,  1194,  1193,  1204,  1205,  1204,  1215,  1219,  1220,
    1219,  1222,  1223,  1222,  1225,  1226,  1227,  1226,  1229,  1230,
    1229,  1236,  1241,  1244,  1253,  1254,  1255,  1256,  1257,  1261,
    1262,  1266,  1267,  1272,  1273,  1277,  1278,  1281,  1283,  1287,
    1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,
    1309,  1310,  1314,  1314,  1315,  1315,  1318,  1320,  1324,  1325,
    1329,  1330,  1375,  1376,  1380,  1381,  1382,  1383,  1384,  1385,
    1386,  1387,  1392,  1391,  1397,  1396,  1402,  1401,  1407,  1406,
    1412,  1411,  1417,  1416,  1428,  1429,  1433,  1437,  1438,  1442,
    1443,  1444,  1445,  1448,  1450,  1454,  1455,  1464,  1465,  1466,
    1470,  1471,  1474,  1475,  1479,  1480,  1481,  1485,  1486,  1490,
    1491,  1492,  1493,  1497,  1498,  1502,  1506,  1511,  1519,  1527,
    1532,  1540,  1544,  1551,  1562,  1567,  1573,  1581,  1587,  1600,
    1605,  1612,  1614,  1620,  1628,  1634,  1642,  1653,  1657,  1667,
    1675,  1680,  1688,  1693,  1699,  1707,  1712,  1717,  1722,  1733,
    1742,  1746,  1746,  1746,  1750,  1760,  1765,  1775,  1782,  1783,
    1784,  1788,  1788,  1788,  1789,  1790,  1794,  1795,  1796,  1800,
    1806,  1809,  1811,  1815,  1821,  1827,  1836,  1837,  1838,  1839,
    1843,  1844,  1845,  1846,  1852,  1853,  1854,  1855,  1856,  1857,
    1858,  1862,  1863,  1864,  1865,  1876,  1879,  1881,  1885,  1886,
    1890,  1894,  1895,  1898,  1899,  1903,  1904,  1905,  1909,  1910,
    1919,  1923,  1924,  1925,  1929,  1930,  1931,  1936,  1937,  1938,
    1939,  1943,  1944,  1948,  1952,  1956,  1963,  1964,  1968,  1969,
    1970,  1975,  1976,  1982,  1983,  1984,  1985,  1986,  1987,  1991,
    1995,  1999,  1999,  1999,  2003,  2004,  2005,  2006,  2007,  2008,
    2009,  2010,  2014,  2018,  2019,  2023,  2027,  2031,  2035,  2043,
    2047,  2048,  2052,  2053,  2054,  2055,  2056,  2057,  2058,  2059,
    2060,  2061,  2062,  2066,  2070,  2074,  2078,  2079,  2083,  2084,
    2088,  2092,  2093,  2094,  2095,  2096,  2097,  2101,  2102,  2106,
    2107,  2108,  2109,  2113,  2114,  2115,  2119,  2120,  2121,  2125,
    2126,  2127,  2128,  2129,  2133,  2134,  2135,  2139,  2140,  2144,
    2145,  2149,  2150,  2154,  2155,  2159,  2160,  2164,  2165,  2167,
    2172,  2173,  2177,  2178,  2179,  2180,  2181,  2182,  2183,  2184,
    2185,  2186,  2187,  2190,  2192,  2196,  2197,  2201,  2204,  2206,
    2210,  2211,  2215,  2219,  2220,  2223,  2225,  2229,  2233,  2236,
    2238,  2239,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,
    2251,  2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    2271,  2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2280,
    2281,  2282,  2283,  2284,  2285,  2286,  2287,  2288,  2289,  2290,
    2291,  2292,  2293,  2294,  2295,  2296,  2297,  2298,  2299,  2300,
    2301,  2302,  2303,  2304,  2305,  2306,  2307,  2308,  2314,  2318,
    2321,  2323,  2327,  2329,  2330,  2334,  2335,  2336,  2337,  2340,
    2342,  2346,  2347,  2351,  2352,  2355,  2357,  2361,  2362,  2366,
    2370,  2371,  2375,  2376,  2377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "DOUBLE", "INT", "STRUCT",
  "BREAK", "ELSE", "LONG", "SWITCH", "CASE", "ENUM", "REGISTER", "TYPEDEF",
  "CHAR", "EXTERN", "RETURN", "UNION", "CONST", "FLOAT", "SHORT",
  "UNSIGNED", "CONTINUE", "FOR", "SIGNED", "VOID", "DEFAULT", "GOTO",
  "SIZEOF", "VOLATILE", "DO", "IF", "STATIC", "WHILE", "IDENTIFIER",
  "STRINGliteral", "FLOATINGconstant", "INTEGERconstant",
  "CHARACTERconstant", "OCTALconstant", "HEXconstant", "TYPEDEFname",
  "ARROW", "ICR", "DECR", "LS", "RS", "LE", "GE", "EQ", "NE", "ANDAND",
  "OROR", "ELLIPSIS", "MULTassign", "DIVassign", "MODassign", "PLUSassign",
  "MINUSassign", "LSassign", "RSassign", "ANDassign", "ERassign",
  "ORassign", "LPAREN", "RPAREN", "COMMA", "HASH", "DHASH", "LBRACE",
  "RBRACE", "LBRACK", "RBRACK", "DOT", "AND", "STAR", "PLUS", "MINUS",
  "NEGATE", "NOT", "DIV", "MOD", "LT", "GT", "XOR", "PIPE", "QUESTION",
  "COLON", "SEMICOLON", "ASSIGN", "ASMSYM", "_BOOL", "_COMPLEX",
  "RESTRICT", "__ALIGNOF", "__ALIGNOF__", "ASM", "__ASM", "__ASM__", "AT",
  "USD", "__ATTRIBUTE", "__ATTRIBUTE__", "__BUILTIN_OFFSETOF",
  "__BUILTIN_TYPES_COMPATIBLE_P", "__BUILTIN_VA_ARG", "__BUILTIN_VA_LIST",
  "__COMPLEX__", "__CONST", "__CONST__", "__EXTENSION__", "INLINE",
  "__INLINE", "__INLINE__", "__LABEL__", "__RESTRICT", "__RESTRICT__",
  "__SIGNED", "__SIGNED__", "__THREAD", "TYPEOF", "__TYPEOF", "__TYPEOF__",
  "__VOLATILE", "__VOLATILE__", "__INT128", "PPNUM", "BACKSLASH",
  "$accept", "TranslationUnit", "ExternalDeclarationList",
  "ExternalDeclaration", "EmptyDefinition", "FunctionDefinitionExtension",
  "FunctionDefinition", "$@1", "$@2", "$@3", "$@4",
  "FunctionCompoundStatement", "FunctionPrototype", "FunctionOldPrototype",
  "NestedFunctionDefinition", "$@5", "$@6", "$@7", "$@8",
  "NestedFunctionPrototype", "NestedFunctionOldPrototype",
  "DeclarationExtension", "Declaration", "$@9", "$@10", "$@11", "$@12",
  "DefaultDeclaringList", "$@13", "$@14", "$@15", "DeclaringList", "$@16",
  "$@17", "DeclarationSpecifier", "TypeSpecifier",
  "DeclarationQualifierList", "TypeQualifierList", "DeclarationQualifier",
  "TypeQualifier", "ConstQualifier", "VolatileQualifier",
  "RestrictQualifier", "FunctionSpecifier", "BasicDeclarationSpecifier",
  "BasicTypeSpecifier", "SUEDeclarationSpecifier", "SUETypeSpecifier",
  "TypedefDeclarationSpecifier", "TypedefTypeSpecifier",
  "TypeofDeclarationSpecifier", "TypeofTypeSpecifier", "Typeofspecifier",
  "Typeofkeyword", "VarArgDeclarationSpecifier", "VarArgTypeSpecifier",
  "VarArgTypeName", "StorageClass", "BasicTypeName", "SignedKeyword",
  "ComplexKeyword", "ElaboratedTypeName", "StructSpecifier", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "UnionSpecifier",
  "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "StructDeclarationList", "StructDeclaration",
  "StructDefaultDeclaringList", "StructDeclaringList", "StructDeclarator",
  "StructIdentifierDeclarator", "BitFieldSizeOpt", "BitFieldSize",
  "EnumSpecifier", "EnumeratorList", "Enumerator", "$@34", "$@35",
  "EnumeratorValueOpt", "ParameterTypeList", "ParameterList",
  "ParameterDeclaration", "ParameterAbstractDeclaration",
  "ParameterIdentifierDeclaration", "$@36", "$@37", "$@38", "$@39", "$@40",
  "$@41", "IdentifierList", "Identifier", "IdentifierOrTypedefName",
  "TypeName", "InitializerOpt", "DesignatedInitializer", "Initializer",
  "InitializerList", "MatchedInitializerList", "Designation",
  "DesignatorList", "Designator", "ObsoleteArrayDesignation",
  "ObsoleteFieldDesignation", "Declarator", "TypedefDeclarator",
  "TypedefDeclaratorMain", "ParameterTypedefDeclarator",
  "CleanTypedefDeclarator", "CleanPostfixTypedefDeclarator",
  "ParenTypedefDeclarator", "ParenPostfixTypedefDeclarator",
  "SimpleParenTypedefDeclarator", "IdentifierDeclarator",
  "IdentifierDeclaratorMain", "UnaryIdentifierDeclarator",
  "PostfixIdentifierDeclarator", "AttributedDeclarator",
  "FunctionDeclarator", "PostfixingFunctionDeclarator", "$@42", "$@43",
  "ArrayDeclarator", "ParenIdentifierDeclarator", "SimpleDeclarator",
  "OldFunctionDeclarator", "PostfixOldFunctionDeclarator", "$@44", "$@45",
  "AbstractDeclarator", "PostfixingAbstractDeclarator",
  "ParameterTypeListOpt", "ArrayAbstractDeclarator",
  "UnaryAbstractDeclarator", "PostfixAbstractDeclarator", "Statement",
  "LabeledStatement", "CompoundStatement", "LocalLabelDeclarationListOpt",
  "LocalLabelDeclarationList", "LocalLabelDeclaration", "LocalLabelList",
  "DeclarationOrStatementList", "DeclarationOrStatement",
  "DeclarationList", "ExpressionStatement", "SelectionStatement",
  "IterationStatement", "JumpStatement", "GotoStatement",
  "ContinueStatement", "BreakStatement", "ReturnStatement", "Constant",
  "StringLiteralList", "PrimaryExpression", "PrimaryIdentifier",
  "VariableArgumentAccess", "StatementAsExpression", "$@46", "$@47",
  "PostfixExpression", "Subscript", "FunctionCall", "DirectSelection",
  "IndirectSelection", "Increment", "Decrement", "CompoundLiteral",
  "ExpressionList", "UnaryExpression", "TypeCompatibilityExpression",
  "OffsetofExpression", "ExtensionExpression", "AlignofExpression",
  "Alignofkeyword", "LabelAddressExpression", "Unaryoperator",
  "CastExpression", "MultiplicativeExpression", "AdditiveExpression",
  "ShiftExpression", "RelationalExpression", "EqualityExpression",
  "AndExpression", "ExclusiveOrExpression", "InclusiveOrExpression",
  "LogicalAndExpression", "LogicalORExpression", "ConditionalExpression",
  "AssignmentExpression", "AssignmentOperator", "ExpressionOpt",
  "Expression", "ConstantExpression", "AttributeSpecifierListOpt",
  "AttributeSpecifierList", "AttributeSpecifier", "AttributeKeyword",
  "AttributeListOpt", "AttributeList", "AttributeExpressionOpt", "Word",
  "AssemblyDefinition", "AssemblyExpression", "AssemblyExpressionOpt",
  "AssemblyStatement", "Assemblyargument", "AssemblyoperandsOpt",
  "Assemblyoperands", "Assemblyoperand", "AssemblyclobbersOpt",
  "Assemblyclobbers", "AssemblyGotoargument", "AssemblyJumpLabels",
  "AsmKeyword", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
# endif

#define YYPACT_NINF -756

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-756)))

#define YYTABLE_NINF -514

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -756,    23,  1739,  -756,  -756,  -756,  -756,   103,  -756,    80,
    -756,  -756,  -756,  -756,   103,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,    12,  3649,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    1987,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,    29,    43,   419,   419,  2111,  2235,  -756,  -756,
    -756,  -756,  -756,  1183,  1183,  1797,  2053,  2293,  2293,  1008,
    1008,  -756,     8,  2169,  2169,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,   124,  -756,    98,  -756,  -756,   113,  -756,   115,   147,
    -756,  -756,   173,   189,   103,  -756,   267,   207,   100,   236,
     247,   103,   295,   409,   304,  3649,  -756,  -756,  -756,  -756,
     302,  2683,   -44,   308,   -44,   333,   365,   465,  3484,   199,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,   368,   383,  -756,
     399,   406,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
     415,   426,  -756,  -756,  -756,  -756,  -756,  -756,  -756,   429,
     439,  -756,  -756,  -756,  -756,  -756,   390,  -756,   425,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  3096,
    -756,  -756,  -756,  -756,  -756,   343,  4065,  -756,   446,   457,
    -756,   493,  -756,   461,   464,   474,  -756,  -756,  -756,    76,
    -756,   267,   267,   478,  -756,   484,   500,   506,   365,  -756,
     365,  -756,  -756,   468,  2850,  -756,   529,   529,  2359,  2483,
    2524,    89,   -44,  -756,   529,  -756,  -756,  -756,  -756,   446,
    -756,   465,   522,   524,   365,   465,  3508,  -756,  -756,  -756,
     -44,   199,   199,   199,  -756,  -756,  4365,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  4443,  4443,   566,  3096,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,   539,   544,   552,  4465,
     299,  3342,  1922,  2916,  2916,  2320,  1682,   553,  -756,   586,
    -756,  -756,  -756,  -756,   801,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,   922,  -756,  -756,  -756,  -756,  4543,  -756,  4465,
    -756,   526,   309,   394,   266,   440,   554,   541,   560,   596,
     106,  -756,  -756,   459,  2850,   644,  -756,  -756,  -756,   617,
    4465,  2974,    46,  1226,  -756,  -756,   631,   613,   613,    69,
    -756,   146,   325,   267,  1226,  -756,  -756,   645,  -756,  -756,
     686,  -756,  -756,   468,  -756,   530,  3540,  -756,   365,    89,
    3681,  -756,  -756,   468,  -756,  -756,  -756,   451,   365,   365,
     664,   467,   465,  -756,  -756,   641,   -44,   -44,   -44,  3096,
    -756,  3096,  -756,  -756,  -756,   666,   667,   476,  3383,  3383,
    4465,  -756,   299,  3720,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,   421,  -756,  -756,  4087,  4465,   421,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  4465,  3096,
    -756,  -756,  4465,  4465,  4465,  4465,  4465,  4465,  4465,  4465,
    4465,  4465,  4465,  4465,  4465,  4465,  4465,  4465,  4465,  4465,
    4165,  -756,  4465,   172,   172,  1051,  1863,  2293,  2293,  -756,
     673,  -756,  -756,  -756,  -756,  -756,   674,  -756,  -756,   661,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,   677,   679,   683,  -756,
    -756,   413,  3219,   680,  -756,    28,   288,  1226,  1226,  -756,
    4465,  -756,  -756,  -756,  -756,   203,  -756,   222,  -756,   354,
     687,  1226,  1226,  -756,  -756,   293,   688,  1355,  -756,   530,
     481,   530,  3593,  3681,  -756,   199,   199,  -756,  -756,  -756,
    -756,  -756,   509,  3987,  -756,   641,   641,   641,   694,   695,
    4187,   468,  -756,  -756,   697,   698,   699,   704,   708,   711,
    3720,  -756,  -756,  -756,   533,  -756,   263,  -756,  -756,   713,
    -756,  -756,  -756,   526,   526,   309,   309,   394,   394,   394,
     394,   266,   266,   440,   554,   541,   560,   596,  4465,    18,
    -756,   297,  3452,  -756,  -756,  -756,  -756,  -756,  -756,   551,
    3610,  -756,  -756,  -756,  -756,  2807,   716,   644,   718,  -756,
     725,  2974,  4265,  -756,  4465,  -756,   -44,  -756,   705,  -756,
     -44,  -756,   705,  -756,    79,  -756,    81,  -756,   721,   723,
    1226,  -756,  -756,  -756,   317,  -756,  -756,   730,   731,  1226,
     769,  -756,  -756,   717,   740,  4465,  4465,   719,   744,   726,
      22,  3831,   753,   754,   732,   733,  1615,  -756,  -756,  -756,
    -756,   419,   419,  2111,  2235,   734,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,   742,   767,
    -756,  3165,   530,   765,   -44,   -44,  -756,   749,  -756,  4465,
     430,  -756,  -756,  4343,   231,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,   768,   768,  -756,  -756,  -756,   774,   364,  3383,
    3383,  -756,   365,  -756,  -756,  -756,  4465,  -756,   768,  -756,
    4465,  3452,   -44,   -44,   -44,   -44,  3610,   -44,   -44,  -756,
    -756,  -756,  -756,  -756,  -756,   683,  -756,   577,  -756,  -756,
    -756,  -756,  -756,  -756,   -44,   -44,  -756,  -756,   771,  -756,
    -756,  -756,   772,  -756,  -756,  4465,    99,   759,  -756,  4465,
    3831,  4465,   760,   818,  4465,  4465,   783,  2683,   784,   791,
     792,   798,   799,   800,   806,   807,   -44,  -756,   813,   493,
     814,  -756,   641,   641,  -756,  3909,    54,  -756,  -756,  -756,
    4465,  -756,  -756,   809,  3987,  1486,  -756,   951,   805,   815,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,   585,  4465,  3831,  -756,   811,
    -756,   301,  -756,   849,   587,   599,   468,  2648,  3831,   493,
     -20,   851,   493,  -756,  -756,  -756,   441,  4465,   337,   196,
    -756,   860,  -756,  -756,  -756,  -756,  3831,   830,  -756,  4465,
    -756,  4465,  3831,  3831,  -756,   468,  -756,    -5,   862,    -9,
     840,   864,  -756,  -756,   861,  4465,  -756,  -756,  3831,   846,
     611,   928,  -756,  1355,  -756,    -9,   848,  2974,   174,   850,
     880,  -756,  -756,   859,   338,   878,  -756,  4465,   863,  3831,
     886,  1355,   872,  -756,   888,  4465,    -9,    -9,  -756,  -756,
     896,  -756,  -756,  -756,   892,    -9,   493,   616,   876,  -756,
    3831,  -756,   877,   227,  -756,   493,  -756,   493,  4465,   586,
     899,   879,   899,   628,   493,   644,  -756,   586,  -756,   901,
     644,  -756
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     2,     1,   152,   161,   157,   174,   159,     0,
     153,   149,   155,   150,   188,    95,   160,   156,   163,   166,
     154,    98,   151,   337,   124,     0,     0,     9,   164,   169,
     101,   622,   623,   624,   523,   524,   148,   170,    96,    97,
       0,   104,   105,   106,   102,   103,   167,   168,   137,   138,
     139,    99,   100,   158,     4,     8,     5,    10,    12,    15,
       6,    52,    60,    58,     0,     0,     0,     0,    86,    90,
      91,    92,    94,    73,    78,    74,    79,    75,    80,    77,
      82,   131,     0,    76,    81,   144,    83,   111,   162,   165,
     118,   171,   172,   173,    19,   319,   320,   322,   327,   325,
     326,   321,   335,    29,   338,    93,     0,     7,     0,     0,
     267,   268,     0,   180,   181,   520,     0,   222,     0,     0,
     194,   195,     0,     0,     0,     0,   323,   339,    11,    53,
       0,     0,   518,     0,   518,     0,   301,     0,     0,   600,
     296,   298,   300,   303,   304,   299,   309,   297,    30,    69,
     297,    31,   122,    85,    88,   128,   141,    89,   108,   116,
      62,    32,   125,    87,   132,   145,    84,   112,   119,    64,
      33,   109,   110,   113,   107,   114,     0,   117,     0,   120,
     115,   123,   126,   121,   129,   130,   133,   134,   127,     0,
     142,   143,   146,   147,   140,   331,     0,   330,   334,     0,
     598,     0,   202,     0,     0,   187,   521,   232,   234,     0,
     230,     0,     0,   227,   202,     0,     0,   201,   329,   336,
     344,   324,   340,   376,     0,   388,     0,     0,     0,     0,
       0,     0,   519,    61,     0,    59,   331,   350,   302,   349,
     317,     0,     0,     0,     0,     0,     0,   305,   312,   601,
     518,   600,   600,   600,    55,    57,     0,   419,   411,   406,
     407,   410,   408,   409,     0,     0,     0,   421,   461,   462,
     463,   464,   465,   466,   459,   458,     0,     0,     0,     0,
     269,   271,    78,    79,    80,    82,    81,     0,   414,   415,
     424,   413,   418,   417,   442,   425,   426,   427,   428,   429,
     430,   431,   467,   452,   451,   450,   449,     0,   448,     0,
     469,   473,   476,   479,   484,   487,   489,   491,   493,   495,
     497,   500,   515,     0,   351,     0,   353,   467,   517,     0,
       0,   525,     0,   175,   202,   202,     0,   236,   236,     0,
     220,     0,     0,     0,   189,   202,   202,     0,   328,   345,
       0,    13,   383,   377,   378,     0,     0,   297,   321,     0,
       0,    62,    64,   376,   389,    66,    71,     0,   307,   314,
       0,     0,     0,   306,   313,   273,   518,   518,   518,   421,
     446,   421,   443,   444,   460,     0,     0,     0,     0,     0,
       0,   455,   331,   356,   270,   348,   346,   347,   272,   135,
     412,     0,   437,   438,     0,     0,     0,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   502,     0,   421,
     457,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,     0,   244,   248,   246,   250,    74,    79,   352,
     238,   240,   243,   242,   332,   266,   342,   264,   354,     0,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   532,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,     0,   526,   529,   599,
     208,     0,     0,     0,   203,     0,     0,   178,   182,   202,
       0,   233,   235,   223,   231,     0,   221,     0,   225,     0,
       0,   192,   196,   202,   381,     0,     0,    18,   379,     0,
       0,     0,     0,     0,    16,   600,   600,   318,   308,   316,
     315,   310,     0,     0,    68,   273,   273,   273,     0,     0,
       0,   376,   422,   416,     0,     0,     0,     0,     0,     0,
     357,   358,   436,   433,     0,   440,     0,   435,   501,     0,
     470,   471,   472,   474,   475,   477,   478,   482,   483,   480,
     481,   485,   486,   488,   490,   492,   494,   496,     0,     0,
     516,   331,   356,   254,   252,   245,   260,   258,   249,   331,
     356,   256,   247,   262,   251,     0,     0,     0,     0,   355,
       0,     0,     0,   527,     0,   207,   518,   214,   217,   206,
     518,   216,   217,   176,     0,   205,     0,   204,     0,     0,
     185,   237,   224,   228,     0,   226,   190,     0,     0,   199,
       0,   380,    14,     0,     0,     0,   513,     0,     0,     0,
       0,   513,     0,     0,   419,   124,     0,   387,    34,    37,
     385,     0,     0,     0,     0,     0,   386,   364,   365,   384,
     366,   367,   368,   369,   397,   398,   399,   400,     0,   514,
     370,     0,     0,     0,   518,   518,   311,   419,   282,     0,
       0,   274,   275,     0,     0,   287,   285,   286,   279,    70,
      63,    65,   447,     0,   282,   468,   383,     0,     0,     0,
       0,   362,   360,   361,   359,   434,     0,   432,   456,   499,
       0,   357,   518,   518,   518,   518,   357,   518,   518,   239,
     241,   333,   265,   343,   522,   529,   530,     0,   219,   211,
     213,   218,   209,   215,   518,   518,   179,   183,     0,   229,
     193,   197,     0,   382,   404,     0,     0,     0,   403,   513,
     513,     0,     0,     0,     0,     0,     0,     0,   297,    48,
     297,    49,    62,    50,    64,    51,   518,   390,     0,     0,
       0,    17,   273,   273,   295,     0,     0,   291,   292,   276,
       0,   284,   288,     0,   280,   513,   423,     0,     0,     0,
     363,   441,   498,   255,   253,   261,   259,   257,   263,   528,
     531,   210,   212,   186,   200,     0,     0,   513,   405,     0,
     374,     0,   401,     0,     0,     0,   376,     0,   513,     0,
     608,     0,     0,    67,    72,   277,     0,     0,   293,     0,
     439,   281,   375,   454,   453,   420,   513,     0,   372,   513,
     402,     0,   513,   513,   383,   376,   371,     0,     0,   609,
       0,     0,   283,   278,     0,     0,   289,   393,   513,     0,
       0,   391,   394,    35,   383,   609,     0,     0,     0,   607,
     610,   611,   602,     0,   294,     0,   373,   513,     0,   513,
       0,    38,     0,   603,     0,     0,   609,     0,   604,   290,
       0,   395,   392,    36,     0,   609,     0,     0,   606,   612,
     513,    39,     0,     0,   613,     0,   396,   615,     0,   617,
     605,     0,   616,     0,     0,     0,   614,   618,   620,   619,
       0,   621
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -756,  -756,  -756,  -756,  -756,  -756,   930,  -756,  -756,  -756,
    -756,   608,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,     6,   -29,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,     4,     0,     5,    -2,    30,   866,
    -756,  -756,  -756,  -756,  -756,    -1,  -315,     1,  -756,     2,
    -756,     3,    82,  -756,  -756,    10,   -13,   340,    13,  -756,
    -756,    59,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,
     152,  -756,  -756,  -756,   316,   319,   335,  -477,  -756,  -163,
    -326,  -756,  -756,   655,  -756,  -756,   362,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,  -756,  -756,  -607,    67,  -128,  -456,
    -755,   275,  -756,   265,  -756,  -756,   277,  -756,  -756,   -43,
    -756,  -756,   -49,    71,  -756,   138,  -756,  -220,   218,  -756,
      21,  -756,  -756,  -756,   -45,  -756,  -756,  -756,    26,  -756,
      35,  -756,  -756,  -756,  -245,   621,  -756,   -39,  -375,  -374,
    -416,  -756,   618,  -567,  -756,   649,  -756,  -710,  -756,   206,
    -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -756,  -191,
    -756,  -756,  -756,  -756,  -756,  -756,   268,  -756,  -756,  -756,
    -756,  -756,  -756,  -756,   363,   460,  -756,  -756,  -756,  -756,
    -756,  -756,  -756,  -123,   284,   285,   244,   289,   573,   574,
     572,   576,   579,  -756,   -78,   -53,  -756,  -661,  -170,  -236,
     201,   589,    58,  -756,  -756,  -756,   250,  -621,  -756,  1017,
    -219,  -756,   158,  -455,  -756,   101,  -756,    83,  -756,  -756,
      27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    54,    55,    56,    57,   130,   556,   131,
     713,   351,    58,    59,   687,   796,   920,   797,   934,   688,
     689,   690,    61,   176,   178,   135,   133,    62,   252,   253,
     565,    63,   251,   566,   226,   280,   228,   281,   153,    68,
      69,    70,    71,    72,    73,   282,    75,   283,    77,   284,
      79,   285,    81,    82,    83,   286,    85,    86,    87,    88,
      89,    90,    91,   112,   533,   203,   658,   204,   659,   336,
     778,    92,   119,   550,   215,   667,   216,   668,   347,   782,
     333,   534,   535,   536,   646,   650,   770,   647,    93,   209,
     210,   337,   338,   541,   449,   450,   451,   452,   453,   753,
     752,   757,   755,   754,   758,   456,   457,   695,   287,   574,
     721,   722,   823,   815,   723,   724,   725,   726,   727,   139,
     140,   141,   142,   143,   144,   145,   146,   244,   126,    95,
      96,    97,    98,    99,   237,   324,   636,   100,   358,   102,
     124,   104,   325,   638,   591,   395,   454,   239,   396,   397,
     696,   697,   698,   352,   353,   354,   555,   557,   699,   230,
     700,   701,   702,   703,   704,   705,   706,   707,   288,   289,
     290,   291,   292,   293,   386,   737,   294,   295,   296,   297,
     298,   299,   300,   301,   594,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   418,   708,   709,   329,
     231,   232,   105,   106,   526,   527,   643,   528,   107,   249,
     250,   710,   861,   909,   910,   911,   951,   950,   888,   959,
     711
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    74,    65,    76,    78,    80,    64,    66,    60,   447,
     332,   129,    84,   544,   736,   787,   400,   588,   589,   323,
     765,   367,   149,     3,   125,   371,   825,   258,   101,   109,
     762,   400,   376,   377,   378,   394,   398,   103,    67,    74,
      65,    76,    78,    80,    64,    66,   122,    23,   341,   342,
      84,   123,   101,   156,   165,   651,   197,   110,    34,    35,
     866,   127,   198,   907,   111,   115,   101,   115,   889,   871,
     191,   193,   115,   189,   113,   103,   117,    25,   197,   158,
     167,   120,   400,   905,   198,   442,   172,   175,    26,   247,
     101,   101,   101,   101,   459,   654,   132,   387,   791,   148,
     151,   161,   170,   171,   207,   177,   750,   181,   867,   184,
     134,   208,   529,   190,    23,   110,    23,   655,   328,   729,
     730,   731,   111,   136,    23,   159,   168,   868,   849,   229,
      74,   227,    76,    78,    80,   110,   246,   225,   110,   385,
     543,    84,   111,   339,   359,   111,   355,   340,   155,   164,
     116,   101,   572,   846,   359,   360,   391,   356,   122,   439,
     222,   185,   187,   123,   101,   360,   109,   644,   -24,   644,
     212,   771,   206,   127,   903,   771,   206,   651,   199,   206,
     549,   205,    34,    35,   149,   213,   421,   847,   217,   195,
     115,   366,   115,   440,   921,   129,   196,   373,   625,   628,
     632,   634,    34,    35,   200,    34,    35,    23,   242,   387,
     400,   387,   201,   545,   136,   156,   165,   546,   899,   544,
      94,   544,   229,    74,   227,    76,    78,    80,   229,    74,
     227,    76,    78,    80,    84,   596,   364,   621,   207,   925,
      84,   158,   167,   202,   196,   208,   588,   589,   622,   387,
     895,   578,   328,   579,   588,   589,   930,   207,    94,  -177,
     584,   585,   122,   400,   208,   793,   122,   123,   165,   896,
     619,   123,   101,   193,   662,   243,   248,   211,   109,   109,
     109,   222,   147,   150,   160,   169,   924,   159,   168,   884,
     206,   599,   948,   663,   167,   175,    31,    32,    33,   600,
     601,   602,   207,   820,   661,   720,   214,   247,   115,   208,
     155,   164,   242,   197,   429,   430,   242,  -191,   904,   198,
     447,   821,   446,    74,   444,   448,    78,    80,   443,   445,
     442,   532,    23,   531,    84,   234,   747,   586,   544,   367,
     168,   371,   532,   221,   531,   744,   714,   715,   958,   431,
     432,   595,   207,   961,   562,   656,   863,   864,   563,   208,
     670,   218,   621,   164,   392,   598,   344,   187,   442,   196,
     220,   196,   223,   622,   850,   393,   122,   657,  -341,   243,
     122,   560,   671,   243,   374,   560,   425,   426,   779,   620,
     880,   590,   547,   122,   623,   626,   548,   233,   123,   257,
     258,   259,   260,   261,   262,   263,   157,   166,   768,  -289,
    -290,  -289,  -290,   157,   174,   157,   180,   157,   183,   157,
     188,   664,   235,   157,   194,   665,   242,  -289,  -290,   381,
     236,   878,   156,   165,   115,   115,   115,   196,   -20,   786,
     427,   428,   886,   242,   357,   357,   361,   362,    23,   365,
     922,   375,   357,   -25,    23,   136,   110,   735,   158,   167,
     897,   136,   328,   111,   221,   817,   901,   902,   592,   -21,
     278,   938,   818,   597,   195,   219,   -26,   177,   355,   254,
     942,   196,   916,   816,   137,   -22,   537,   538,   648,   356,
     433,   434,   572,   243,   248,   138,   -27,   551,   552,   -23,
      23,   644,   645,   932,   159,   168,   744,   240,   892,   -28,
     243,   744,   893,   373,   255,   197,   236,   567,   330,   165,
     728,   198,   331,   196,   946,   441,   442,   155,   164,   258,
     241,   334,   236,   571,   335,   532,   532,   531,   531,   196,
     749,   138,   583,   442,  -184,   167,   236,   219,   343,   532,
     532,   531,   531,   196,   345,   694,    74,   692,    76,    78,
      80,   691,   693,   391,    23,    23,   328,    84,   157,   166,
     346,   136,   240,   247,   236,   716,  -198,   575,   576,   577,
     122,   196,   122,   350,   869,   560,    23,   560,   368,   595,
     369,   168,   109,   109,   355,   559,   114,   328,   118,   745,
     746,   384,   422,   121,   388,   356,   356,   423,   424,   389,
     877,   828,   829,   648,   164,   845,   629,   390,   860,   399,
     751,   851,   400,   196,   854,   855,   436,   630,   756,   435,
     242,   894,   242,   446,    74,   444,   448,    78,    80,   443,
     445,   328,   122,   840,   746,    84,   437,   560,   438,   149,
     122,   876,   442,   882,   442,   560,   327,   129,   532,   915,
     531,   624,   627,   631,   633,   883,   442,   532,   887,   531,
     728,   860,   832,   607,   608,   609,   610,   918,   442,   455,
     156,   165,   944,   442,   229,    74,   227,    76,    78,    80,
     458,   660,   242,   831,   956,   442,    84,   243,   908,   243,
     374,   539,   373,   540,   115,   669,   158,   167,   115,   603,
     604,   900,   605,   606,   908,   553,   380,   101,   101,   101,
     101,   554,   611,   612,   382,   383,   799,   801,   803,   805,
     570,   573,   580,   122,   639,   908,   908,   581,   560,   327,
     635,   637,   328,   640,   908,   943,   641,   792,   642,   357,
     652,   653,   159,   168,   949,   937,   949,   238,   666,   672,
     732,   733,   728,   957,   738,   739,   740,   420,   328,   327,
     741,   728,   115,   115,   742,   155,   164,   743,   953,   748,
     221,   221,   761,   242,   763,   157,   166,   157,   180,   328,
     327,   764,   776,   644,   777,   229,    74,   227,    76,    78,
      80,   780,   781,   225,   783,   785,   784,    84,   788,   789,
     115,   115,   115,   115,   790,   115,   115,   328,   794,   795,
    -267,  -268,   806,   694,    74,   692,    76,    78,    80,   691,
     693,   807,   115,   115,   442,    84,   811,   814,   734,   348,
     826,   349,   843,   844,   401,   402,   403,   769,   848,   852,
     243,   772,   853,   856,   -40,   229,    74,   227,    76,    78,
      80,   -44,   -41,   364,   115,   370,   404,    84,   -45,   -42,
     -46,   874,   652,   405,   357,   406,   -43,   -47,   859,   862,
     870,   875,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     879,   694,    74,   692,    76,    78,    80,   691,   693,   798,
     800,   802,   804,    84,   881,   812,   813,   890,   898,   694,
      74,   692,    76,    78,    80,   691,   693,   892,   906,   912,
     913,    84,   154,   163,   914,   917,   919,   923,   926,   154,
     173,   154,   179,   154,   182,   154,   186,   927,   928,   154,
     192,   929,   931,   833,   834,   835,   836,   933,   837,   838,
     935,   936,   940,   941,   945,   947,   954,   955,   960,   221,
     128,   564,   775,   774,   221,   841,   842,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   773,   370,   568,
     569,   163,   370,   542,   401,   402,   403,   760,   819,   824,
     327,   822,   558,   857,   582,   767,   827,   858,   613,   615,
     614,     4,   417,   587,   616,   839,   404,   873,   617,   108,
     891,    10,    11,   405,    13,   406,     0,    15,   939,     0,
     952,     0,     0,   157,   166,     0,     0,     0,    21,     0,
     327,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     0,     0,
       8,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,   327,     0,
       0,    21,     0,     0,    22,     0,    23,     0,     0,     0,
       0,     0,     0,   152,   154,   163,     0,     0,     0,     0,
       0,     0,    30,     0,   327,     0,     0,     0,     0,     0,
      34,    35,   163,     0,     0,     0,   629,    38,    39,     0,
      41,    42,    43,   196,    44,    45,     0,   630,     0,    48,
      49,    50,    51,    52,     0,   327,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,   327,   163,   173,   179,
     182,   186,   192,    34,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,    53,     0,   327,
       0,     0,     0,     0,     0,     0,     4,     5,     6,     0,
       0,     0,     8,   370,     0,     0,    10,    11,    12,    13,
       0,     0,    15,    16,    17,    18,     0,     0,    19,    20,
     327,     0,     0,    21,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     0,     8,     0,     0,     9,     0,
       0,    12,   587,     0,    14,    15,    16,    17,    18,     0,
     587,    19,    20,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
     327,     0,     0,     0,     0,    34,    35,     0,     0,     0,
       0,    37,    38,    39,     0,    41,    42,    43,     0,    44,
      45,    46,    47,     0,     0,     0,   327,    51,    52,    53,
       0,   154,   163,   154,   179,   530,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,   327,    34,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,    53,     0,     0,   327,     0,     0,     4,     5,
       6,     7,   673,   830,     8,   674,   675,     9,    10,    11,
      12,    13,   676,    14,    15,    16,    17,    18,   677,   678,
      19,    20,   679,   680,   256,    21,   681,   682,    22,   683,
     684,   258,   259,   260,   261,   262,   263,   685,   163,   264,
     265,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,   581,     0,     0,   163,   163,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,     0,  -513,     0,     0,    28,    29,    30,
     274,   275,    31,    32,    33,     0,   163,    34,    35,   276,
     277,   278,    36,    37,    38,    39,   686,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,    53,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     6,     7,   673,     0,     8,   674,   675,     9,    10,
      11,    12,    13,   676,    14,    15,    16,    17,    18,   677,
     678,    19,    20,   679,   680,   256,    21,   681,   682,    22,
     683,   684,   258,   259,   260,   261,   262,   263,   685,     0,
     264,   265,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,   581,   872,     0,   154,
     163,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   810,    28,    29,
      30,   274,   275,    31,    32,    33,     0,     0,    34,    35,
     276,   277,   278,    36,    37,    38,    39,   686,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,   163,     4,     5,
       6,     7,   163,     0,     8,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,   256,    21,     0,     0,    22,     0,
     257,   258,   259,   260,   261,   262,   263,    24,     0,   264,
     265,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    28,    29,    30,
     274,   275,    21,     0,     0,     0,     0,    34,    35,   276,
     277,   278,    36,    37,    38,    39,   279,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,    53,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,     0,     0,     0,    21,
       0,     0,    22,     0,    23,     0,    30,     0,     0,     0,
       0,    24,     0,     0,    34,    35,     0,     0,     0,    36,
       0,    38,    39,     0,    41,    42,    43,     0,    44,    45,
       4,     0,     0,     0,    25,     0,    51,    52,     0,     0,
      10,    11,     0,    13,     0,    26,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    27,     0,
      22,    28,    29,    30,     0,     0,    31,    32,    33,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,    53,     4,     5,     6,     7,
       0,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,   -54,     0,    19,    20,
       0,    30,     0,    21,     0,     0,    22,     0,    23,    34,
      35,     0,     0,     0,     0,   162,    38,    39,     0,    41,
      42,    43,     0,    44,    45,     0,     0,     0,     0,     0,
       0,    51,    52,     0,     0,     0,     5,     6,   629,     0,
       0,     8,     0,     0,     0,   196,     0,    12,     0,   630,
       0,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,    53,
       4,     5,     6,     7,     0,     0,     8,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,    28,    29,    30,    21,     0,     0,
      22,     0,    23,     0,    34,    35,     0,     0,     0,    24,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,     0,     0,     0,    51,    52,    53,     0,
       0,     0,    25,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    10,    11,     0,    13,
       0,     0,    15,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,    21,     0,     0,    22,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,    53,     4,     5,     6,     7,     0,     0,
       8,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
       0,    21,   -56,     0,    22,     0,    23,    30,     0,     0,
       0,     0,     0,   152,     0,    34,    35,     0,     0,     0,
       0,     0,    38,    39,     0,    41,    42,    43,     0,    44,
      45,     0,     4,     0,     0,     0,    25,    51,    52,     0,
       0,     0,    10,    11,     0,    13,     0,    26,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,    22,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,    53,     4,     5,
       6,     7,     0,     0,     8,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,    30,     0,    21,     0,     0,    22,     0,
      23,    34,    35,     0,     0,     0,    36,   162,    38,    39,
       0,    41,    42,    43,     0,    44,    45,     0,     0,     0,
       0,     0,     0,    51,    52,     0,     4,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    10,    11,     0,    13,
       0,    26,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    22,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    15,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
      21,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,    53,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,     0,    30,     0,    21,
       0,     0,    22,     0,    23,    34,    35,     0,     0,     0,
       0,   152,    38,    39,     0,    41,    42,    43,     0,    44,
      45,     0,     0,     0,    30,     0,     0,    51,    52,     0,
       0,     0,    34,    35,   359,     0,     0,     0,     0,    38,
      39,     0,    41,    42,    43,   360,    44,    45,     0,     0,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,    53,     4,     5,     6,     7,
       0,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     0,   162,     0,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,   359,    19,
      20,     0,     0,     0,    21,     0,     0,    22,     0,   360,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      36,    37,    38,    39,   363,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,   224,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
      53,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,     0,     0,     0,     4,     5,     6,     7,
      24,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    22,     0,   885,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,   224,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,    53,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      36,    37,    38,    39,   224,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,    53,
       4,     5,     6,     7,     0,     0,     8,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     4,     5,     6,     7,     0,     0,     8,
       0,   759,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,     0,     0,     0,
      21,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,    53,     0,    15,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,    21,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,    53,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,     0,    38,    39,     0,    41,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
      51,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   493,   494,   495,   496,   497,
     498,   499,   500,   501,     0,     0,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
       5,     6,     7,     0,     0,     8,     0,     0,     9,     0,
       0,    12,     0,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,     0,   256,    21,     0,     0,     0,
       0,   257,   258,   259,   260,   261,   262,   263,    24,     0,
     264,   265,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,    28,    29,
      30,   274,   275,   808,     0,    21,     0,     0,    34,    35,
     276,   277,   278,    36,    37,    38,    39,   279,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,    53,     5,     6,     7,     0,     0,     8,     0,
     809,     9,     0,     0,    12,     0,     0,    14,    15,    16,
      17,    18,     0,     0,    19,    20,     0,     0,     0,    21,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    30,
       0,   162,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,     0,     0,    38,    39,     0,    41,    42,    43,
       0,    44,    45,     0,   359,     0,     0,     0,     0,    51,
      52,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,   649,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,    53,     5,     6,     7,     0,
       0,     8,     0,     0,     9,     0,     0,    12,     0,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     5,     6,     7,
       0,     0,     8,     0,     0,     9,     0,     0,    12,     0,
       0,    14,    15,    16,    17,    18,     0,   392,    19,    20,
       0,     0,     0,    21,   196,     0,     0,     0,   393,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,    53,     0,
       0,    15,     0,     0,     0,    28,    29,    30,     0,     0,
       0,     0,    21,     0,     0,    34,    35,    23,     0,     0,
      36,    37,    38,    39,   136,    41,    42,    43,     0,    44,
      45,    46,    47,    15,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,    21,     0,     0,   621,     0,    23,
       0,     0,     0,     0,   196,     0,   136,    15,   622,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,    23,     0,     0,    30,     0,     0,   245,
     136,     0,     0,     0,    34,    35,     0,     0,     0,    15,
     138,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      21,     0,     0,   372,     0,    23,    51,    52,    30,     0,
       0,     0,   136,     0,   138,     0,    34,    35,     0,     0,
       0,     0,     0,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    30,     0,     0,   561,     0,     0,    51,    52,
      34,    35,    15,     0,     0,     0,   356,    38,    39,     0,
      41,    42,    43,    21,    44,    45,     0,     0,    23,    15,
       0,     0,    51,    52,    30,   136,     0,     0,     0,     0,
      21,     0,    34,    35,     0,    23,     0,     0,     0,    38,
      39,     0,    41,    42,    43,     0,    44,    45,   712,     0,
       0,     0,     0,     0,    51,    52,     0,     0,    15,   356,
       0,     0,     0,     0,     0,   629,     0,     0,     0,    21,
       0,     0,   196,     0,    23,     0,   630,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      15,     0,    38,    39,    30,    41,    42,    43,     0,    44,
      45,    21,    34,    35,    25,     0,    23,    51,    52,    38,
      39,     0,    41,    42,    43,    26,    44,    45,     0,     0,
       0,     0,     0,     0,    51,    52,     0,     0,     0,    15,
       0,     0,     0,    30,     0,     0,   359,     0,     0,     0,
      21,    34,    35,     0,     0,     0,     0,   360,    38,    39,
       0,    41,    42,    43,     0,    44,    45,     0,     0,     0,
       0,     0,     0,    51,    52,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,   392,     0,     0,     0,     0,
      38,    39,   196,    41,    42,    43,   393,    44,    45,     0,
       0,     0,     0,     0,     0,    51,    52,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,     0,    38,
      39,     0,    41,    42,    43,     0,    44,    45,   673,     0,
       0,   674,   675,     0,    51,    52,     0,     0,   676,     0,
       0,     0,     0,     0,   677,   678,     0,     0,   679,   680,
     256,     0,   681,   682,     0,   683,   684,   258,   259,   260,
     261,   262,   263,   111,     0,   264,   265,     0,     0,     0,
       0,     0,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,   581,     0,     0,     0,     0,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   274,   275,    31,    32,
      33,     0,     0,     0,     0,   276,   277,   278,   256,     0,
       0,     0,   279,     0,   717,   258,   259,   260,   261,   262,
     263,     0,     0,   264,   265,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,   718,
     865,   719,     0,   720,   268,   269,   270,   271,   272,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   274,   275,     0,     0,     0,     0,
       0,     0,     0,   276,   277,   278,   256,     0,     0,     0,
     279,     0,   717,   258,   259,   260,   261,   262,   263,     0,
       0,   264,   265,     0,     0,     0,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,     0,     0,     0,   718,     0,   719,
       0,   720,   268,   269,   270,   271,   272,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   275,     0,     0,     0,     0,     0,     0,
       0,   276,   277,   278,   256,     0,     0,     0,   279,     0,
     257,   258,   259,   260,   261,   262,   263,     0,     0,   264,
     265,     0,     0,     0,     0,     0,   256,   266,     0,     0,
       0,     0,   257,   258,   259,   260,   261,   262,   263,     0,
     267,   264,   265,     0,     0,     0,     0,     0,   326,   266,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,   267,   593,     0,     0,     0,     0,     0,     0,
     274,   275,   268,   269,   270,   271,   272,   273,     0,   276,
     277,   278,     0,     0,     0,     0,   279,     0,     0,     0,
       0,     0,   274,   275,     0,     0,     0,     0,     0,     0,
       0,   276,   277,   278,   256,     0,     0,     0,   279,     0,
     257,   258,   259,   260,   261,   262,   263,     0,     0,   264,
     265,     0,     0,     0,     0,     0,   256,   266,     0,     0,
       0,     0,   257,   258,   259,   260,   261,   262,   263,     0,
     267,   264,   265,     0,     0,     0,     0,     0,     0,   266,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,   267,   618,     0,     0,     0,   734,     0,     0,
     274,   275,   268,   269,   270,   271,   272,   273,     0,   276,
     277,   278,     0,     0,     0,     0,   279,     0,     0,     0,
       0,     0,   274,   275,     0,     0,     0,     0,     0,     0,
       0,   276,   277,   278,   256,     0,     0,     0,   279,     0,
     257,   258,   259,   260,   261,   262,   263,     0,     0,   264,
     265,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     267,   766,     0,     0,     0,     0,     0,     0,     0,     0,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,     0,     0,     0,     0,     0,     0,     0,   276,
     277,   278,   256,     0,     0,     0,   279,     0,   257,   258,
     259,   260,   261,   262,   263,     0,     0,   264,   265,     0,
       0,     0,     0,     0,   256,   266,     0,     0,     0,     0,
     257,   258,   259,   260,   261,   262,   263,     0,   267,   264,
     265,     0,     0,   718,     0,     0,     0,   266,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
     379,     0,     0,     0,     0,     0,     0,     0,   274,   275,
     268,   269,   270,   271,   272,   273,     0,   276,   277,   278,
       0,     0,     0,     0,   279,     0,     0,     0,     0,     0,
     274,   275,     0,     0,     0,     0,     0,     0,     0,   276,
     277,   278,   256,     0,     0,     0,   279,     0,   257,   258,
     259,   260,   261,   262,   263,     0,     0,   264,   265,     0,
       0,     0,     0,     0,   256,   266,     0,     0,     0,     0,
     257,   258,   259,   260,   261,   262,   263,     0,   381,   264,
     265,     0,     0,     0,     0,     0,     0,   266,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,   274,   275,
     268,   269,   270,   271,   272,   273,     0,   276,   277,   278,
       0,     0,     0,     0,   279,     0,     0,     0,     0,     0,
     274,   275,     0,     0,     0,     0,     0,     0,     0,   276,
     277,   278,   256,     0,     0,     0,   279,     0,   257,   258,
     259,   260,   261,   262,   263,     0,     0,   264,   265,     0,
       0,     0,     0,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   274,   275,
       0,     0,     0,     0,     0,     0,     0,   276,   277,   278,
       0,     0,     0,     0,   279
};

static const yytype_int16 yycheck[] =
{
       2,     2,     2,     2,     2,     2,     2,     2,     2,   324,
     201,    40,     2,   339,   581,   676,    36,   392,   392,   189,
     641,   241,    65,     0,    26,   245,   736,    36,     2,     2,
     637,    36,   251,   252,   253,   280,   281,     2,    40,    40,
      40,    40,    40,    40,    40,    40,    25,    35,   211,   212,
      40,    25,    26,    66,    67,   532,   101,    35,   102,   103,
     815,    26,   101,    72,    42,     7,    40,     9,    88,   824,
      83,    84,    14,    65,     7,    40,     9,    65,   123,    66,
      67,    14,    36,    88,   123,    67,    73,    74,    76,   138,
      64,    65,    66,    67,   330,    67,    67,   267,    76,    64,
      65,    66,    67,    73,    35,    75,    88,    77,    54,    79,
      67,    42,    66,    83,    35,    35,    35,    89,   196,   575,
     576,   577,    42,    42,    35,    66,    67,    73,   789,   131,
     131,   131,   131,   131,   131,    35,   138,   131,    35,   267,
      71,   131,    42,    67,    65,    42,    65,    71,    66,    67,
      70,   125,   372,    54,    65,    76,   279,    76,   137,    53,
     125,    79,    80,   137,   138,    76,   139,    88,    70,    88,
      70,   648,   114,   138,   884,   652,   118,   654,    65,   121,
     343,   114,   102,   103,   227,   118,   309,    88,   121,    65,
     132,   234,   134,    87,   904,   224,    72,   246,   443,   444,
     445,   446,   102,   103,    89,   102,   103,    35,   137,   379,
      36,   381,    65,    67,    42,   228,   229,    71,   879,   545,
       2,   547,   224,   224,   224,   224,   224,   224,   230,   230,
     230,   230,   230,   230,   224,   405,   230,    65,    35,    65,
     230,   228,   229,    70,    72,    42,   621,   621,    76,   419,
      54,   379,   330,   381,   629,   629,   917,    35,    40,    70,
     388,   389,   241,    36,    42,   681,   245,   241,   281,    73,
     440,   245,   246,   286,    71,   137,   138,    70,   251,   252,
     253,   246,    64,    65,    66,    67,   907,   228,   229,   856,
     232,   419,    65,    71,   281,   282,    97,    98,    99,   422,
     423,   424,    35,    72,   540,    74,    70,   356,   250,    42,
     228,   229,   241,   358,    48,    49,   245,    70,   885,   358,
     635,    90,   324,   324,   324,   324,   324,   324,   324,   324,
      67,   333,    35,   333,   324,   134,    73,   390,   664,   559,
     281,   561,   344,   125,   344,   590,   565,   566,   955,    83,
      84,   404,    35,   960,   356,    67,   812,   813,   360,    42,
      67,    66,    65,   281,    65,   418,   214,   285,    67,    72,
      66,    72,    70,    76,   790,    76,   355,    89,    35,   241,
     359,   355,    89,   245,   246,   359,    77,    78,    71,   442,
      89,   393,    67,   372,   443,   444,    71,    89,   372,    35,
      36,    37,    38,    39,    40,    41,    66,    67,   644,    72,
      72,    74,    74,    73,    74,    75,    76,    77,    78,    79,
      80,    67,    89,    83,    84,    71,   355,    90,    90,    65,
      65,   847,   445,   446,   376,   377,   378,    72,    70,   675,
      46,    47,   858,   372,   226,   227,   228,   229,    35,   231,
     905,   250,   234,    70,    35,    42,    35,   580,   445,   446,
     876,    42,   540,    42,   246,    35,   882,   883,   401,    70,
     106,   926,    42,   406,    65,    66,    70,   447,    65,    89,
     935,    72,   898,   719,    65,    70,   334,   335,   531,    76,
      50,    51,   712,   355,   356,    76,    70,   345,   346,    70,
      35,    88,    89,   919,   445,   446,   751,    42,    67,    70,
     372,   756,    71,   562,    89,   560,    65,    66,    72,   532,
     573,   560,    65,    72,   940,    66,    67,   445,   446,    36,
      65,    70,    65,    66,    70,   537,   538,   537,   538,    72,
     618,    76,    66,    67,    70,   532,    65,    66,    70,   551,
     552,   551,   552,    72,    70,   557,   557,   557,   557,   557,
     557,   557,   557,   686,    35,    35,   644,   557,   228,   229,
      70,    42,    42,   622,    65,    66,    70,   376,   377,   378,
     559,    72,   561,   115,   820,   559,    35,   561,    66,   642,
      66,   532,   565,   566,    65,    65,     7,   675,     9,    66,
      67,    35,    76,    14,    65,    76,    76,    81,    82,    65,
     846,   739,   740,   656,   532,   785,    65,    65,   809,    66,
     622,   791,    36,    72,   794,   795,    85,    76,   630,    75,
     559,   867,   561,   635,   635,   635,   635,   635,   635,   635,
     635,   719,   621,    66,    67,   635,    86,   621,    52,   692,
     629,    66,    67,    66,    67,   629,   196,   686,   660,   895,
     660,   443,   444,   445,   446,    66,    67,   669,   859,   669,
     723,   862,   750,   429,   430,   431,   432,    66,    67,    35,
     693,   694,    66,    67,   686,   686,   686,   686,   686,   686,
      73,   539,   621,   746,    66,    67,   686,   559,   889,   561,
     562,    70,   751,    90,   646,   553,   693,   694,   650,   425,
     426,   881,   427,   428,   905,    70,   256,   691,   692,   693,
     694,    35,   433,   434,   264,   265,   691,   692,   693,   694,
      66,    90,    66,   712,    73,   926,   927,    70,   712,   279,
      67,    67,   820,    66,   935,   936,    67,   680,    65,   531,
     532,    71,   693,   694,   945,   925,   947,   136,    71,    71,
      66,    66,   815,   954,    67,    67,    67,   307,   846,   309,
      66,   824,   714,   715,    66,   693,   694,    66,   948,    66,
     562,   563,    66,   712,    66,   445,   446,   447,   448,   867,
     330,    66,    71,    88,    71,   797,   797,   797,   797,   797,
     797,    71,    71,   797,    35,    65,    89,   797,    89,    65,
     752,   753,   754,   755,    88,   757,   758,   895,    65,    65,
      88,    88,    88,   825,   825,   825,   825,   825,   825,   825,
     825,    89,   774,   775,    67,   825,    71,    88,    70,   218,
      66,   220,    71,    71,    43,    44,    45,   646,    89,    89,
     712,   650,    34,    70,    70,   857,   857,   857,   857,   857,
     857,    70,    70,   857,   806,   244,    65,   857,    70,    70,
      70,    66,   654,    72,   656,    74,    70,    70,    65,    65,
      71,    66,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
      89,   903,   903,   903,   903,   903,   903,   903,   903,   691,
     692,   693,   694,   903,    65,   714,   715,    66,    88,   921,
     921,   921,   921,   921,   921,   921,   921,    67,    66,    89,
      66,   921,    66,    67,    73,    89,     8,    89,    88,    73,
      74,    75,    76,    77,    78,    79,    80,    67,    89,    83,
      84,    73,    89,   752,   753,   754,   755,    71,   757,   758,
      88,    73,    66,    71,    88,    88,    67,    88,    67,   751,
      40,   363,   656,   654,   756,   774,   775,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   652,   367,   368,
     369,   125,   371,   338,    43,    44,    45,   635,   723,   734,
     540,   724,   353,   797,   386,   642,   738,   806,   435,   437,
     436,     3,    90,   392,   438,   765,    65,    66,   439,     2,
     862,    13,    14,    72,    16,    74,    -1,    19,   927,    -1,
     947,    -1,    -1,   693,   694,    -1,    -1,    -1,    30,    -1,
     580,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,   618,    -1,
      -1,    30,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,   644,    -1,    -1,    -1,    -1,    -1,
     102,   103,   246,    -1,    -1,    -1,    65,   109,   110,    -1,
     112,   113,   114,    72,   116,   117,    -1,    76,    -1,   121,
     122,   123,   124,   125,    -1,   675,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,   686,   281,   282,   283,
     284,   285,   286,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,    -1,   719,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,   572,    -1,    -1,    13,    14,    15,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    25,    26,
     750,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,   621,    -1,    18,    19,    20,    21,    22,    -1,
     629,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
     820,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,    -1,   846,   124,   125,   126,
      -1,   445,   446,   447,   448,    89,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   867,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   895,    -1,    -1,     3,     4,
       5,     6,     7,   742,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   532,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,   562,   563,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,   590,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    71,    -1,   693,
     694,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   711,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,   751,     3,     4,
       5,     6,   756,    -1,     9,    -1,    -1,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    30,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    35,    -1,    94,    -1,    -1,    -1,
      -1,    42,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
      -1,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
       3,    -1,    -1,    -1,    65,    -1,   124,   125,    -1,    -1,
      13,    14,    -1,    16,    -1,    76,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    89,    -1,
      33,    92,    93,    94,    -1,    -1,    97,    98,    99,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    89,    -1,    25,    26,
      -1,    94,    -1,    30,    -1,    -1,    33,    -1,    35,   102,
     103,    -1,    -1,    -1,    -1,    42,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,     4,     5,    65,    -1,
      -1,     9,    -1,    -1,    -1,    72,    -1,    15,    -1,    76,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    92,    93,    94,    30,    -1,    -1,
      33,    -1,    35,    -1,   102,   103,    -1,    -1,    -1,    42,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    65,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    13,    14,    -1,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    30,    -1,    -1,    33,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    89,    -1,    33,    -1,    35,    94,    -1,    -1,
      -1,    -1,    -1,    42,    -1,   102,   103,    -1,    -1,    -1,
      -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,    -1,     3,    -1,    -1,    -1,    65,   124,   125,    -1,
      -1,    -1,    13,    14,    -1,    16,    -1,    76,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    94,    -1,    30,    -1,    -1,    33,    -1,
      35,   102,   103,    -1,    -1,    -1,   107,    42,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,     3,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    16,
      -1,    76,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    19,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      30,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    94,    -1,    30,
      -1,    -1,    33,    -1,    35,   102,   103,    -1,    -1,    -1,
      -1,    42,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,    -1,    -1,    -1,    94,    -1,    -1,   124,   125,    -1,
      -1,    -1,   102,   103,    65,    -1,    -1,    -1,    -1,   109,
     110,    -1,   112,   113,   114,    76,   116,   117,    -1,    -1,
      -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    65,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    70,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      42,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    54,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    -1,    30,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    28,    -1,    30,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,     4,     5,     6,    -1,    -1,     9,    -1,
      65,    12,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    94,
      -1,    42,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,    -1,    65,    -1,    -1,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    65,    25,    26,
      -1,    -1,    -1,    30,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
      -1,    19,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    30,    -1,    -1,   102,   103,    35,    -1,    -1,
     107,   108,   109,   110,    42,   112,   113,   114,    -1,   116,
     117,   118,   119,    19,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    65,    -1,    35,
      -1,    -1,    -1,    -1,    72,    -1,    42,    19,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    94,    -1,    -1,    65,
      42,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    19,
      76,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
      30,    -1,    -1,    65,    -1,    35,   124,   125,    94,    -1,
      -1,    -1,    42,    -1,    76,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    94,    -1,    -1,    65,    -1,    -1,   124,   125,
     102,   103,    19,    -1,    -1,    -1,    76,   109,   110,    -1,
     112,   113,   114,    30,   116,   117,    -1,    -1,    35,    19,
      -1,    -1,   124,   125,    94,    42,    -1,    -1,    -1,    -1,
      30,    -1,   102,   103,    -1,    35,    -1,    -1,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    65,    -1,
      -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    19,    76,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    30,
      -1,    -1,    72,    -1,    35,    -1,    76,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      19,    -1,   109,   110,    94,   112,   113,   114,    -1,   116,
     117,    30,   102,   103,    65,    -1,    35,   124,   125,   109,
     110,    -1,   112,   113,   114,    76,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    94,    -1,    -1,    65,    -1,    -1,    -1,
      30,   102,   103,    -1,    -1,    -1,    -1,    76,   109,   110,
      -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    65,    -1,    -1,    -1,    -1,
     109,   110,    72,   112,   113,   114,    76,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,     7,    -1,
      -1,    10,    11,    -1,   124,   125,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,
      -1,    -1,   111,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    29,    -1,    -1,    -1,
     111,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    29,    52,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      65,    44,    45,    -1,    -1,    -1,    -1,    -1,    73,    52,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    75,    76,    77,    78,    79,    80,    -1,   104,
     105,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    29,    52,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      65,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    88,    -1,    -1,    -1,    70,    -1,    -1,
      95,    96,    75,    76,    77,    78,    79,    80,    -1,   104,
     105,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    29,    52,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    65,    44,
      45,    -1,    -1,    70,    -1,    -1,    -1,    52,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      75,    76,    77,    78,    79,    80,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    29,    52,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    65,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      75,    76,    77,    78,    79,    80,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,    -1,    -1,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   130,   131,     0,     3,     4,     5,     6,     9,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    25,
      26,    30,    33,    35,    42,    65,    76,    89,    92,    93,
      94,    97,    98,    99,   102,   103,   107,   108,   109,   110,
     111,   112,   113,   114,   116,   117,   118,   119,   121,   122,
     123,   124,   125,   126,   132,   133,   134,   135,   141,   142,
     150,   151,   156,   160,   163,   164,   165,   166,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   200,   217,   257,   258,   259,   260,   261,   262,
     266,   267,   268,   269,   270,   341,   342,   347,   348,   359,
      35,    42,   192,   236,   340,   341,    70,   236,   340,   201,
     236,   340,   259,   267,   269,   166,   257,   269,   135,   151,
     136,   138,    67,   155,    67,   154,    42,    65,    76,   248,
     249,   250,   251,   252,   253,   254,   255,   257,   269,   248,
     257,   269,    42,   167,   168,   181,   185,   186,   187,   190,
     257,   269,    42,   168,   181,   185,   186,   187,   190,   257,
     269,   167,   187,   168,   186,   187,   152,   167,   153,   168,
     186,   167,   168,   186,   167,   181,   168,   181,   186,    65,
     167,   185,   168,   185,   186,    65,    72,   263,   276,    65,
      89,    65,    70,   194,   196,   236,   341,    35,    42,   218,
     219,    70,    70,   236,    70,   203,   205,   236,    66,    66,
      66,   257,   269,    70,   111,   150,   163,   164,   165,   166,
     288,   339,   340,    89,   339,    89,    65,   263,   274,   276,
      42,    65,   252,   254,   256,    65,   166,   251,   254,   348,
     349,   161,   157,   158,    89,    89,    29,    35,    36,    37,
      38,    39,    40,    41,    44,    45,    52,    65,    75,    76,
      77,    78,    79,    80,    95,    96,   104,   105,   106,   111,
     164,   166,   174,   176,   178,   180,   184,   237,   297,   298,
     299,   300,   301,   302,   305,   306,   307,   308,   309,   310,
     311,   312,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   337,   264,   271,    73,   314,   333,   338,
      72,    65,   298,   209,    70,    70,   198,   220,   221,    67,
      71,   218,   218,    70,   209,    70,    70,   207,   274,   274,
     115,   140,   282,   283,   284,    65,    76,   257,   267,    65,
      76,   257,   257,    70,   150,   257,   248,   256,    66,    66,
     274,   256,    65,   251,   254,   339,   349,   349,   349,    65,
     314,    65,   314,   314,    35,   237,   303,   337,    65,    65,
      65,   322,    65,    76,   273,   274,   277,   278,   273,    66,
      36,    43,    44,    45,    65,    72,    74,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    90,   335,    65,
     314,   322,    76,    81,    82,    77,    78,    46,    47,    48,
      49,    83,    84,    50,    51,    75,    85,    86,    52,    53,
      87,    66,    67,   163,   164,   165,   166,   175,   176,   223,
     224,   225,   226,   227,   275,    35,   234,   235,    73,   338,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   343,   344,   346,    66,
      89,   164,   166,   193,   210,   211,   212,   209,   209,    70,
      90,   222,   222,    71,   219,    67,    71,    67,    71,   218,
     202,   209,   209,    70,    35,   285,   137,   286,   284,    65,
     267,    65,   166,   166,   140,   159,   162,    66,   274,   274,
      66,    66,   256,    90,   238,   339,   339,   339,   237,   237,
      66,    70,   281,    66,   237,   237,   334,   274,   277,   278,
     166,   273,   236,    66,   313,   334,   337,   236,   334,   237,
     322,   322,   322,   323,   323,   324,   324,   325,   325,   325,
     325,   326,   326,   327,   328,   329,   330,   331,    88,   337,
     334,    65,    76,   251,   257,   273,   251,   257,   273,    65,
      76,   257,   273,   257,   273,    67,   265,    67,   272,    73,
      66,    67,    65,   345,    88,    89,   213,   216,   248,    89,
     214,   216,   257,    71,    67,    89,    67,    89,   195,   197,
     209,   338,    71,    71,    67,    71,    71,   204,   206,   209,
      67,    89,    71,     7,    10,    11,    17,    23,    24,    27,
      28,    31,    32,    34,    35,    42,   111,   143,   148,   149,
     150,   163,   164,   165,   166,   236,   279,   280,   281,   287,
     289,   290,   291,   292,   293,   294,   295,   296,   336,   337,
     350,   359,    65,   139,   349,   349,    66,    35,    70,    72,
      74,   239,   240,   243,   244,   245,   246,   247,   334,   238,
     238,   238,    66,    66,    70,   322,   282,   304,    67,    67,
      67,    66,    66,    66,   273,    66,    67,    73,    66,   333,
      88,   166,   229,   228,   232,   231,   166,   230,   233,    54,
     225,    66,   235,    66,    66,   346,    66,   313,   338,   339,
     215,   216,   339,   215,   214,   213,    71,    71,   199,    71,
      71,    71,   208,    35,    89,    65,   338,   336,    89,    65,
      88,    76,   236,   279,    65,    65,   144,   146,   257,   269,
     257,   269,   257,   269,   257,   269,    88,    89,    28,    65,
     168,    71,   339,   339,    88,   242,   338,    35,    42,   240,
      72,    90,   245,   241,   242,   286,    66,   305,   237,   237,
     274,   334,   333,   339,   339,   339,   339,   339,   339,   345,
      66,   339,   339,    71,    71,   337,    54,    88,    89,   336,
     279,   337,    89,    34,   337,   337,    70,   288,   339,    65,
     298,   351,    65,   238,   238,    71,   239,    54,    73,   338,
      71,   239,    71,    66,    66,    66,    66,   338,   279,    89,
      89,    65,    66,    66,   282,    70,   279,   298,   357,    88,
      66,   351,    67,    71,   338,    54,    73,   279,    88,   336,
     337,   279,   279,   286,   282,    88,    66,    72,   298,   352,
     353,   354,    89,    66,    73,   338,   279,    89,    66,     8,
     145,   286,   352,    89,   346,    65,    88,    67,    89,    73,
     336,    89,   279,    71,   147,    88,    73,   337,   352,   354,
      66,    71,   352,   298,    66,    88,   279,    88,    65,   298,
     356,   355,   356,   337,    67,    88,    66,   298,   235,   358,
      67,   235
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   129,   130,   131,   131,   132,   132,   132,   132,   133,
     134,   134,   136,   137,   135,   138,   139,   135,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   144,   145,   143,   146,   147,   143,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   149,   150,   150,   152,   151,   153,   151,   154,   151,
     155,   151,   157,   156,   158,   156,   159,   156,   160,   161,
     160,   162,   160,   163,   163,   163,   163,   163,   164,   164,
     164,   164,   164,   165,   165,   165,   166,   166,   167,   167,
     168,   168,   168,   168,   168,   169,   169,   169,   170,   170,
     170,   171,   171,   171,   172,   172,   172,   173,   173,   173,
     173,   174,   174,   174,   174,   175,   175,   175,   176,   176,
     176,   177,   177,   177,   178,   178,   178,   179,   179,   179,
     179,   180,   180,   180,   180,   181,   181,   182,   182,   182,
     183,   183,   183,   183,   184,   184,   184,   184,   185,   186,
     186,   186,   186,   186,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   189,
     189,   190,   190,   190,   192,   193,   191,   194,   195,   191,
     191,   196,   197,   191,   198,   199,   191,   191,   201,   202,
     200,   203,   204,   200,   200,   205,   206,   200,   207,   208,
     200,   200,   209,   209,   210,   210,   210,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     218,   218,   220,   219,   221,   219,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     226,   226,   228,   227,   229,   227,   230,   227,   231,   227,
     232,   227,   233,   227,   234,   234,   235,   236,   236,   237,
     237,   237,   237,   238,   238,   239,   239,   240,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   244,   244,   245,
     245,   245,   245,   246,   246,   247,   248,   248,   249,   250,
     250,   251,   251,   251,   252,   252,   252,   253,   253,   254,
     254,   254,   254,   254,   255,   255,   255,   256,   256,   257,
     258,   258,   259,   259,   259,   260,   260,   260,   260,   261,
     262,   264,   265,   263,   266,   267,   267,   268,   269,   269,
     269,   271,   272,   270,   270,   270,   273,   273,   273,   274,
     274,   275,   275,   276,   276,   276,   277,   277,   277,   277,
     278,   278,   278,   278,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   280,   281,   282,   282,   283,   283,
     284,   285,   285,   286,   286,   287,   287,   287,   288,   288,
     289,   290,   290,   290,   291,   291,   291,   292,   292,   292,
     292,   293,   293,   294,   295,   296,   297,   297,   297,   297,
     297,   298,   298,   299,   299,   299,   299,   299,   299,   300,
     301,   303,   304,   302,   305,   305,   305,   305,   305,   305,
     305,   305,   306,   307,   307,   308,   309,   310,   311,   312,
     313,   313,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   316,   317,   318,   318,   319,   319,
     320,   321,   321,   321,   321,   321,   321,   322,   322,   323,
     323,   323,   323,   324,   324,   324,   325,   325,   325,   326,
     326,   326,   326,   326,   327,   327,   327,   328,   328,   329,
     329,   330,   330,   331,   331,   332,   332,   333,   333,   333,
     334,   334,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   336,   336,   337,   337,   338,   339,   339,
     340,   340,   341,   342,   342,   343,   343,   344,   344,   345,
     345,   345,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   347,   348,
     349,   349,   350,   350,   350,   351,   351,   351,   351,   352,
     352,   353,   353,   354,   354,   355,   355,   356,   356,   357,
     358,   358,   359,   359,   359
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     6,     0,     0,     7,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     0,     0,     7,     0,     0,     8,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     6,     0,     6,     0,     8,     5,     0,
       6,     0,     8,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     4,     4,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     6,     0,     0,     7,
       2,     0,     0,     7,     0,     0,     8,     3,     0,     0,
       6,     0,     0,     7,     2,     0,     0,     7,     0,     0,
       8,     3,     0,     2,     2,     2,     2,     2,     1,     3,
       4,     3,     4,     2,     1,     2,     1,     0,     1,     2,
       4,     5,     2,     5,     6,     5,     6,     3,     6,     7,
       1,     3,     0,     3,     0,     3,     0,     2,     1,     3,
       1,     3,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     1,     3,     1,     1,     1,     1,
       2,     1,     2,     0,     2,     1,     2,     3,     4,     1,
       1,     2,     0,     3,     2,     1,     1,     1,     2,     3,
       5,     2,     2,     3,     5,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     3,     3,     4,     1,
       4,     5,     2,     3,     3,     4,     4,     1,     3,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     4,     3,
       2,     0,     0,     5,     2,     1,     3,     1,     1,     2,
       3,     0,     0,     6,     3,     4,     1,     1,     1,     1,
       1,     0,     1,     2,     3,     4,     1,     2,     2,     3,
       3,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     6,     3,     4,     0,     1,     1,     2,
       3,     1,     3,     0,     2,     1,     1,     1,     1,     2,
       2,     5,     7,     5,     5,     7,     9,     1,     1,     1,
       1,     3,     4,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       6,     0,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     3,     2,     2,     6,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     6,     6,     2,     4,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     0,     1,
       1,     2,     6,     1,     1,     0,     1,     2,     4,     0,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       0,     1,     5,     6,     6,     7,     5,     3,     1,     0,
       1,     1,     3,     4,     7,     0,     1,     1,     3,     9,
       1,     3,     1,     1,     1
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
#line 268 "c.y" /* yacc.c:1646  */
    {
          try {
            OutputStreamWriter writer = new OutputStreamWriter(System.out);

            // writing initial transformation code
            writer.write("#include <stdbool.h>\n");
            writer.write("#include \"desugared_macros.h\" // configuration macros converted to C variables\n");

            // writing file-dependent transformation code
            writer.write(getStringBuilderAt(subparser, 1).toString());
            writer.flush();
          }
          catch(Exception IOException) {
            System.err.println("ERROR: unable to write output");
            System.exit(1);
          }
        }
#line 2982 "c.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 292 "c.y" /* yacc.c:1646  */
    {
          StringBuilder sb = new StringBuilder();
          for (int i = 1; i <= 2; i++)
            sb.append(getStringBuilderAt(subparser, i));
          setStringBuilder(value, sb);
        }
#line 2993 "c.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 303 "c.y" /* yacc.c:1646  */
    {
          StringBuilder sb = new StringBuilder();
          for (int i = 1; i <= 2; i++)
            sb.append(getStringBuilderAt(subparser, i));
          setStringBuilder(value, sb);
        }
#line 3004 "c.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 310 "c.y" /* yacc.c:1646  */
    {
          StringBuilder sb = new StringBuilder();
          for (int i = 1; i <= 2; i++)
            sb.append(getStringBuilderAt(subparser, i));
          setStringBuilder(value, sb);
        }
#line 3015 "c.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 317 "c.y" /* yacc.c:1646  */
    {
          StringBuilder sb = new StringBuilder();
          for (int i = 1; i <= 2; i++)
            sb.append(getStringBuilderAt(subparser, i));
          setStringBuilder(value, sb);
        }
#line 3026 "c.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 332 "c.y" /* yacc.c:1646  */
    {
          StringBuilder sb = new StringBuilder();
          for (int i = 1; i <= 2; i++)
            sb.append(getStringBuilderAt(subparser, i));
          setStringBuilder(value, sb);
        }
#line 3037 "c.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 341 "c.y" /* yacc.c:1646  */
    { ReenterScope(subparser); }
#line 3043 "c.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 341 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 3049 "c.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 343 "c.y" /* yacc.c:1646  */
    {
          ReenterScope(subparser);
          {
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i <= 2; i++)
              sb.append(getStringBuilderAt(subparser, i));
            setStringBuilder(value, sb);
          }
        }
#line 3063 "c.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 352 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 3069 "c.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 366 "c.y" /* yacc.c:1646  */
    { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3075 "c.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 368 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3084 "c.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 373 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3093 "c.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 378 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3102 "c.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 383 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3111 "c.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 388 "c.y" /* yacc.c:1646  */
    { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3117 "c.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 390 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3126 "c.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 395 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3135 "c.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 400 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3144 "c.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 405 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3153 "c.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 412 "c.y" /* yacc.c:1646  */
    { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3159 "c.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 414 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3168 "c.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 419 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3177 "c.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 424 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3186 "c.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 429 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3195 "c.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 439 "c.y" /* yacc.c:1646  */
    { ReenterScope(subparser); }
#line 3201 "c.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 439 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 3207 "c.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "c.y" /* yacc.c:1646  */
    { ReenterScope(subparser); }
#line 3213 "c.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 440 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 3219 "c.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 445 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3228 "c.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 450 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3237 "c.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 455 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3246 "c.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 460 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3255 "c.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 466 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3264 "c.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 471 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3273 "c.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 476 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3282 "c.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 481 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3291 "c.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 489 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3300 "c.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 494 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3309 "c.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 499 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3318 "c.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 504 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3327 "c.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 541 "c.y" /* yacc.c:1646  */
    { KillReentrantScope(subparser); }
#line 3333 "c.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 542 "c.y" /* yacc.c:1646  */
    { KillReentrantScope(subparser); }
#line 3339 "c.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 543 "c.y" /* yacc.c:1646  */
    { KillReentrantScope(subparser); }
#line 3345 "c.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 544 "c.y" /* yacc.c:1646  */
    { KillReentrantScope(subparser); }
#line 3351 "c.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 552 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3360 "c.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 557 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3369 "c.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 562 "c.y" /* yacc.c:1646  */
    {
          // reuses saved base type
          bindIdent(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 1));
        }
#line 3378 "c.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 570 "c.y" /* yacc.c:1646  */
    {
      	  TypeBuilder type = getTypeBuilderAt(subparser, 5);
      	  DeclBuilder decl = getDeclBuilderAt(subparser, 4);
      	  addMapping(subparser, type, decl);
      	  saveBaseType(subparser, getNodeAt(subparser, 5));
          bindIdent(subparser, getNodeAt(subparser, 5), getNodeAt(subparser, 4));
        }
#line 3390 "c.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 578 "c.y" /* yacc.c:1646  */
    {
      	  DeclBuilder decl = getDeclBuilderAt(subparser, 1);
      	  TypeBuilder type = getTypeBuilderAt(subparser, 2);
      	  addMapping(subparser, type, decl);

          // stores the written variable renaming declarations
          System.out.println(genRenamingDecls(subparser, decl, type.toType()));
          // TODO: store this written code here
          //setStringBuilder(value, genRenamingDecls(subparser, decl, type.toType()));


      	  saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3409 "c.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 593 "c.y" /* yacc.c:1646  */
    {
          // reuses saved base type
	        bindIdent(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 1));
        }
#line 3418 "c.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 601 "c.y" /* yacc.c:1646  */
    {
	  			TypeBuilder decl = getTypeBuilderAt(subparser, 1);
	  			setTypeBuilder(value, decl);
				}
#line 3427 "c.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 606 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3436 "c.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 611 "c.y" /* yacc.c:1646  */
    {
	 				TypeBuilder decl = getTypeBuilderAt(subparser, 1);
	  			setTypeBuilder(value, decl);
				}
#line 3445 "c.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 616 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3454 "c.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 621 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3463 "c.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 629 "c.y" /* yacc.c:1646  */
    {
					setTypeBuilder(value,getTypeBuilderAt(subparser,1));
				}
#line 3471 "c.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 633 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3480 "c.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 638 "c.y" /* yacc.c:1646  */
    {
					setTypeBuilder(value,getTypeBuilderAt(subparser,1));
				}
#line 3488 "c.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 642 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3497 "c.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 647 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 3506 "c.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 655 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder storage = getTypeBuilderAt(subparser,1);
	  setTypeBuilder(value, storage);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3518 "c.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 663 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder qualList = getTypeBuilderAt(subparser, 2);
	  TypeBuilder storage = getTypeBuilderAt(subparser, 1);
	  TypeBuilder tb = qualList.combine(storage);
	  setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3533 "c.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 674 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder qualList = getTypeBuilderAt(subparser, 2);
	  TypeBuilder qual = getTypeBuilderAt(subparser, 1);
	  TypeBuilder tb = qualList.combine(qual);
	  setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3548 "c.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 688 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder qual = getTypeBuilderAt(subparser, 1);
	  setTypeBuilder(value, qual);
	   updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3560 "c.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 696 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder qualList = getTypeBuilderAt(subparser, 2);
	    TypeBuilder qual = getTypeBuilderAt(subparser, 1);
	    TypeBuilder tb = qualList.combine(qual);
	    setTypeBuilder(value, tb);
	    updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3575 "c.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 710 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder qual = getTypeBuilderAt(subparser, 1);
  setTypeBuilder(value, qual);

}
#line 3585 "c.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 716 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder storage = getTypeBuilderAt(subparser, 1);
  setTypeBuilder(value, storage);

}
#line 3595 "c.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 725 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder qual = new TypeBuilder("const");
  setTypeBuilder(value, qual);
  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
}
#line 3607 "c.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 733 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder qual = new TypeBuilder("volatile");
  setTypeBuilder(value, qual);
  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
}
#line 3619 "c.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 741 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder qual = new TypeBuilder("restrict");
	  setTypeBuilder(value, qual);
updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
}
#line 3631 "c.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 749 "c.y" /* yacc.c:1646  */
    {
  System.err.println("Unsupported grammar"); // TODO
  System.exit(1);
  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
}
#line 3643 "c.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 757 "c.y" /* yacc.c:1646  */
    {
  TypeBuilder qual = new TypeBuilder("inline");
  setTypeBuilder(value, qual);
  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
}
#line 3655 "c.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 791 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder basicTypeSpecifier = getTypeBuilderAt(subparser, 2);
          TypeBuilder storageClass = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = basicTypeSpecifier.combine(storageClass);

          setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3673 "c.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 804 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder qualList = getTypeBuilderAt(subparser, 2);
          TypeBuilder basicTypeName = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = qualList.combine(basicTypeName);

	  setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3691 "c.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 818 "c.y" /* yacc.c:1646  */
    {
 	  TypeBuilder decl = getTypeBuilderAt(subparser, 2);
          TypeBuilder qual = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = decl.combine(qual);

	  setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3709 "c.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 831 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder basicDeclSpecifier = getTypeBuilderAt(subparser, 2);
          TypeBuilder basicTypeName = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = basicDeclSpecifier.combine(basicTypeName);

	  setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
	}
#line 3727 "c.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 848 "c.y" /* yacc.c:1646  */
    {
          // TUTORIAL: a semantic action that sets the semantic value
          // to a new typebuilder by adding a property derived from
          // the child semantic value(s)
          TypeBuilder tb = getTypeBuilderAt(subparser, 1);
          setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3742 "c.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 859 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder qualList = getTypeBuilderAt(subparser, 2);
          TypeBuilder basicTypeName = getTypeBuilderAt(subparser, 1);

          TypeBuilder tb = qualList.combine(basicTypeName);

          setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3759 "c.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 872 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder basicTypeSpecifier = getTypeBuilderAt(subparser, 2);
          TypeBuilder qual = getTypeBuilderAt(subparser, 1);

          TypeBuilder tb = basicTypeSpecifier.combine(qual);

          setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3776 "c.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 885 "c.y" /* yacc.c:1646  */
    {
          // get the semantic values of each child
          TypeBuilder basicTypeSpecifier = getTypeBuilderAt(subparser, 2);
          TypeBuilder basicTypeName = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = basicTypeSpecifier.combine(basicTypeName);

          setTypeBuilder(value, tb);
	  updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3795 "c.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 916 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb = getTypeBuilderAt(subparser, 2);
          TypeBuilder tb1 = getTypeBuilderAt(subparser, 1);
          setTypeBuilder(value, tb.combine(tb1));
				}
#line 3805 "c.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 922 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb = getTypeBuilderAt(subparser, 2);
          TypeBuilder tb1 = new TypeBuilder();
					tb1.setTypedef(getStringAt(subparser, 1));
          setTypeBuilder(value, tb.combine(tb1));
				}
#line 3816 "c.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 929 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb1 = getTypeBuilderAt(subparser, 2);
					TypeBuilder dq = getTypeBuilderAt(subparser,1);
					TypeBuilder tb = tb1.combine(dq);
          setTypeBuilder(value, tb);
				}
#line 3827 "c.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 939 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb1 = new TypeBuilder();
					tb1.setTypedef(getStringAt(subparser, 1));
          setTypeBuilder(value, tb1);
				}
#line 3837 "c.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 945 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb = getTypeBuilderAt(subparser, 2);
          TypeBuilder tb1 = new TypeBuilder();
					tb1.setTypedef(getStringAt(subparser, 1));
          setTypeBuilder(value, tb.combine(tb1));
				}
#line 3848 "c.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 952 "c.y" /* yacc.c:1646  */
    {
					TypeBuilder tb = getTypeBuilderAt(subparser, 2);
          TypeBuilder tb1 = getTypeBuilderAt(subparser, 1);
          setTypeBuilder(value, tb.combine(tb1));
				}
#line 3858 "c.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 985 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3869 "c.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 991 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3880 "c.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 997 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3891 "c.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1003 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3902 "c.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1012 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3912 "c.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1017 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3923 "c.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1023 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3934 "c.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1029 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3945 "c.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1038 "c.y" /* yacc.c:1646  */
    { getSpecsAt(subparser, 1).type = InternalT.VA_LIST; }
#line 3951 "c.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1043 "c.y" /* yacc.c:1646  */
    {
	    TypeBuilder storage = new TypeBuilder("typedef");
	    setTypeBuilder(value, storage);
	    getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_TYPEDEF;
	  }
#line 3961 "c.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1049 "c.y" /* yacc.c:1646  */
    {
	      TypeBuilder storage = new TypeBuilder("extern");
	      setTypeBuilder(value, storage);
	      getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_EXTERN;
	    }
#line 3971 "c.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1055 "c.y" /* yacc.c:1646  */
    {
	      TypeBuilder storage = new TypeBuilder("static");
	      setTypeBuilder(value, storage);
	      getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_STATIC;
	    }
#line 3981 "c.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1061 "c.y" /* yacc.c:1646  */
    {
	      TypeBuilder storage = new TypeBuilder("auto");
	      setTypeBuilder(value, storage);
	      getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_AUTO;
	    }
#line 3991 "c.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1067 "c.y" /* yacc.c:1646  */
    {
	      TypeBuilder storage = new TypeBuilder("register");
	      setTypeBuilder(value, storage);
	      getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_REGISTER;
	    }
#line 4001 "c.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1076 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(VoidT.TYPE);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).type = VoidT.TYPE;
        }
#line 4011 "c.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1082 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(NumberT.CHAR);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenChar = true;
        }
#line 4021 "c.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1088 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(NumberT.SHORT);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenShort = true;
        }
#line 4031 "c.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1094 "c.y" /* yacc.c:1646  */
    {

          // See xtc.type.* for the class hiearchy for types
          TypeBuilder tb = new TypeBuilder(NumberT.INT);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenInt = true;
        }
#line 4043 "c.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1102 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(NumberT.__INT128);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenInt = true;
        }
#line 4053 "c.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1108 "c.y" /* yacc.c:1646  */
    {
          // See xtc.type.* for the class hiearchy for types
          TypeBuilder tb = new TypeBuilder(NumberT.LONG);
	  setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).longCount++;
        }
#line 4064 "c.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1115 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(NumberT.FLOAT);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenFloat = true;
        }
#line 4074 "c.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1121 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(NumberT.DOUBLE);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenDouble = true;
        }
#line 4084 "c.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1127 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder("signed");
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenSigned = true;
        }
#line 4094 "c.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1133 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder("unsigned");
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenUnsigned = true;
        }
#line 4104 "c.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1139 "c.y" /* yacc.c:1646  */
    {
          TypeBuilder tb = new TypeBuilder(BooleanT.TYPE);
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenBool = true;
        }
#line 4114 "c.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1145 "c.y" /* yacc.c:1646  */
    {
	  TypeBuilder tb = new TypeBuilder("complex");
          setTypeBuilder(value, tb);
	  getSpecsAt(subparser, 1).seenComplex = true;
        }
#line 4124 "c.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1170 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4130 "c.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1171 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4136 "c.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1173 "c.y" /* yacc.c:1646  */
    {
          Node tag     = null;
          Node members = getNodeAt(subparser, 3);
          Node attrs   = null;
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 4149 "c.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1181 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4155 "c.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1182 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4161 "c.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1184 "c.y" /* yacc.c:1646  */
    {
          Node tag     = getNodeAt(subparser, 6);
          Node members = getNodeAt(subparser, 3);
          Node attrs   = null;
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 4174 "c.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1193 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4180 "c.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1194 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4186 "c.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1196 "c.y" /* yacc.c:1646  */
    {
          Node tag     = null;
          Node members = getNodeAt(subparser, 3);
          Node attrs   = getNodeAt(subparser, 6);
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 4199 "c.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1204 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4205 "c.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1205 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4211 "c.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1207 "c.y" /* yacc.c:1646  */
    {
          Node tag     = getNodeAt(subparser, 6);
          Node members = getNodeAt(subparser, 3);
          Node attrs   = getNodeAt(subparser, 7);
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 4224 "c.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1219 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4230 "c.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1220 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4236 "c.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1222 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4242 "c.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1223 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4248 "c.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1226 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4254 "c.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1227 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4260 "c.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1229 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4266 "c.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1230 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4272 "c.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1241 "c.y" /* yacc.c:1646  */
    {
          ((Node) value).setProperty(SPECS, new Specifiers());
        }
#line 4280 "c.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1244 "c.y" /* yacc.c:1646  */
    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 4291 "c.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1314 "c.y" /* yacc.c:1646  */
    { BindEnum(subparser); }
#line 4297 "c.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1315 "c.y" /* yacc.c:1646  */
    { BindEnum(subparser); }
#line 4303 "c.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1392 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4312 "c.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1397 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4321 "c.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1402 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4330 "c.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1407 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4339 "c.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1412 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4348 "c.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1417 "c.y" /* yacc.c:1646  */
    {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4357 "c.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1433 "c.y" /* yacc.c:1646  */
    { BindVar(subparser); }
#line 4363 "c.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1507 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4372 "c.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1512 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4381 "c.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1520 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4390 "c.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1528 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4399 "c.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1533 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4408 "c.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1541 "c.y" /* yacc.c:1646  */
    {
          setDeclBuilder(value, new DeclBuilder(getStringAt(subparser, 1)));
        }
#line 4416 "c.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1545 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder name = new DeclBuilder(getStringAt(subparser, 2));
	  DeclBuilder post = getDeclBuilderAt(subparser,1);
	  name.merge(post);
          setDeclBuilder(value, name);
        }
#line 4427 "c.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1552 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4436 "c.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1563 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4445 "c.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1568 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  db.addPointer();
	  setDeclBuilder(value, db);
	}
#line 4455 "c.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1574 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 4464 "c.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1582 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addDeclBuilder(getDeclBuilderAt(subparser,2));
	  setDeclBuilder(value, db);
	}
#line 4474 "c.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1588 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addDeclBuilder(getDeclBuilderAt(subparser,3));
	  db.merge(getDeclBuilderAt(subparser,1));
	  setDeclBuilder(value, db);
	}
#line 4485 "c.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1601 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4494 "c.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1606 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addDeclBuilder(getDeclBuilderAt(subparser,2));
	  db.addPointer();
	  setDeclBuilder(value, db);
	}
#line 4505 "c.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1615 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  db.addPointer();
	  setDeclBuilder(value, db);
	}
#line 4515 "c.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1621 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 4524 "c.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1629 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addDeclBuilder(getDeclBuilderAt(subparser,2));
	  setDeclBuilder(value, db);
	}
#line 4534 "c.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1635 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  DeclBuilder base = getDeclBuilderAt(subparser,3);
	  base.merge(getDeclBuilderAt(subparser,2));
	  db.addDeclBuilder(base);
	  setDeclBuilder(value, db);
	}
#line 4546 "c.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1643 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  DeclBuilder base = getDeclBuilderAt(subparser,3);
	  db.addDeclBuilder(base);
	  db.merge(getDeclBuilderAt(subparser,1));
	  setDeclBuilder(value, db);
	}
#line 4558 "c.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1654 "c.y" /* yacc.c:1646  */
    {
	  setDeclBuilder(value, new DeclBuilder(getStringAt(subparser, 1)));
	}
#line 4566 "c.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1658 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  DeclBuilder base = getDeclBuilderAt(subparser,2);
	  db.addDeclBuilder(base);
	  setDeclBuilder(value, db);
	}
#line 4577 "c.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1668 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4586 "c.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1676 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4595 "c.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1681 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4604 "c.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1689 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4613 "c.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1694 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  db.addPointer();
	  setDeclBuilder(value, db);
	}
#line 4623 "c.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1700 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					System.exit(1);
				}
#line 4632 "c.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1708 "c.y" /* yacc.c:1646  */
    {
					System.err.println("Unsupported grammar"); // TODO
					//					System.exit(1);
				}
#line 4641 "c.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1713 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4650 "c.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1718 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4659 "c.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1723 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder base = new DeclBuilder();
	  base.addDeclBuilder(getDeclBuilderAt(subparser,3));
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  base.merge(db);
	  setDeclBuilder(value,base);
	}
#line 4671 "c.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1734 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addDeclBuilder(getDeclBuilderAt(subparser,2));
	  setDeclBuilder(value, db);
	}
#line 4681 "c.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1746 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4687 "c.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1746 "c.y" /* yacc.c:1646  */
    { ExitReentrantScope(subparser); }
#line 4693 "c.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1751 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder base = getDeclBuilderAt(subparser,2);
	  DeclBuilder array = getDeclBuilderAt(subparser,1);
	  base.merge(array);
	  setDeclBuilder(value,base);
	}
#line 4704 "c.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1761 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value, db);
	}
#line 4713 "c.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1766 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,2);
	  DeclBuilder superDecl = new DeclBuilder();
	  superDecl.addDeclBuilder(db);
	  setDeclBuilder(value,superDecl);
	}
#line 4724 "c.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1776 "c.y" /* yacc.c:1646  */
    {
          setDeclBuilder(value, new DeclBuilder(getStringAt(subparser, 1)));
        }
#line 4732 "c.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1788 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4738 "c.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1788 "c.y" /* yacc.c:1646  */
    { ExitReentrantScope(subparser); }
#line 4744 "c.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1801 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,1);
	  setDeclBuilder(value,db);
	}
#line 4753 "c.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1816 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addArray("",false);
          setDeclBuilder(value, db);
        }
#line 4763 "c.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1822 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = new DeclBuilder();
	  db.addArray("const Expr");
          setDeclBuilder(value, db);
	}
#line 4773 "c.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1828 "c.y" /* yacc.c:1646  */
    {
	  DeclBuilder db = getDeclBuilderAt(subparser,4);
	  db.addArray("const Expr");
          setDeclBuilder(value, db);
	}
#line 4783 "c.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1991 "c.y" /* yacc.c:1646  */
    { useIdent(subparser, getNodeAt(subparser, 1)); }
#line 4789 "c.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1999 "c.y" /* yacc.c:1646  */
    { EnterScope(subparser); }
#line 4795 "c.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1999 "c.y" /* yacc.c:1646  */
    { ExitScope(subparser); }
#line 4801 "c.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2018 "c.y" /* yacc.c:1646  */
    { callFunction(subparser, getNodeAt(subparser, 3), null); }
#line 4807 "c.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2019 "c.y" /* yacc.c:1646  */
    { callFunction(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 2)); }
#line 4813 "c.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2230 "c.y" /* yacc.c:1646  */
    {
	  System.out.println("attributeList");
	}
#line 4821 "c.tab.c" /* yacc.c:1646  */
    break;


#line 4825 "c.tab.c" /* yacc.c:1646  */
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
#line 2380 "c.y" /* yacc.c:1906  */


// TUTORIAL: this section of the grammar gets copied into the
// resulting parser, specifically the CActions.java class

/**
   This is just a constant string name for a property used to assign
   semantic values that are type builders.
 */
private static final String TYPEBUILDER = "xtc.lang.cpp.TypeBuilder";

// TUTORIAL: this function just annotates a semantic value with a typebuilder
private void setTypeBuilder(Object value, TypeBuilder tb) {
  // value should be not null and should be a Node type
  setTypeBuilder((Node) value, tb);
}

// TUTORIAL: these functions retrieve a type builder from the semantic value
private void setTypeBuilder(Node value, TypeBuilder tb) {
  // value should be not null and should be a Node type
  value.setProperty(TYPEBUILDER, tb);
}

private TypeBuilder getTypeBuilderAt(Subparser subparser, int component) {
  // value should be not null and should be a Node type
  return (TypeBuilder) getNodeAt(subparser, component).getProperty(TYPEBUILDER);
}

private static final String DECLBUILDER = "xtc.lang.cpp.DeclBuilder";
private static final String STRING = "xtc.String";
private static final String STRINGBUILDER = "xtc.StringBuilder";


// TUTORIAL: this function just annotates a semantic value with a typebuilder
private void setDeclBuilder(Object value, DeclBuilder db) {
  // value should be not null and should be a Node type
  setDeclBuilder((Node) value, db);
}

// TUTORIAL: these functions retrieve a type builder from the semantic value
private void setDeclBuilder(Node value, DeclBuilder db) {
  // value should be not null and should be a Node type
  value.setProperty(DECLBUILDER, db);
}

private DeclBuilder getDeclBuilderAt(Subparser subparser, int component) {
  // value should be not null and should be a Node type
  return (DeclBuilder) getNodeAt(subparser, component).getProperty(DECLBUILDER);
}

private void setStringBuilder(Object value, StringBuilder sb) {
  // value should be not null and should be a Node type
  setStringBuilder((Node) value, sb);
}

private void setStringBuilder(Node value, StringBuilder sb) {
  // value should be not null and should be a Node type
  value.setProperty(STRINGBUILDER, sb);
}

private StringBuilder getStringBuilderAt(Subparser subparser, int component) {
  return (StringBuilder) getNodeAt(subparser, component).getProperty(STRINGBUILDER);
}



/** True when statistics should be output. */
private boolean languageStatistics = false;

/** Turn on error reporting. */
private static boolean showErrors = false;

/** Turn on debugging messages. */
private static boolean debug = false;

/** Turn on checkers. */
private static boolean enableCheckers = false;

/** Turn on checkers. */
private static List<String> extraConstraints = null;

/** Turn on function analysis. */
private static boolean enableFunctionAnalysis = false;

/** A symbol table for analysis. */
private CContext.SymbolTable functionTable;

/** Turn on kconfig feature model clauses. */
private boolean hasClauses = false;

/** The clauses for the kconfig feature model. */
private Clauses featureClauses = null;

/** The kconfig feature model solver. */
private ISolver featureSolver;

/** The assumptions of the feature model, i.e., non-arch config vars. */
private VecInt modelAssumptions;

/**
 * Turn language statistics collection on.  Default is off.
 *
 * @param b True is on.
 */
public void collectStatistics(boolean b) {
  languageStatistics = b;
}

/**
 * Show errors.
 *
 * @param b True is on.
 */
public void showErrors(boolean b) {
  showErrors = b;
}

/**
 * Show debugging messages.
 *
 * @param b True is on.
 */
public void debug(boolean b) {
  debug = b;
}

/**
 * Enable checkers.
 *
 * @param b Enable checkers if true.
 */
public void enableCheckers(boolean b) {
  this.enableCheckers(b, null);
}

/**
 * Enable checkers.
 *
 * @param b Enable checkers if true.
 * @param extraConstraints Extra constraints to SAT solver.
 */
public void enableCheckers(boolean b, List<String> extraConstraints) {
  this.enableCheckers = b;
  if (null == extraConstraints) {
    // avoid having to check for null
    extraConstraints = new ArrayList<String>();
  }
  this.extraConstraints = extraConstraints;
}

/**
 * Enable function analysis.
 */
public void enableFunctionAnalysis() {
  this.enableFunctionAnalysis = true;
  this.functionTable = new CContext.SymbolTable();
}

/**
 * Add kconfig feature model clauses.
 *
 * @param clauses The clauses.
 */
public void addClauses(Clauses clauses, int[] assumptions) {
  if (null != assumptions) {
    this.modelAssumptions = new VecInt(assumptions);
  } else {
    this.modelAssumptions = new VecInt(new int[0]);
  }

  if (null != clauses) {
    this.hasClauses = true;
    this.featureClauses = clauses;
    this.featureSolver = SolverFactory.newDefault();
    this.featureSolver.newVar(clauses.getNumVars());
    this.featureSolver.setExpectedNumberOfClauses(clauses.size());

    try {
      for (List<Integer> clause : clauses) {
        int[] cint = new int[clause.size()];
        int i = 0;
        for (Integer val : clause) {
          cint[i++] = val;
        }
        this.featureSolver.addClause(new VecInt(cint));
      }
    } catch (ContradictionException e) {
      e.printStackTrace();
      System.exit(1);
    }
  } else {
    this.hasClauses = false;
    this.featureClauses = null;
  }
}

/**
 * Get the checker symbol table.
 *
 * @return The checker symbol table.
 */
public CContext.SymbolTable getFunctionTable() {
  return this.functionTable;
}

/**
 * A helper function to get the value of a node on the stack, which
 * corresponds to the value of the component of a production.  Unlike
 * bison, this is numbered by the stack, i.e., the closest component
 * to the action has the lowest number, starting with 1.
 *
 * @param subparser The reference to the subparser.
 * @param number The component number, where 1 is the component to the
 * left of the action, and increasing in number while going towards
 * the beginning of the production.
 * @return The node value of the component.
 */
private static Node getNodeAt(Subparser subparser, int component) {
  return (Node) (subparser.stack.get(component).value);
}

private static String getStringAt(Subparser subparser, int component) {
  return ((Syntax) getNodeAt(subparser, component)).toLanguage().getTokenText();
}

private static void setString(Object value, String s) {
  ((Node) value).setProperty(STRING, s);
}

private String getStringAtNode(Subparser subparser, int component) {
  // value should be not null and should be a Node type
  return (String) getNodeAt(subparser, component).getProperty(STRING);
}

/**
 * A helper function to set the type property of the given node.  The
 * given value will be first cast to a Node.
 *
 * @param value A node object.
 * @param type The type to set.
 */
private static void setType(Object value, Type type) {
  ((Node) value).setProperty(Constants.TYPE, type);
}

private static void error(String msg) {
  if (showErrors) {
    System.err.println("error: " + msg);
  }
  /* System.exit(1); */
}

// ---------- Parsing-only context

/**
 * Compute and store the base type indicated by the specifications
 * property of the given node.
 */
public void saveBaseType(Subparser subparser, Node typespec) {
  if (typespec.getProperty(SPECS) == null) {
    if (showErrors) {
      System.err.println("error: no specs available");
    }
    return;
  }
  ((CContext) subparser.scope).lastSeenType =
    ((Specifiers) typespec.getProperty(SPECS)).getType();
}

/**
 * Return the last seen type.
 */
public Type lastSeenType(Subparser subparser) {
  return ((CContext) subparser.scope).lastSeenType;
}

private static class Binding {
  public Language ident;
  public Type type;

  public Binding(Language ident, Type type) {
    this.ident = ident;
    this.type = type;
  }
}

private boolean findToken(Object n, CTag tag) {
  if (n instanceof Language && ((Language) n).tag() == tag) {
    return true;
  } else if (n instanceof Syntax) {
    return ((Syntax) n).getTokenText().equals(tag.getText());
  } else if (n instanceof Node) {
    boolean b = false;
    for (Object o : ((Node) n)) {
      b |= findToken(o, tag);
      if (b) return true;
    }
    return false;
  } else if (n instanceof PresenceCondition) {
    // ignore
    return false;
  } else {
    System.err.println(n.getClass().getSimpleName());
    return false;
  }
}

public void bindFunDef(Subparser subparser, Node typespec, Node declarator) {
  boolean static_function;

  if (getident(declarator).equals("ERR_PTR")) {
    System.err.println(typespec);
    System.err.println(declarator);
  }

  if (null == typespec) {
    // only static with static keyword
    static_function = false;
  } else if (typespec.getName().equals("DeclarationSpecifier") ||
             typespec.getName().equals("DeclarationQualifierList")) {
    // the declaration keyword can only appear in these kinds of
    // specifiers
    if (typespec.getProperty(SPECS) != null) {
      static_function = ((Specifiers) typespec.getProperty(SPECS)).storage ==
        Constants.ATT_STORAGE_STATIC;
    } else {
      // traverse subtree looking for static until checkers are finished
      static_function = findToken(typespec, CTag.STATIC);
    }
  } else {
    // the declaration keyword can only appear in these kinds of
    // specifiers
    if (typespec.getProperty(SPECS) != null) {
      static_function = ((Specifiers) typespec.getProperty(SPECS)).storage ==
        Constants.ATT_STORAGE_STATIC;
    } else {
      // traverse subtree looking for static until checkers are finished
      static_function = findToken(typespec, CTag.STATIC);
    }
  }

  if (static_function) {
    bindIdent(subparser, typespec, declarator, STField.STATIC_FUNDEF);
  } else {
    bindIdent(subparser, typespec, declarator, STField.GLOBAL_FUNDEF);
  }
}

public void bindIdent(Subparser subparser, Node typespec, Node declarator) {
  bindIdent(subparser, typespec, declarator, null);
}

/** typespec might be null for declarations and definitions without a
 * type spec; alsoSet is used to set another symbol table bit and
 * might be null.
 */
public void bindIdent(Subparser subparser, Node typespec, Node declarator, STField alsoSet) {
  StackFrame stack = subparser.stack;
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
  CContext scope = (CContext) subparser.scope;

  // TODO need to hoist conditionals from typespec and declarator
  // around entire declaration by combining with each other

  // TODO causing an infinite loop on 3.12 init/main.c
  /* if (typespec.getProperty(SPECS) == null) { */
  /*   System.err.println("error: no specs available"); */
  /* } else { */
  /*   Type baseType = ((Specifiers) typespec.getProperty(SPECS)).getType(); */
  /*   Binding binding = grokdeclarator(declarator, baseType); */
  /*   Type type = binding.type; */
  /*   Language ident = binding.ident; */

  /*   System.err.println(ident + " = " + type); */
  /* } */

  // TODO replace old-style typedef checking by using specs above
  Language ident = getident(declarator);

  // Check whether the declaration is a typedef.  This assumes that
  // the typedef keyword is the first token of the declaration.
  boolean typedef = false;

  if (null != typespec) {
    Object a = typespec;
    while (true) {
      if ( ! (a instanceof Syntax)) {
        Node n = (Node) a;
        if (n.hasName(ForkMergeParser.CHOICE_NODE_NAME)) {
          // When it's a conditional node, the first child is a
          // presence condition, the second is the first AST child.
          a = n.get(1);
        } else {
          a = n.get(0);
        }
      } else if (a instanceof Pair) {
        a = ((Pair) a).head();
      } else {
        break;
      }
    }
    Language t = (Language) a;

    if (CTag.TYPEDEF == t.tag()) {
      // Bind a typedef name.
      typedef = true;

      if (languageStatistics) {
        if (typedef) {
          Location location = subparser.lookahead.token.syntax.getLocation();
          System.err.println(String.format("typedef %s %s", ident, location));
        }
      }
    } else {
      // Binding a variable name.
      typedef = false;
    }
  }

  if (showErrors) {
    System.err.println("bind: " + ident.getTokenText() + " " + typedef);
  }
  if (debug) {
    System.err.println("def: " + ident.getTokenText() + " " + alsoSet);
  }
  STField field = typedef ? STField.TYPEDEF : STField.IDENT;
  scope.getSymbolTable().setbool(ident.getTokenText(), field, true, presenceCondition);
  if (null != alsoSet) {
    scope.getSymbolTable().setbool(ident.getTokenText(), alsoSet, true, presenceCondition);
  }
  /* if (typedef) { */
  /*   scope.getSymbolTable().setbool(ident.getTokenText(), STField.TYPEDEF, true, presenceCondition); */
  /* } else { */
  /*   scope.getSymbolTable().setbool(ident.getTokenText(), STField.IDENT, true, presenceCondition); */
  /* } */
  /* scope.bind(ident.getTokenText(), typedef, presenceCondition); */
}

public void bindIdent(Subparser subparser, TypeBuilder typespec, DeclBuilder declarator)
{
	bindIdent(subparser, typespec, declarator, null);
}

public void bindIdent(Subparser subparser, TypeBuilder typespec, DeclBuilder declarator, STField alsoSet) {
  StackFrame stack = subparser.stack;
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
  CContext scope = (CContext) subparser.scope;

  String ident = declarator.getID();

  boolean typedef = typespec.isTypeDef();

  if (languageStatistics) {
    if (typedef) {
      Location location = subparser.lookahead.token.syntax.getLocation();
      System.err.println(String.format("typedef %s %s", ident, location));
    }
  }

  if (showErrors) {
    System.err.println("bind: " + ident + " " + typedef);
  }
  if (debug) {
    System.err.println("def: " + ident + " " + alsoSet);
  }
  STField field = typedef ? STField.TYPEDEF : STField.IDENT;
  scope.getSymbolTable().setbool(ident, field, true, presenceCondition);
  if (null != alsoSet) {
    scope.getSymbolTable().setbool(ident, alsoSet, true, presenceCondition);
  }
}

private static Binding grokdeclarator(Node declarator, Type type) {
  Language ident = null;

  while (null != declarator) {
    if (declarator.getName().equals("SimpleDeclarator")) {
      ident = ((Syntax) declarator.get(0)).toLanguage();
      declarator = null;

    } else if (declarator.getName().equals("ParenIdentifierDeclarator")) {
      Node parenIdentDecl = null;

      switch (declarator.size()) {
      case 3:
        parenIdentDecl = (Node) declarator.get(1);
        break;
      default:
        error("unexpected grammar structure for " + declarator.getName());
        break;
      }
      declarator = parenIdentDecl;

    } else if (declarator.getName().equals("UnaryIdentifierDeclarator")) {
      Node typeQual;
      Node identDecl;
      switch (declarator.size()) {
      case 2:
        typeQual = null;
        identDecl = (Node) declarator.get(1);
        break;
      case 3:
        typeQual = (Node) declarator.get(1);
        identDecl = (Node) declarator.get(2);
        break;
      default:
        typeQual = null;
        identDecl = null;
        error("unexpected grammar structure for " + declarator.getName());
        break;
      }

      if (null != typeQual) {
        Specifiers specs = (Specifiers) typeQual.getProperty(SPECS);
        type = specs.annotateBase(new PointerT(type).annotate());
      } else {
        type = new PointerT(type);
      }

      declarator = identDecl;

    } else if (declarator.getName().equals("ArrayDeclarator")) {
      Node parenIdentDecl = (Node) declarator.get(0);
      Node arrayAbsDecl = (Node) declarator.get(1);

      type = grokabsdeclarator(arrayAbsDecl, type);
      declarator = parenIdentDecl;

    } else if (declarator.getName().equals("PostfixIdentifierDeclarator")) {
      Node unaryIdentDecl = (Node) declarator.get(0);
      Node postfixAbsDecl = (Node) declarator.get(1);

      type = grokabsdeclarator(postfixAbsDecl, type);
      declarator = unaryIdentDecl;

    } else if (declarator.getName().equals("FunctionDeclarator")) {
      Node parenIdentDecl = (Node) declarator.get(0);
      Node postfixFuncDecl = (Node) declarator.get(1);

      type = grokabsdeclarator(postfixFuncDecl, type);
      declarator = parenIdentDecl;

    } else {
      if (debug) {
        System.err.println("TODO support declarator " + declarator.getName());
      }
      declarator = null;
    }
  }

  return new Binding(ident, type);
}

private static Type grokabsdeclarator(Node absdeclarator, Type type) {
  if (absdeclarator.getName().equals("ArrayAbstractDeclarator")) {
    while (null != absdeclarator) {
      Node arraySize = null;
      switch (absdeclarator.size()) {
      case 0:
        arraySize = null;
        absdeclarator = null;
        break;
      case 1:
        arraySize = (Node) absdeclarator.get(0);
        absdeclarator = null;
        break;
      case 2:
        arraySize = (Node) absdeclarator.get(1);
        absdeclarator = (Node) absdeclarator.get(0);
        break;
      default:
        error("unexpected grammar structure for " + absdeclarator.getName());
      }
      type = new ArrayT(type);
    }

  } else if (absdeclarator.getName().equals("PostfixingFunctionDeclarator")) {
    Node parms = null;
    switch (absdeclarator.size()) {
    case 1:
      parms = (Node) absdeclarator.get(0);
      break;
    default:
      error("unexpected grammar structure for " + absdeclarator.getName());
      break;
    }

    FunctionT function = getParameterTypes(parms);

    function.setResult(type);
    type = function;

  } else {
    if (debug) {
      System.err.println("TODO support absdeclarator " + absdeclarator.getName());
    }
  }

  return type;
}

private static FunctionT getParameterTypes(Node parms) {
  // TODO flesh this out and do type checking
  boolean varArgs = false;
  ArrayList<Type> types = new ArrayList<Type>();

  if (parms != null && parms.size() > 0) {
    parms = (Node) parms.get(0);
    /* System.err.println(parms); */
    switch (parms.size()) {
    case 2:
      varArgs = true;
      // fall through
    case 1:
      parms = (Node) parms.get(0);
      break;
    default:
      error("unexpected grammar structure for " + parms.getName());
      break;
    }
    // parms is now a list node containing ParameterDeclaration elements
    if (parms.getName().equals("ParameterList")) {
      for (Object o : parms) {
        GNode n = (GNode) o;
        if (n.getName().equals("Conditional")) {
          boolean isCond = true;
          for (Object o_parm : n) {
            if (isCond) {
              // TODO get presence condition
            } else {
              GNode parm = (GNode) o_parm;
              Node typespec = (Node) parm.get(0);
              // TODO remove once specs are done
              if (typespec.getProperty(SPECS) == null) continue;
              Type baseType = ((Specifiers) typespec.getProperty(SPECS)).getType();
              if (parm.size() > 1) {
                Node declarator = (Node) parm.get(1);
                if (parm.getName().equals("ParameterIdentifierDeclaration")) {
                  Binding binding = grokdeclarator(declarator, baseType);
                  Language ident = binding.ident;
                  Type type = binding.type;
                  String name = binding.ident.getTokenText();
                  types.add(VariableT.newParam(type, name));

                } else if (parm.getName().equals("ParameterAbstractDeclaration")) {
                  Type type = grokabsdeclarator(declarator, baseType);
                  types.add(type);
                } else {
                  if (showErrors) {
                    System.err.println("unsupported parameter declaration " + parm.getName());
                  }
                }
              } else {
                types.add(baseType);
              }
            }
            isCond = isCond ? false : true;
          }
        } else {
          if (showErrors) {
            System.err.println("parameter is no conditional");
          }
        }
      }
    } else {
      if (showErrors) {
        System.err.println("unexpected parameter list node");
      }
    }
  }

  FunctionT function = new FunctionT(null, types, varArgs);
  function.addAttribute(Constants.ATT_STYLE_NEW);
  return function;
}

public void BindVar(Subparser subparser) {
  StackFrame stack = subparser.stack;
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
  CContext scope = (CContext) subparser.scope;

  // Get the identifier in the declarator.
  Object b = stack.get(1).value;
  Language<?> ident = getident(b);

  // Bind variable name.
  scope.getSymbolTable().setbool(ident.getTokenText(), STField.IDENT, true, presenceCondition);
  /* scope.bind(ident.getTokenText(), false, presenceCondition); */
}

public void BindEnum(Subparser subparser) {
  StackFrame stack  = subparser.stack;
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
  CContext scope = (CContext) subparser.scope;

  // Get the identifier in the declarator.  The identifier must
  // occur after an IdentifierOrTypedefName token.
  Object b = stack.get(1).value;
  String ident = getident(b).getTokenText();

  // Bind variable name.
  scope.getSymbolTable().setbool(ident, STField.IDENT, true, presenceCondition);
  /* scope.bind(ident, false, presenceCondition); */
}

public void useIdent(Subparser subparser, Node ident) {
  CContext scope = (CContext) subparser.scope;
  String name = ident.getTokenText();

  if (debug) {
    System.err.println("use: " + name);
  }
  if (enableCheckers) {
    PresenceCondition identPresenceCond = scope.symbolPresenceCond(name, STField.IDENT);
    if (null != identPresenceCond && ! identPresenceCond.isFalse()) {
      PresenceCondition not = identPresenceCond.not();
      PresenceCondition andnot = subparser.getPresenceCondition().and(not);
      /* not.delRef(); */
      if (! andnot.isFalse()) {
        boolean satWithKconfig = true;
        boolean contradiction = false;
        int[] model = null;
        // check andnot against kconfig feature model
        if (this.hasClauses) {
          // use double negation to get andnot in cnf form
          PresenceCondition notandnot = andnot.not();
          /* System.err.println(notandnot); */
          List allsat = (List) notandnot.getBDD().allsat();
          ArrayList<ArrayList<Integer>> bugClauses =
            new ArrayList<ArrayList<Integer>>();

          for (Object o : allsat) {
            byte[] sat = (byte[]) o;
            ArrayList<Integer> clause = new ArrayList<Integer>();
            for (int i = 0; i < sat.length; i++) {
              // convert to solver's varnum
              // look up i in variable manager
              // if varname exists in clauses, then add to clause
              int sign = 1;

              switch (sat[i]) {
              case 1:
                // negate again
                sign = -1;
              case 0:
                String varname = notandnot.presenceConditionManager().getVariableManager().getName(i);
                if (varname.startsWith("(defined ")) {
                  varname = varname.substring(9, varname.length() - 1);
                  /* System.err.println(varname); */
                  if (this.featureClauses.getVarmap().containsKey(varname)) {
                    int var = this.featureClauses.getVarmap().get(varname);
                    var = sign * var;
                    clause.add(var);
                  }
                }
                break;
              }
            }
            if (clause.size() > 0) {
              /* System.err.println(clause); */
              bugClauses.add(clause);
            }
          }

          // add extra constraints
          for (String extraConstraint : extraConstraints) {
            this.featureClauses.addClauses(extraConstraint);
          }
          // remove them to avoid adding them again the next check
          extraConstraints.clear();

          try {
            ISolver featureSolver = SolverFactory.newDefault();
            featureSolver.newVar(this.featureClauses.getNumVars());
            /* featureSolver.setExpectedNumberOfClauses(this.featureClauses.size() + bugClauses.size()); */

            for (List<Integer> clause : this.featureClauses) {
              int[] cint = new int[clause.size()];
              int i = 0;
              for (Integer val : clause) {
                cint[i++] = val;
              }
              featureSolver.addClause(new VecInt(cint));
            }

            for (List<Integer> clause : bugClauses) {
              int[] cint = new int[clause.size()];
              int i = 0;
              for (Integer val : clause) {
                cint[i++] = val;
              }
              IConstr curConstr =
                featureSolver.addClause(new VecInt(cint));
            }

            ISolver bugSolver = SolverFactory.newDefault();
            bugSolver.newVar(this.featureClauses.getNumVars());
            bugSolver.setExpectedNumberOfClauses(bugClauses.size());

            for (List<Integer> clause : bugClauses) {
              int[] cint = new int[clause.size()];
              int i = 0;
              for (Integer val : clause) {
                cint[i++] = val;
              }
              IConstr curConstr =
                bugSolver.addClause(new VecInt(cint));
            }

            IProblem simpleProblem = new ModelIterator(bugSolver);
            boolean satWithoutKconfig = simpleProblem.isSatisfiable();

            /* IProblem problem = featureSolver; */
            IProblem problem = new ModelIterator(featureSolver);
            if (problem.isSatisfiable(modelAssumptions)) {
              satWithKconfig = true;
              if (debug) {
                System.err.println("computing model");
              }
              model = problem.model();
            } else {
              satWithKconfig = false;
              if (satWithoutKconfig) {
                System.err.print("invalid config invalidated by kconfig ");
              } else {
                System.err.print("invalid config invalidated by bug clauses alone ");
              }
              System.err.println(name + " at " + ident.getLocation());
            }
          } catch (ContradictionException e) {
            contradiction = true;
          } catch (TimeoutException e) {
            e.printStackTrace();
            /* System.exit(1); */
          }
          notandnot.delRef();
        }
        if (contradiction) {
          System.err.print("invalid config invalidated by contradiction " + name + " at " + ident.getLocation());
        } else if (satWithKconfig) {
          PresenceCondition sat = andnot.satOne();
          if (null != scope.symbolPresenceCond(name, STField.GLOBAL_FUNDEF) || null != scope.symbolPresenceCond(name, STField.STATIC_FUNDEF)) {
            System.err.println("found for function def");
          }
          System.err.println("found invalid configuration on "
                             + name + " at " + ident.getLocation());
          /* System.err.println("config " + andnot); */
          /* System.err.println("identPresenceCond: " + identPresenceCond); */
          /* /\* System.err.println("undefined under " + not); *\/ */
          /* /\* System.err.println("used under      " + subparser.getPresenceCondition()); *\/ */
          /* if (this.showExample) { */
          if (true) {
            if (null != model) {
              System.err.print("model: ");
              String delim = "[";
              for (int i = 0; i < model.length; i++) {
                if (model[i] > 0) {
                  System.err.print(delim + featureClauses.getVarName(model[i]));
                  delim = ",";
                }
              }
              System.err.println("]");
            }
          }
          sat.delRef();
        }
      } else {
        if (debug) {
          System.err.println("valid function call " + name + " at " + ident.getLocation());
          /* System.err.println("not: " + not); */
          /* System.err.println("subparser.getPresenceCondition() " + subparser.getPresenceCondition()); */
        }
      }
      not.delRef();
      andnot.delRef();

      /* PresenceCondition and = subparser.getPresenceCondition().and(identPresenceCond); */
      /* if (and.isFalse()) { */
      /*   System.err.println("found infeasible configuration on " + name + " at " + ident.getLocation() + " defined in " + identPresenceCond); */
      /* } */
      /* and.delRef(); */

      // update configurations the identifier is used in
      scope.getSymbolTable().setbool(name, STField.USED, true, subparser.getPresenceCondition());
    } else {
      if (debug) {
        System.err.println("not an identifier in any config " + name + " at " + ident.getLocation());
      }
    }
  }
}

public void callFunction(Subparser subparser, Node fun, Node parms) {
  if (fun.getName().equals("PrimaryIdentifier") && enableFunctionAnalysis) {
    /* CContext scope = (CContext) subparser.scope; */
    /* String name = ((Language<?>) fun.get(0)).getTokenText(); */
    /* scope.getSymbolTable().setbool(name, STField.FUNCALL, true, subparser.getPresenceCondition()); */
    String name = ((Language<?>) fun.get(0)).getTokenText();
    functionTable.setbool(name, STField.FUNCALL, true, subparser.getPresenceCondition());
    return;
  }

  // TODO do later
  if (true) {
    return;
  }

  String name = ((Syntax) fun.get(0)).getTokenText();
  CContext scope = (CContext) subparser.scope;

  if (debug) {
    System.err.println("function call: " + name);
  }
  if (enableCheckers) {
    PresenceCondition funPresenceCond = scope.symbolPresenceCond(name, STField.GLOBAL_FUNDEF).or(scope.symbolPresenceCond(name, STField.STATIC_FUNDEF));
    if (null != funPresenceCond && ! funPresenceCond.isFalse()) {
      PresenceCondition not = funPresenceCond.not();
      PresenceCondition andnot = subparser.getPresenceCondition().and(not);
      not.delRef();
      if (! andnot.isFalse()) {
        PresenceCondition sat = andnot.satOne();
        System.err.println("found invalid configuration on function call " + name + " at " + fun.getLocation() + " config " + sat);        sat.delRef();
      }
      andnot.delRef();

      PresenceCondition and = subparser.getPresenceCondition().and(funPresenceCond);
      if (and.isFalse()) {
        System.err.println("found infeasible configuration on function call " + name + " at " + fun.getLocation() + " defined in " + funPresenceCond);
      }
      and.delRef();

      // update configurations the function is used in
      scope.getSymbolTable().setbool(name, STField.USED, true, subparser.getPresenceCondition());
    } else {
      if (debug) {
        System.err.println("checker error: " + name + " not a function in any configuration");
      }
    }
    funPresenceCond.delRef();
  }
}

public void EnterScope(Subparser subparser) {
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();

  subparser.scope = ((CContext) subparser.scope).enterScope(presenceCondition);
}

public void ExitScope(Subparser subparser) {
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();

  subparser.scope = ((CContext) subparser.scope).exitScope(presenceCondition);
}

public void ExitReentrantScope(Subparser subparser) {
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();

  subparser.scope
    = ((CContext) subparser.scope).exitReentrantScope(presenceCondition);
}

public void ReenterScope(Subparser subparser) {
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();

  subparser.scope
    = ((CContext) subparser.scope).reenterScope(presenceCondition);
}

public void KillReentrantScope(Subparser subparser) {
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();

  subparser.scope
    = ((CContext) subparser.scope).killReentrantScope(presenceCondition);
}

/**
 * Find the identifier or typedef name in a declarator.  Assume
 * the first identifier in the subtree is the var or typedef name.
 *
 * @param o The semantic value.
 * @return The first identifier in the subtree or null if there is
 * none.
 */
private static Language getident(Object o) {
  if (o instanceof Language) {
    Language token = ((Language) o);

    if (CTag.IDENTIFIER == token.tag()
        || CTag.TYPEDEFname == token.tag()) {
      return token;

    } else {
      return null;
    }

  } else if (o instanceof Pair) {
    Pair<?> b = (Pair<?>) o;

    while (b != Pair.empty()) {
      Object child = b.head();

      if (null != child) {
        Language ident = getident(child);

        if (null != ident) {
          return ident;
        }
      }

      b = b.tail();
    }

    return null;
  } else if (o instanceof PresenceConditionManager.PresenceCondition) {
    return null;
  } else if (o instanceof Error) {
    return null;
  } else {
    Node b = (Node) o;

    for (int i = 0; i < b.size(); i++) {
      Object child = b.get(i);

      if (null != child) {
        Language ident = getident(child);

        if (null != ident) {
          return ident;
        }
      }
    }

    return null;
  }
}

// ---------- Specifiers

private static String SPECS = "xtc.lang.cpp.Specifiers";

private static class Specifiers {
  /** Presence condition. */
  public PresenceCondition pc;

  /** True if there is a type error. */
  public boolean error;

  /** The type-error message. */
  public String error_message;

  /** The flag for whether a tag reference is a declaration. */
  public boolean refIsDecl;

  /** The type, if any. */
  public Type type;

  /** The storage class attribute, if any. */
  public Attribute storage;

  /** The thread-local attribute, if any. */
  public Attribute threadlocal;

  /** The inline attribute, if any. */
  public Attribute function;

  /** Any other attributes. */
  public List<Attribute> attributes;

  // The internal state for tracking type specifiers.
  public boolean seenSigned;
  public boolean seenUnsigned;
  public boolean seenBool;
  public boolean seenChar;
  public boolean seenShort;
  public boolean seenInt;
  public int     longCount;
  public boolean seenFloat;
  public boolean seenDouble;
  public boolean seenComplex;

  public Specifiers() {
  }

  /* public Specifiers(PresenceCondition pc) { */
  /*   this.pc = pc.addRef(); */
  /* } */

  public Specifiers(PresenceCondition pc, Specifiers s) {
    /* this(pc); */
    this.error = s.error;
    this.error_message = s.error_message;
    this.refIsDecl = s.refIsDecl;
    this.type = s.type;
    this.storage = s.storage;
    this.threadlocal = s.threadlocal;
    this.function = s.function;
    this.attributes = s.attributes;
    this.seenSigned = s.seenSigned;
    this.seenUnsigned = s.seenUnsigned;
    this.seenBool = s.seenBool;
    this.seenChar = s.seenChar;
    this.seenShort = s.seenShort;
    this.seenInt = s.seenInt;
    this.longCount = s.longCount;
    this.seenFloat = s.seenFloat;
    this.seenDouble = s.seenDouble;
    this.seenComplex = s.seenComplex;
  }

  /**
   * Add given specs to this set of specs.  Adds in-place and returns
   * this updated specs object.
   **/
  public Specifiers addSpecs(Specifiers other) {
    if (other.error) {
      this.setError(other.error_message);
      return this;
    }

    if (null != other.type) {
      if (null != this.type) {
        /* System.err.println("1"); */
        this.multipleTypes();
      } else {
        this.type = other.type;
      }
    }

    if (other.seenChar) {
      if (this.hasType()) {
        /* System.err.println("2"); */
        this.multipleTypes();
      } else {
        this.seenChar = true;
      }
    }

    if (other.seenShort) {
      if (this.seenBool || this.seenChar || this.seenShort || (0 < this.longCount) ||
          this.seenFloat || this.seenDouble || this.seenComplex ||
          (null != this.type)) {
        /* System.err.println("3"); */
        this.multipleTypes();
      } else {
        this.seenShort = true;
      }
    }

    if (other.seenInt) {
      if (this.seenBool || this.seenChar || this.seenInt ||
          this.seenFloat || this.seenDouble || this.seenComplex ||
          (null != this.type)) {
        /* System.err.println("4"); */
        this.multipleTypes();
      } else {
        this.seenInt = true;
      }
    }

    for (int i = 0; i < other.longCount; i++) {
      if (this.seenBool || this.seenChar || this.seenShort || (1 < this.longCount) ||
          this.seenFloat ||
          ((this.seenDouble || this.seenComplex) &&
           (0 < this.longCount)) ||
          (null != this.type)) {
        /* System.err.println("5"); */
        this.multipleTypes();
      } else {
        this.longCount++;
      }
    }

    if (other.seenFloat) {
      if (this.seenBool || this.seenChar || this.seenShort || this.seenInt || (0 < this.longCount) ||
          this.seenDouble ||
          (null != this.type)) {
        /* System.err.println("6"); */
        this.multipleTypes();
      } else {
        this.seenFloat = true;
      }
    }

    if (other.seenDouble) {
      if (this.seenBool || this.seenChar || this.seenShort || this.seenInt || (1 < this.longCount) ||
          this.seenFloat ||
          (null != this.type)) {
        /* System.err.println("7"); */
        this.multipleTypes();
      } else {
        this.seenDouble = true;
      }
    }

    if (other.seenSigned) {
      if (this.seenUnsigned) {
        this.seenSigned = true;
        this.setError("both 'signed' and 'unsigned' in declaration specifiers");
      } else if (this.seenSigned) {
        this.setError("duplicate 'signed'");
      } else {
        this.seenSigned = true;
      }
    }

    if (other.seenUnsigned) {
      if (this.seenSigned) {
        this.seenUnsigned = true;
        this.setError("both 'signed' and 'unsigned' in declaration specifiers");
      } else if (this.seenUnsigned) {
        this.setError("duplicate 'unsigned'");
      } else {
        this.seenUnsigned = true;
      }
    }

    if (other.seenBool) {
      if (this.hasType()) {
        /* System.err.println("8"); */
        this.multipleTypes();
      } else {
        this.seenBool = true;
      }
    }

    if (null != other.storage) {
      if (null == this.storage) {
        this.storage = other.storage;
      } else if (this.storage.equals(other.storage)) {
        this.setError("duplicate storage class");
      } else {
        this.setError("multiple storage classes in declaration specifiers");
      }
    }

    return this;
  }

  /**
   * Annotate the specified base type.  This method annotates the
   * specified type with all attributes besides the storage class,
   * thread-local specifier, and function specifier attributes.
   *
   * @param base The base type.
   * @return The annnotated base type.
   */
  public Type annotateBase(Type base) {
    return (null != attributes)? base.attribute(attributes) : base;
  }

  /**
   * Get the resulting type.
   */
  public Type getType() {
    Type type;
    if (seenBool) {
      type = BooleanT.TYPE;
    } else if (seenChar) {
      if (seenUnsigned) {
        type = NumberT.U_CHAR;
      } else if (seenSigned) {
        type = NumberT.S_CHAR;
      } else {
        type = NumberT.CHAR;
      }
    } else if (seenShort) {
      if (seenUnsigned) {
        type = NumberT.U_SHORT;
      } else {
        type = NumberT.SHORT;
      }
    } else if (seenFloat) {
      if (seenComplex) {
        type = NumberT.FLOAT_COMPLEX;
      } else {
        type = NumberT.FLOAT;
      }
    } else if (seenDouble) {
      if (0 < longCount) {
        if (seenComplex) {
          type = NumberT.LONG_DOUBLE_COMPLEX;
        } else {
          type = NumberT.LONG_DOUBLE;
        }
      } else {
        if (seenComplex) {
          type = NumberT.DOUBLE_COMPLEX;
        } else {
          type = NumberT.DOUBLE;
        }
      }
    } else if (1 == longCount) {
      if (seenUnsigned) {
        type = NumberT.U_LONG;
      } else {
        type = NumberT.LONG;
      }
    } else if (1 < longCount) {
      if (seenUnsigned) {
        type = NumberT.U_LONG_LONG;
      } else {
        type = NumberT.LONG_LONG;
      }
    } else if (seenUnsigned) {
      type = NumberT.U_INT;
    } else if (seenSigned) {
      type = NumberT.S_INT;
    } else if (seenInt) {
      type = NumberT.INT;
    } else {
      type = C.IMPLICIT;
    }

    // Annotate the type.
    if ((! type.hasError()) && (null != attributes)) {
      type = type.annotate().attribute(attributes);
    }

    return type;
  }

  /** Test for previous type. */
  protected boolean hasType() {
    return
      (seenBool || seenChar || seenShort || seenInt || (0 < longCount) ||
       seenFloat || seenDouble || seenComplex ||
       (null != type));
  }

  /** Report error indicating multiple types. */
  protected void multipleTypes() {
    this.setError("multiple data types in declaration specifiers");
  }

  /** Add the specified attribute. */
  protected void add(Attribute att) {
    if (null == attributes) {
      attributes = new ArrayList<Attribute>();
      attributes.add(att);
    } else if (! attributes.contains(att)) {
      attributes.add(att);
    }
  }

  public void setError(String msg) {
    this.error = true;
    this.error_message = msg;
    type = ErrorT.TYPE;
    if (showErrors) {  // showErrors is true
      System.err.println("error in specifiers: " + msg);
    }
  }

  // Get specs.  Gets list of specifiers, checking for type errors.
  // Also need to hoist conditionals around complete type
  // specifiers.  Is it possible to make a hoisting tree-walker?
  // Walk tree, when encountering conditional, fork the spec state
  // and walk both.  No need for merge, since there are two
  // different declarations.
}

/**
 * A helper function to get the specifiers of the value of a component
 * node from the stack.
 *
 * @param subparser The reference to the subparser.
 * @param number The component number.
 * @return The specifiers for the component.
 */
private static Specifiers getSpecsAt(Subparser subparser, int component) {
  Node n = getNodeAt(subparser, component);

  if (n.hasProperty(SPECS)) {
    return (Specifiers) n.getProperty(SPECS);
  } else {
    Specifiers specs = new Specifiers();

    n.setProperty(SPECS, specs);
    return specs;
  }
}

private static void updateSpecs(Subparser subparser,
                                Specifiers new_specs,
                                Object value) {
  updateSpecs(subparser, null, new_specs, value);
}

private static void updateSpecs(Subparser subparser,
                                Specifiers specs,
                                Specifiers new_specs,
                                Object value) {
  if (null == specs) {
    specs = new_specs;
  } else {
    specs = specs.addSpecs(new_specs);
  }

  ((CContext) subparser.scope).lastSeenType = specs.getType();
  ((Node) value).setProperty(SPECS, specs);
}

private static Specifiers makeUnionSpec(Subparser subparser,
                                        Node tagNode,
                                        Node membersNode,
                                        Node attrsNode) {
  Specifiers specs = new Specifiers();

  return specs;
}

private static Specifiers makeStructSpec(Subparser subparser,
                                         Node tagNode,
                                         Node membersNode,
                                         Node attrsNode) {
  String tag;
  String name;
  if (null == tagNode) {
    // TODO struct tag creation
    /* tag = table.freshName("tag"); */
    tag = "tag(untagged)";
    name = tag;
  } else {
    // TODO check for conditional here
    /* tag = ((Syntax) tagNode.get(0)).toLanguage().getTokenText(); */
    /* name = SymbolTable.toTagName(tag); */
  }

  // TODO remove this once above code is complete
  tag = "tag(untagged)";
  name = tag;

  Type type;

  // TODO struct tag is defined
  /* if (table.current().isDefinedLocally(name)) { */
  /*   final Type t = (Type)table.current().lookupLocally(name); */

  /*   if (! t.isStruct()) { */
  /*     runtime.error("'" + tag + "' defined as wrong kind of tag", n); */
  /*     reportPreviousTag(t); */
  /*     type = ErrorT.TYPE; */
  /*     return; */

  /*   } else if (null != t.toTagged().getMembers()) { */
  /*     runtime.error("redefinition of 'struct " + tag + "'", n); */
  /*     reportPreviousTag(t); */
  /*     type = ErrorT.TYPE; */
  /*     return; */

  /*   } else if (t.hasAttribute(Constants.ATT_DEFINED)) { */
  /*     runtime.error("nested redefinition of 'struct " + tag + "'", n); */
  /*     type = ErrorT.TYPE; */
  /*     return; */

  /*   } else { */
  /*     type = t; */
  /*   } */
  /* } else { */
    // TODO checkNotParameter
    /* checkNotParameter(n, "struct"); */

    // Declare the struct so that members can reference it.
    type = new StructT(tag);
    /* table.current().define(name, type); */
  /* } */

  // TODO location
  /* // Update the location. */
  /* type.setLocation(n); */

  // TODO struct attributes
  /* // Update the GCC attributes. */
  /* for (Attribute a : toAttributeList(n.getGeneric(0))) { */
  /*   type.addAttribute(a); */
  /* } */
  /* for (Attribute a : toAttributeList(n.getGeneric(3))) { */
  /*   type.addAttribute(a); */
  /* } */

  // Process the members and update the struct declaration.  Use
  // defined attribute to protect against nested redefinition.
  type.addAttribute(Constants.ATT_DEFINED);
  // TODO struct members
  /* List<VariableT> members = processMembers(n.getGeneric(2), true); */
  List<VariableT> members = null;
  type.toStruct().setMembers(members);
  type.removeAttribute(Constants.ATT_DEFINED);

  Specifiers specs = new Specifiers();
  specs.type = type;

  return specs;
}

private Type getType(TypeBuilder t, DeclBuilder d)
{
  d.addType(t.toType());
  return d.toType();
}

private void addMapping(Subparser subparser, TypeBuilder t, DeclBuilder d)
{
  if (t == null || d == null || !t.getIsValid() || !d.getIsValid())
    return;
  Type type = getType(t,d);
  PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
  CContext scope = (CContext) subparser.scope;
  scope.getSymbolTable().addMapping(d.getID(), type, presenceCondition);
}

private StringBuilder genRenamingDecls(Subparser subparser, DeclBuilder db, Type type) {
  // gets the symboltable after the identifier has been added, and gets the list of all renamings
  xtc.lang.cpp.CContext.SymbolTable symtab = ((CContext) subparser.scope).getSymbolTable();
  List<String> renamings = symtab.multiverse.getAllRenamings(db.identifier);
  StringBuilder declarations = new StringBuilder();
  // writes the declaration for every renaming
  for (String renaming : renamings) {
    declarations.append(type + " " + renaming);
    declarations.append(";\n");
  }

  return declarations;
}

/**
 * Check that the tag declaration is not located within a
 * parameter list.  If the declaration is located within a
 * parameter list, this method prints the appropriate warning.
 *
 * @param node The node.
 * @param kind The kind of tag.
 */
private void checkNotParameter(Node node, String kind) {
  // TODO checkNotParameter implementation
  /* if (TMP_SCOPE.equals(table.current().getName())) { */
  /*   final String tag = node.getString(1); */
  /*   final String msg; */
  /*   if (null == tag) { */
  /*     msg = "anonymous " + kind + " declared inside parameter list"; */
  /*   } else { */
  /*     msg = "'" + kind + " " + tag + "' declared inside parameter list"; */
  /*   } */

  /*   runtime.warning(msg, node); */
  /* } */
}

// ---------- Declarators

/* private static String DECL = "xtc.lang.cpp.Declarator"; */

/* private static String NAME = "xtc.lang.cpp.Name"; */

/* private static void setDecl(Object n, Type type) { */
/*   ((Node) n).setProperty(DECL, type); */
/* } */

/* private static Type getDecl(Object n) { */
/*   return ((Type) ((Node) n).getProperty(DECL)); */
/* } */

/*private static void setName(Object n, String name) { */
/*   ((Node) n).setProperty(NAME, name); */
/* } */

/* private static String getName(Object n) { */
/*   return ((String) ((Node) n).getProperty(NAME)); */
/* }*/

/* private static void setDecl(Object n, Type type, String name) { */
/*   setDecl(n, type); */
/*   setName(n, name); */
/* } */

/* private static void copyDecl(Subparser subparser, Object value, int from) { */
/*   setDecl(value, (Type) (getNodeAt(subparser, from).getProperty(DECL))); */
/* } */

/* private static void copyName(Subparser subparser, Object value, int from) { */
/*   setName(value, (String) (getNodeAt(subparser, from).getProperty(NAME))); */
/* } */

/* private static void copyDeclName(Subparser subparser, Object value, int from){ */
/*   copyDecl(subparser, value, from); */
/*   copyName(subparser, value, from); */
/* } */
