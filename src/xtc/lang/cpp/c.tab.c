/* A Bison parser, made by GNU Bison 3.5.3.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 171 "c.y"

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

import java.util.ArrayList;
import java.util.List;

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

#line 153 "c.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   4860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  232
/* YYNRULES -- Number of rules.  */
#define YYNRULES  625
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  963

#define YYUNDEFTOK  2
#define YYMAXUTOK   383


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
static const yytype_int16 yyrline[] =
{
       0,   257,   257,   262,   264,   268,   269,   270,   271,   275,
     279,   280,   284,   284,   284,   285,   285,   285,   291,   299,
     300,   305,   310,   315,   321,   322,   327,   332,   337,   345,
     346,   351,   356,   361,   372,   372,   372,   373,   373,   373,
     377,   382,   387,   392,   398,   403,   408,   413,   421,   426,
     431,   436,   476,   477,   481,   481,   482,   482,   483,   483,
     484,   484,   492,   491,   497,   496,   502,   501,   510,   509,
     515,   514,   520,   519,   527,   528,   529,   530,   531,   535,
     536,   537,   538,   539,   543,   548,   554,   563,   568,   577,
     578,   582,   589,   596,   603,   610,   620,   621,   622,   626,
     627,   628,   632,   633,   634,   638,   639,   640,   644,   650,
     656,   662,   671,   683,   689,   695,   718,   719,   720,   724,
     725,   726,   731,   732,   733,   737,   738,   739,   743,   744,
     745,   746,   750,   751,   752,   753,   757,   758,   762,   763,
     764,   768,   774,   780,   786,   795,   800,   806,   812,   821,
     825,   826,   827,   828,   829,   833,   834,   835,   836,   847,
     848,   859,   860,   861,   862,   863,   864,   868,   869,   870,
     874,   875,   879,   880,   881,   885,   886,   885,   896,   897,
     896,   907,   908,   909,   908,   919,   920,   919,   930,   934,
     935,   934,   937,   938,   937,   940,   941,   942,   941,   944,
     945,   944,   951,   956,   959,   968,   969,   970,   971,   972,
     976,   977,   981,   982,   987,   988,   992,   993,   996,   998,
    1002,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1024,  1025,  1029,  1029,  1030,  1030,  1033,  1035,  1039,
    1040,  1044,  1045,  1090,  1091,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1102,  1107,  1106,  1112,  1111,  1117,  1116,  1122,
    1121,  1127,  1126,  1132,  1131,  1143,  1144,  1148,  1152,  1153,
    1157,  1158,  1159,  1160,  1163,  1165,  1169,  1170,  1179,  1180,
    1181,  1185,  1186,  1189,  1190,  1194,  1195,  1196,  1200,  1201,
    1205,  1206,  1207,  1208,  1212,  1213,  1217,  1221,  1222,  1226,
    1230,  1231,  1235,  1236,  1237,  1244,  1245,  1246,  1250,  1251,
    1258,  1259,  1260,  1262,  1263,  1267,  1268,  1269,  1273,  1274,
    1278,  1282,  1283,  1287,  1288,  1293,  1304,  1305,  1306,  1307,
    1311,  1318,  1322,  1322,  1322,  1326,  1330,  1331,  1335,  1343,
    1344,  1345,  1349,  1349,  1349,  1350,  1351,  1355,  1356,  1357,
    1361,  1363,  1366,  1368,  1372,  1377,  1382,  1386,  1387,  1388,
    1389,  1393,  1394,  1395,  1396,  1402,  1403,  1404,  1405,  1406,
    1407,  1408,  1412,  1413,  1414,  1415,  1426,  1429,  1431,  1435,
    1436,  1440,  1444,  1445,  1448,  1449,  1453,  1454,  1455,  1459,
    1460,  1469,  1473,  1474,  1475,  1479,  1480,  1481,  1486,  1487,
    1488,  1489,  1493,  1494,  1498,  1502,  1506,  1513,  1514,  1518,
    1519,  1520,  1525,  1526,  1532,  1533,  1534,  1535,  1536,  1537,
    1541,  1545,  1549,  1549,  1549,  1553,  1554,  1555,  1556,  1557,
    1558,  1559,  1560,  1564,  1568,  1569,  1573,  1577,  1581,  1585,
    1593,  1597,  1598,  1602,  1603,  1604,  1605,  1606,  1607,  1608,
    1609,  1610,  1611,  1612,  1616,  1620,  1624,  1628,  1629,  1633,
    1634,  1638,  1642,  1643,  1644,  1645,  1646,  1647,  1651,  1652,
    1656,  1657,  1658,  1659,  1663,  1664,  1665,  1669,  1670,  1671,
    1675,  1676,  1677,  1678,  1679,  1683,  1684,  1685,  1689,  1690,
    1694,  1695,  1699,  1700,  1704,  1705,  1709,  1710,  1714,  1715,
    1717,  1722,  1723,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1737,  1740,  1742,  1746,  1747,  1751,  1754,
    1756,  1760,  1761,  1765,  1769,  1770,  1773,  1775,  1779,  1780,
    1783,  1785,  1786,  1790,  1791,  1792,  1793,  1794,  1795,  1796,
    1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,
    1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,  1815,  1816,
    1817,  1818,  1819,  1820,  1821,  1822,  1823,  1824,  1825,  1826,
    1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,
    1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,  1846,
    1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,  1855,  1861,
    1865,  1868,  1870,  1874,  1876,  1877,  1881,  1882,  1883,  1884,
    1887,  1889,  1893,  1894,  1898,  1899,  1902,  1904,  1908,  1909,
    1913,  1917,  1918,  1922,  1923,  1924
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
  "$@17", "$@18", "DeclarationSpecifier", "TypeSpecifier",
  "DeclarationQualifierList", "TypeQualifierList", "DeclarationQualifier",
  "TypeQualifier", "ConstQualifier", "VolatileQualifier",
  "RestrictQualifier", "FunctionSpecifier", "BasicDeclarationSpecifier",
  "BasicTypeSpecifier", "SUEDeclarationSpecifier", "SUETypeSpecifier",
  "TypedefDeclarationSpecifier", "TypedefTypeSpecifier",
  "TypeofDeclarationSpecifier", "TypeofTypeSpecifier", "Typeofspecifier",
  "Typeofkeyword", "VarArgDeclarationSpecifier", "VarArgTypeSpecifier",
  "VarArgTypeName", "StorageClass", "BasicTypeName", "SignedKeyword",
  "ComplexKeyword", "ElaboratedTypeName", "StructSpecifier", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "UnionSpecifier",
  "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "StructDeclarationList", "StructDeclaration",
  "StructDefaultDeclaringList", "StructDeclaringList", "StructDeclarator",
  "StructIdentifierDeclarator", "BitFieldSizeOpt", "BitFieldSize",
  "EnumSpecifier", "EnumeratorList", "Enumerator", "$@35", "$@36",
  "EnumeratorValueOpt", "ParameterTypeList", "ParameterList",
  "ParameterDeclaration", "ParameterAbstractDeclaration",
  "ParameterIdentifierDeclaration", "$@37", "$@38", "$@39", "$@40", "$@41",
  "$@42", "IdentifierList", "Identifier", "IdentifierOrTypedefName",
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
  "FunctionDeclarator", "PostfixingFunctionDeclarator", "$@43", "$@44",
  "ArrayDeclarator", "ParenIdentifierDeclarator", "SimpleDeclarator",
  "OldFunctionDeclarator", "PostfixOldFunctionDeclarator", "$@45", "$@46",
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
  "VariableArgumentAccess", "StatementAsExpression", "$@47", "$@48",
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
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-782)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-515)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -782,    59,  1680,  -782,  -782,  -782,  -782,   159,  -782,   148,
    -782,  -782,  -782,  -782,   159,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,    19,  3855,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    2052,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,    11,    52,   317,   317,  2176,  2300,  -782,  -782,
    -782,  -782,  -782,  1030,  1030,   913,  1427,  1994,  1994,  1070,
    1070,  -782,    21,  1738,  1738,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,   279,  -782,    65,  -782,  -782,   107,  -782,    12,   193,
    -782,  -782,   168,   196,   159,  -782,   377,   222,   303,   233,
     241,   159,   229,   481,   283,  3855,  -782,  -782,  -782,  -782,
     265,  2748,   105,   285,   105,   294,   327,   466,  3672,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   288,   298,  -782,
     316,   338,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
     365,   376,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   386,
     389,  -782,  -782,  -782,  -782,  -782,   321,  -782,   394,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  3161,
    -782,  -782,  -782,  -782,  -782,   440,  4271,  -782,   416,   427,
    -782,   463,  -782,   435,   470,   473,  -782,  -782,  -782,   249,
    -782,   377,   377,   496,  -782,   499,   507,   509,   327,  -782,
     327,  -782,  -782,   405,  2915,  -782,   536,   536,  2424,  2548,
    2589,   395,   105,  -782,   536,  -782,  -782,  -782,  -782,   416,
    -782,   466,   467,   528,   327,   466,  3711,  -782,  -782,   574,
     574,   574,   574,  -782,  -782,  4571,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  4649,  4649,   561,  3161,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,   546,   553,   580,  4671,   226,
    3407,  1863,  2261,  2261,  2110,  2234,   582,  -782,   616,  -782,
    -782,  -782,  -782,   421,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  1291,  -782,  -782,  -782,  -782,  4749,  -782,  4671,  -782,
     161,   450,   426,   313,   513,   575,   569,   579,   609,   -16,
    -782,  -782,   559,  2915,   632,  -782,  -782,  -782,   604,  4671,
    3039,    15,  3448,  -782,  -782,   612,   635,   635,    86,  -782,
     354,   452,   377,  3448,  -782,  -782,   629,  -782,  -782,   669,
    -782,  -782,   405,  -782,   656,  3728,  -782,   327,   395,  3926,
    -782,  -782,   405,  -782,  -782,  -782,   534,   327,   327,   667,
     537,   466,  -782,  -782,  -782,   105,   105,   105,   105,  3161,
    -782,  3161,  -782,  -782,  -782,   677,   652,   564,  3571,  3571,
    4671,  -782,   226,  3898,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,   406,  -782,  -782,  4293,  4671,   406,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  4671,  3161,
    -782,  -782,  4671,  4671,  4671,  4671,  4671,  4671,  4671,  4671,
    4671,  4671,  4671,  4671,  4671,  4671,  4671,  4671,  4671,  4671,
    4371,  -782,  4671,   398,   398,  1804,  1928,  1994,  1994,  -782,
     679,  -782,  -782,  -782,  -782,  -782,   686,  -782,  -782,   683,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,   710,   713,   712,  -782,
    -782,   586,  3284,   711,  -782,    -9,    50,  3448,  3448,  -782,
    4671,  -782,  -782,  -782,  -782,   103,  -782,   128,  -782,   458,
     723,  3448,  3448,  -782,  -782,    60,   724,  1212,  -782,   656,
     550,   656,  3813,  3926,  -782,   574,   574,  -782,  -782,  -782,
    -782,  -782,   577,   691,   691,   691,   691,   717,   731,  4393,
     405,  -782,  -782,   733,   734,   739,   743,   744,   745,  3898,
    -782,  -782,  -782,   614,  -782,   273,  -782,  -782,   746,  -782,
    -782,  -782,   161,   161,   450,   450,   426,   426,   426,   426,
     313,   313,   513,   575,   569,   579,   609,  4671,   104,  -782,
     124,  3610,  -782,  -782,  -782,  -782,  -782,  -782,   469,  3830,
    -782,  -782,  -782,  -782,  2872,   748,   632,   757,  -782,   766,
    3039,  4471,  -782,  4671,  -782,   105,  -782,   747,  -782,   105,
    -782,   747,  -782,   379,  -782,   312,  -782,   762,   765,  3448,
    -782,  -782,  -782,   374,  -782,  -782,   767,   782,  3448,   802,
    -782,  -782,   768,   789,  4671,  4671,   769,   795,   774,   204,
    4037,   798,   800,   780,   781,  1374,  -782,  -782,  -782,  -782,
     317,   317,  2176,  2300,   783,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   785,   803,  -782,
     887,   656,   805,   105,   105,  -782,  4193,  -782,  -782,  -782,
    -782,   807,   807,  -782,  -782,  -782,   806,   474,  3571,  3571,
    -782,   327,  -782,  -782,  -782,  4671,  -782,   807,  -782,  4671,
    3610,   105,   105,   105,   105,  3830,   105,   105,  -782,  -782,
    -782,  -782,  -782,  -782,   712,  -782,   623,  -782,  -782,  -782,
    -782,  -782,  -782,   105,   105,  -782,  -782,   810,  -782,  -782,
    -782,   811,  -782,  -782,  4671,    25,   796,  -782,  4671,  4037,
    4671,   818,   850,  4671,  4671,   824,  2748,   825,   838,   839,
     841,   842,   843,   844,   858,   105,  -782,   866,   463,   868,
    -782,   691,   691,   846,  -782,  4671,   449,  -782,  -782,  4549,
     225,  -782,  -782,  -782,  -782,   865,  4193,  1556,  -782,   801,
     873,   874,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   626,  4671,  4037,
    -782,   852,  -782,   190,  -782,   879,   630,   636,   405,  2713,
    4037,   463,   -19,   881,   463,  -782,  -782,  -782,  4115,   198,
    -782,  -782,  -782,  4671,  -782,  -782,  -782,   878,  -782,  -782,
    -782,  -782,  4037,   860,  -782,  4671,  -782,  4671,  4037,  4037,
    -782,   405,  -782,    -3,   883,    40,   861,   885,  -782,   520,
    4671,   330,   221,  -782,  -782,  4037,   864,   663,   946,  -782,
    1212,  -782,    40,   867,  3039,    38,   888,   908,  -782,  -782,
     889,  -782,   882,  4671,  -782,  -782,  4671,   890,  4037,   906,
    1212,   892,  -782,   909,  4671,    40,    40,  -782,   357,   910,
     919,  -782,  -782,  -782,   915,    40,   463,   670,   899,  -782,
    -782,  4037,  -782,   900,    89,  -782,   463,  -782,   463,  4671,
     616,   924,   904,   924,   685,   463,   632,  -782,   616,  -782,
     926,   632,  -782
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     2,     1,   153,   162,   158,   175,   160,     0,
     154,   150,   156,   151,   189,    96,   161,   157,   164,   167,
     155,    99,   152,   338,   125,     0,     0,     9,   165,   170,
     102,   623,   624,   625,   524,   525,   149,   171,    97,    98,
       0,   105,   106,   107,   103,   104,   168,   169,   138,   139,
     140,   100,   101,   159,     4,     8,     5,    10,    12,    15,
       6,    52,    60,    58,     0,     0,     0,     0,    87,    91,
      92,    93,    95,    74,    79,    75,    80,    76,    81,    78,
      83,   132,     0,    77,    82,   145,    84,   112,   163,   166,
     119,   172,   173,   174,    19,   320,   321,   323,   328,   326,
     327,   322,   336,    29,   339,    94,     0,     7,     0,     0,
     268,   269,     0,   181,   182,   521,     0,   223,     0,     0,
     195,   196,     0,     0,     0,     0,   324,   340,    11,    53,
       0,     0,   519,     0,   519,     0,   302,     0,     0,    68,
     297,   299,   301,   304,   305,   300,   310,   298,    30,    70,
     298,    31,   123,    86,    89,   129,   142,    90,   109,   117,
      62,    32,   126,    88,   133,   146,    85,   113,   120,    64,
      33,   110,   111,   114,   108,   115,     0,   118,     0,   121,
     116,   124,   127,   122,   130,   131,   134,   135,   128,     0,
     143,   144,   147,   148,   141,   332,     0,   331,   335,     0,
     599,     0,   203,     0,     0,   188,   522,   233,   235,     0,
     231,     0,     0,   228,   203,     0,     0,   202,   330,   337,
     345,   325,   341,   377,     0,   389,     0,     0,     0,     0,
       0,     0,   520,    61,     0,    59,   332,   351,   303,   350,
     318,     0,     0,     0,     0,     0,     0,   306,   313,   601,
     601,   601,   601,    55,    57,     0,   420,   412,   407,   408,
     411,   409,   410,     0,     0,     0,   422,   462,   463,   464,
     465,   466,   467,   460,   459,     0,     0,     0,     0,   270,
     272,    79,    80,    81,    83,    82,     0,   415,   416,   425,
     414,   419,   418,   443,   426,   427,   428,   429,   430,   431,
     432,   468,   453,   452,   451,   450,     0,   449,     0,   470,
     474,   477,   480,   485,   488,   490,   492,   494,   496,   498,
     501,   516,     0,   352,     0,   354,   468,   518,     0,     0,
     526,     0,   176,   203,   203,     0,   237,   237,     0,   221,
       0,     0,     0,   190,   203,   203,     0,   329,   346,     0,
      13,   384,   378,   379,     0,     0,   298,   322,     0,     0,
      62,    64,   377,   390,    66,    72,     0,   308,   315,     0,
       0,     0,   307,   314,   602,   519,   519,   519,   519,   422,
     447,   422,   444,   445,   461,     0,     0,     0,     0,     0,
       0,   456,   332,   357,   271,   349,   347,   348,   273,   136,
     413,     0,   438,   439,     0,     0,     0,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   503,     0,   422,
     458,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     0,   245,   249,   247,   251,    75,    80,   353,
     239,   241,   244,   243,   333,   267,   343,   265,   355,     0,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   533,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,     0,   527,   530,   600,
     209,     0,     0,     0,   204,     0,     0,   179,   183,   203,
       0,   234,   236,   224,   232,     0,   222,     0,   226,     0,
       0,   193,   197,   203,   382,     0,     0,    18,   380,     0,
       0,     0,     0,     0,    16,   601,   601,   319,   309,   317,
     316,   311,     0,   274,   274,   274,   274,     0,     0,     0,
     377,   423,   417,     0,     0,     0,     0,     0,     0,   358,
     359,   437,   434,     0,   441,     0,   436,   502,     0,   471,
     472,   473,   475,   476,   478,   479,   483,   484,   481,   482,
     486,   487,   489,   491,   493,   495,   497,     0,     0,   517,
     332,   357,   255,   253,   246,   261,   259,   250,   332,   357,
     257,   248,   263,   252,     0,     0,     0,     0,   356,     0,
       0,     0,   528,     0,   208,   519,   215,   218,   207,   519,
     217,   218,   177,     0,   206,     0,   205,     0,     0,   186,
     238,   225,   229,     0,   227,   191,     0,     0,   200,     0,
     381,    14,     0,     0,     0,   514,     0,     0,     0,     0,
     514,     0,     0,   420,   125,     0,   388,    34,    37,   386,
       0,     0,     0,     0,     0,   387,   365,   366,   385,   367,
     368,   369,   370,   398,   399,   400,   401,     0,   515,   371,
       0,     0,     0,   519,   519,   312,     0,    69,    71,    63,
      65,   448,     0,   283,   469,   384,     0,     0,     0,     0,
     363,   361,   362,   360,   435,     0,   433,   457,   500,     0,
     358,   519,   519,   519,   519,   358,   519,   519,   240,   242,
     334,   266,   344,   523,   530,   531,     0,   220,   212,   214,
     219,   210,   216,   519,   519,   180,   184,     0,   230,   194,
     198,     0,   383,   405,     0,     0,     0,   404,   514,   514,
       0,     0,     0,     0,     0,     0,     0,   298,    48,   298,
      49,    62,    50,    64,    51,   519,   391,     0,     0,     0,
      17,   274,   274,   420,   283,     0,     0,   275,   276,     0,
       0,   288,   286,   287,   280,     0,   281,   514,   424,     0,
       0,     0,   364,   442,   499,   256,   254,   262,   260,   258,
     264,   529,   532,   211,   213,   187,   201,     0,     0,   514,
     406,     0,   375,     0,   402,     0,     0,     0,   377,     0,
     514,     0,   609,     0,     0,    67,    73,   296,     0,     0,
     292,   293,   277,     0,   285,   289,   440,   282,   376,   455,
     454,   421,   514,     0,   373,   514,   403,     0,   514,   514,
     384,   377,   372,     0,     0,   610,     0,     0,   278,     0,
       0,   294,     0,   284,   394,   514,     0,     0,   392,   395,
      35,   384,   610,     0,     0,     0,   608,   611,   612,   603,
       0,   279,     0,     0,   290,   374,   514,     0,   514,     0,
      38,     0,   604,     0,     0,   610,     0,   605,   295,     0,
       0,   396,   393,    36,     0,   610,     0,     0,   607,   613,
     291,   514,    39,     0,     0,   614,     0,   397,   616,     0,
     618,   606,     0,   617,     0,     0,     0,   615,   619,   621,
     620,     0,   622
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -782,  -782,  -782,  -782,  -782,  -782,   954,  -782,  -782,  -782,
    -782,   633,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,     6,   -27,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,     4,     0,     5,    -2,    43,
     813,  -782,  -782,  -782,  -782,  -782,    -1,  -305,     1,  -782,
       2,  -782,     3,    76,  -782,  -782,    10,    16,    31,   147,
    -782,  -782,    57,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,   173,  -782,  -782,  -782,   350,   345,   355,  -500,  -782,
    -184,  -292,  -782,  -782,   671,  -782,  -782,   380,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -622,    48,    34,
    -359,  -781,   201,  -782,   213,  -782,  -782,   208,  -782,  -782,
     -50,  -782,  -782,     8,   -35,  -782,   -65,  -782,  -211,   138,
    -782,    36,  -782,  -782,  -782,   -92,  -782,  -782,  -782,    27,
    -782,    23,  -782,  -782,  -782,  -258,   206,  -782,   -75,  -372,
    -225,  -461,  -782,   634,  -564,  -782,   672,  -782,  -689,  -782,
     235,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -191,  -782,  -782,  -782,  -782,  -782,  -782,   292,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,   387,   535,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -110,   340,   343,   329,   339,   596,
     600,   595,   602,   608,  -782,  -185,   126,  -782,  -628,  -170,
    -273,   364,   269,    61,  -782,  -782,  -782,   299,  -617,  -782,
    1046,  -186,  -782,   200,  -661,  -782,   131,  -782,   110,  -782,
    -782,    58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    54,    55,    56,    57,   130,   556,   131,
     712,   350,    58,    59,   686,   785,   919,   786,   934,   687,
     688,   689,    61,   176,   178,   135,   133,    62,   251,   252,
     565,    63,   249,   250,   566,   226,   279,   228,   280,   153,
      68,    69,    70,    71,    72,    73,   281,    75,   282,    77,
     283,    79,   284,    81,    82,    83,   285,    85,    86,    87,
      88,    89,    90,    91,   112,   533,   203,   657,   204,   658,
     335,   767,    92,   119,   550,   215,   666,   216,   667,   346,
     771,   332,   534,   535,   536,   645,   649,   759,   646,    93,
     209,   210,   336,   337,   541,   449,   450,   451,   452,   453,
     742,   741,   746,   744,   743,   747,   456,   457,   694,   286,
     717,   807,   808,   815,   816,   809,   810,   811,   812,   813,
     139,   140,   141,   142,   143,   144,   145,   146,   244,   126,
      95,    96,    97,    98,    99,   237,   323,   635,   100,   357,
     102,   124,   104,   324,   637,   590,   395,   454,   239,   396,
     397,   695,   696,   697,   351,   352,   353,   555,   557,   698,
     230,   699,   700,   701,   702,   703,   704,   705,   706,   287,
     288,   289,   290,   291,   292,   386,   726,   293,   294,   295,
     296,   297,   298,   299,   300,   593,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   418,   707,   708,
     328,   231,   232,   105,   106,   526,   527,   642,   528,   107,
     374,   375,   709,   853,   906,   907,   908,   952,   951,   884,
     960,   710
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    74,    65,    76,    78,    80,    64,    66,    60,   197,
     331,   327,    84,   129,   751,   149,   725,   400,   447,   322,
     587,   394,   398,   754,   125,   103,   198,   340,   341,   101,
     366,   197,   650,   400,   370,   867,   817,   439,    67,    74,
      65,    76,    78,    80,    64,    66,   544,   776,   198,   127,
      84,   400,   123,   101,    23,   113,   459,   117,   653,     3,
     109,   122,   120,   103,   376,   377,   378,   101,   115,   885,
     115,   440,   243,   248,   400,   115,   257,   889,   132,   838,
     654,   529,   156,   165,    25,   902,   189,   148,   151,   161,
     170,   101,   101,   101,   101,    26,   387,   157,   166,   191,
     193,   200,   242,   924,   157,   174,   157,   180,   157,   183,
     157,   188,   904,   839,   157,   194,   171,   655,   177,   134,
     181,   207,   184,   159,   168,   400,   190,   669,   208,   229,
      74,   227,    76,    78,    80,   -24,   246,   225,   207,   656,
      94,    84,   155,   164,   327,   208,   247,   760,   222,   670,
     841,   760,   101,   650,   949,   185,   187,   543,   549,    23,
     572,   127,   205,   207,   123,   101,   213,   588,   391,   217,
     208,   442,   199,   122,   661,   206,   243,   149,    94,   206,
     243,   373,   206,   110,   365,   624,   627,   631,   633,   620,
     111,   900,   739,   115,   110,   115,   196,   129,   421,   662,
     621,   111,   147,   150,   160,   169,   242,    34,    35,   387,
     242,   387,   920,   158,   167,   718,   719,   720,   116,   782,
     172,   175,   229,    74,   227,    76,    78,    80,   229,    74,
     227,    76,    78,    80,    84,   595,   363,   422,   202,   110,
      84,   921,   423,   424,   156,   165,   111,   896,   587,   387,
      34,    35,   890,   544,   372,   544,   587,   442,   201,   157,
     166,    34,    35,   221,   938,   197,  -178,   660,   123,   222,
     618,   891,   123,   101,   943,   913,   114,   122,   118,   876,
     780,   122,   198,   121,   880,   159,   168,   923,   930,   243,
     248,   392,   211,   206,   914,   218,   165,   863,   196,   806,
     385,   193,   393,   214,   155,   164,   243,   109,   109,   109,
     109,  -192,   599,   600,   601,   864,   338,   901,   842,   242,
     339,   446,    74,   444,   448,    78,    80,   443,   445,   447,
     532,   733,   531,    84,   959,   223,   242,   168,   110,   962,
     442,   532,   238,   531,   195,   111,   736,    23,   366,   220,
     370,   196,    23,   562,   136,   327,   164,   563,   -20,   136,
     187,   429,   430,   247,   356,   356,   360,   361,   -25,   364,
     757,   544,   356,   212,   233,   158,   167,   354,   874,   713,
     714,   560,   137,   235,   221,   560,   -21,   343,   355,   882,
     122,   589,   236,   138,   122,   588,   431,   432,   123,   196,
     643,   775,  -290,   588,  -290,    34,    35,   122,   -26,   207,
     253,   894,   207,   577,    23,   578,   208,   898,   899,   208,
    -290,   545,   583,   584,   347,   546,   348,   167,   175,  -291,
      23,  -291,   738,    23,   915,   -22,   115,   115,   115,   115,
     136,   110,   855,   856,   358,   768,   -27,  -291,   111,   591,
     369,   622,   625,   598,   596,   359,   -23,   932,   327,   -28,
     358,   156,   165,   620,   401,   402,   403,   643,   197,   724,
     196,   359,   427,   428,   621,  -342,   157,   166,   157,   180,
     947,   647,   733,   254,   860,   198,   404,   733,   329,   327,
     177,   861,   330,   405,   243,   406,   243,   373,   234,   257,
     572,    23,   159,   168,    23,   333,   537,   538,   240,   256,
     257,   258,   259,   260,   261,   262,   585,   551,   552,   547,
     349,   155,   164,   548,   242,   663,   242,   425,   426,   664,
     594,   241,   859,   367,   628,   532,   532,   531,   531,   381,
     334,   196,   138,  -185,   597,   629,   195,   219,   165,   532,
     532,   531,   531,   196,   824,   693,    74,   691,    76,    78,
      80,   690,   692,   433,   434,   873,   342,    84,   619,   344,
     372,    23,   369,   568,   569,   391,   369,   345,   136,  -199,
     277,   623,   626,   630,   632,   242,   560,   893,   560,   168,
     892,   911,   158,   167,   368,   122,   384,   122,   586,   236,
     567,   354,   236,   571,   837,   647,   196,   852,   164,   196,
     843,   388,   355,   846,   847,   236,   219,   912,   389,   740,
     327,    23,   196,   109,   109,   441,   442,   745,   136,   247,
     582,   442,   446,    74,   444,   448,    78,    80,   443,   445,
     929,   149,   236,   715,    84,   390,   243,   560,   399,   196,
     435,   354,   400,   327,   436,   560,   122,   532,   129,   531,
     883,   438,   355,   852,   122,   437,   532,   455,   531,   356,
     651,    31,    32,    33,   643,   644,   242,   458,   327,   167,
     734,   735,   539,   229,    74,   227,    76,    78,    80,   832,
     735,    23,   872,   442,   905,    84,   878,   442,   240,   553,
     221,   221,   879,   442,   554,   327,   115,   897,   156,   165,
     115,   905,   659,   788,   790,   792,   794,   101,   101,   101,
     101,   559,   580,   157,   166,   540,   668,   781,   327,   917,
     442,   326,   355,   570,   905,   905,   945,   442,   560,   573,
     574,   575,   576,   579,   905,   944,   634,   122,   372,   159,
     168,   957,   442,   636,   937,   950,   638,   950,   606,   607,
     608,   609,   820,   821,   958,   602,   603,   594,   155,   164,
     604,   605,   610,   611,   115,   115,   639,   641,   369,   954,
     640,   716,   652,   721,   229,    74,   227,    76,    78,    80,
     380,   651,   225,   356,   665,   671,    84,   722,   382,   383,
     727,   728,   115,   115,   115,   115,   729,   115,   115,   730,
     731,   732,   737,   326,   750,   693,    74,   691,    76,    78,
      80,   690,   692,   752,   115,   115,   586,    84,   787,   789,
     791,   793,   753,   765,   586,   643,   766,   772,   769,   158,
     167,   420,   814,   326,   401,   402,   403,   229,    74,   227,
      76,    78,    80,   770,   774,   363,   115,   773,   777,    84,
     778,   823,   779,   783,   326,   784,   404,   869,  -268,  -269,
     442,   795,   818,   405,   796,   406,   800,   723,   221,   154,
     163,   835,   836,   221,   845,   840,   154,   173,   154,   179,
     154,   182,   154,   186,   848,   -40,   154,   192,   693,    74,
     691,    76,    78,    80,   690,   692,    15,   844,   -44,   -41,
      84,   -45,   -42,   -46,   -43,   797,     4,    21,   693,    74,
     691,    76,    78,    80,   690,   692,    10,    11,   -47,    13,
      84,   851,    15,   854,   857,   814,   866,   822,   163,   870,
     871,   875,   814,    21,   877,   893,    22,   886,   895,   903,
     909,   910,   798,   916,   918,   928,   922,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   926,   925,   933,   927,   931,
     935,    30,   936,   940,   814,   941,   942,   946,   948,    34,
      35,   955,   956,   961,   128,   564,    38,    39,   763,    41,
      42,    43,   -54,    44,    45,   764,   762,    30,   542,   758,
     862,    51,    52,   761,   749,    34,    35,   858,   865,   819,
     581,   849,    38,    39,   558,    41,    42,    43,   756,    44,
      45,   612,   614,     4,     5,     6,   613,    51,    52,     8,
     615,   154,   163,    10,    11,    12,    13,   616,   108,    15,
      16,    17,    18,   831,   887,    19,    20,   939,   953,   163,
      21,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,   326,     0,   801,   802,     0,
       0,     0,     0,    10,    11,     0,    13,     0,     0,    15,
       0,     0,     0,   163,   173,   179,   182,   186,   192,     0,
      21,     0,     0,    22,     0,   825,   826,   827,   828,     0,
     829,   830,     0,     0,   326,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,     0,   833,   834,     0,
       0,     0,    34,    35,     0,     0,     0,     0,    37,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,     0,   326,     0,    51,    52,    53,     0,     0,   850,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,   326,    38,
      39,     0,    41,    42,    43,     0,    44,    45,     0,     0,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     4,     5,     6,     7,   672,
     326,     8,   673,   674,     9,    10,    11,    12,    13,   675,
      14,    15,    16,    17,    18,   676,   677,    19,    20,   678,
     679,   255,    21,   680,   681,    22,   682,   683,   257,   258,
     259,   260,   261,   262,   684,     0,   263,   264,   154,   163,
     154,   179,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,   266,     0,     0,
       0,     0,   580,     0,     0,     0,     0,   267,   268,   269,
     270,   271,   272,     0,     0,     0,     0,     0,     0,     0,
       0,  -514,     0,     0,    28,    29,    30,   273,   274,    31,
      32,    33,     0,     0,    34,    35,   275,   276,   277,    36,
      37,    38,    39,   685,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,    53,     0,
     326,     0,     0,     0,     0,   163,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,     0,   163,   163,     4,     5,     6,
       7,   417,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,   326,    19,
      20,     0,   163,   255,    21,     0,     0,    22,     0,   256,
     257,   258,   259,   260,   261,   262,    24,     0,   263,   264,
       0,     0,     0,     0,     0,   326,   265,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,   266,
      10,    11,     0,    13,     0,     0,    15,     0,   326,   267,
     268,   269,   270,   271,   272,     0,     0,    21,     0,     0,
      22,     0,     0,     0,     0,     0,    28,    29,    30,   273,
     274,     0,     0,     0,     0,     0,    34,    35,   275,   276,
     277,    36,    37,    38,    39,   278,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,   154,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -56,     0,     0,     0,
       0,    30,     0,   799,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,     0,     0,    38,    39,     0,    41,
      42,    43,     0,    44,    45,     0,     0,     0,     0,     0,
       0,    51,    52,   163,     0,     0,     0,     0,   163,     4,
       5,     6,     7,   672,     0,     8,   673,   674,     9,    10,
      11,    12,    13,   675,    14,    15,    16,    17,    18,   676,
     677,    19,    20,   678,   679,   255,    21,   680,   681,    22,
     682,   683,   257,   258,   259,   260,   261,   262,   684,     0,
     263,   264,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,   580,   868,     0,     0,
       0,   267,   268,   269,   270,   271,   272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,   273,   274,    31,    32,    33,     0,     0,    34,    35,
     275,   276,   277,    36,    37,    38,    39,   685,    41,    42,
      43,     0,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,    53,     4,     5,     6,     7,     0,     0,     8,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,     0,     0,     0,
      21,     0,     0,    22,     0,    23,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    10,    11,     0,    13,     0,    26,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    27,
       0,    22,    28,    29,    30,     0,     0,    31,    32,    33,
       0,     0,    34,    35,     0,     0,     0,    36,    37,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,    53,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,    30,     0,    21,     0,     0,    22,     0,    23,
      34,    35,     0,     0,     0,    36,   152,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,    51,    52,     0,     0,     0,     5,     6,   628,
       0,     0,     8,     0,     0,     0,   196,     0,    12,     0,
     629,     0,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
      53,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,    28,    29,    30,    21,     0,
       0,    22,     0,    23,     0,    34,    35,     0,     0,     0,
     162,    37,    38,    39,     0,    41,    42,    43,     0,    44,
      45,    46,    47,     0,     0,     0,     0,    51,    52,    53,
       0,     0,     0,   628,     0,     0,     0,     4,     0,     0,
     196,     0,     0,     0,   629,     0,     0,    10,    11,     0,
      13,     0,     0,    15,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,    21,     0,     0,    22,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,    53,     4,     5,     6,     7,     0,
       0,     8,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,     0,    23,    30,     0,
       0,     0,     0,     0,    24,     0,    34,    35,     0,     0,
       0,     0,     0,    38,    39,     0,    41,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,    25,    51,    52,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,    53,     4,
       5,     6,     7,     0,     0,     8,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,    30,     0,    21,     0,     0,    22,
       0,    23,    34,    35,     0,     0,     0,     0,   152,    38,
      39,     0,    41,    42,    43,     0,    44,    45,     0,     0,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      15,     0,     0,    36,    37,    38,    39,     0,    41,    42,
      43,    21,    44,    45,    46,    47,     0,    48,    49,    50,
      51,    52,    53,     4,     5,     6,     7,     0,     0,     8,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
      16,    17,    18,     0,     0,    19,    20,     0,    30,     0,
      21,     0,     0,    22,     0,    23,    34,    35,     0,     0,
       0,    36,   162,    38,    39,     0,    41,    42,    43,     0,
      44,    45,     0,     0,     0,    30,     0,     0,    51,    52,
       0,     0,     0,    34,    35,    25,     0,     0,     0,     0,
      38,    39,     0,    41,    42,    43,    26,    44,    45,     0,
       0,     0,     0,     0,     0,    51,    52,     0,     0,     0,
       0,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,    53,     4,     5,     6,
       7,     0,     0,     8,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,    21,     0,     0,    22,     0,    23,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
      53,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,    23,     0,     0,     0,     0,     0,     0,
     162,     0,     4,     5,     6,     7,     0,     0,     8,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,     0,   358,    19,    20,     0,     0,     0,    21,
       0,     0,    22,     0,   359,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,   362,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,    37,    38,    39,
     224,    41,    42,    43,     0,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,    53,     4,     5,     6,     7,
       0,     0,     8,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,     0,    21,     0,     0,    22,     0,     0,     0,
       0,     4,     5,     6,     7,    24,     0,     8,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,     0,     0,    19,    20,     0,     0,     0,    21,     0,
       0,    22,     0,   881,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,     0,     0,
      36,    37,    38,    39,   224,    41,    42,    43,     0,    44,
      45,    46,    47,     0,    48,    49,    50,    51,    52,    53,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,   224,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,    53,     4,     5,     6,     7,     0,
       0,     8,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     4,     5,
       6,     7,     0,     0,     8,     0,   748,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,     0,    21,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    41,    42,    43,
       0,    44,    45,    46,    47,     0,    48,    49,    50,    51,
      52,    53,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     493,   494,   495,   496,   497,   498,   499,   500,   501,     0,
       0,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,     5,     6,     7,     0,     0,
       8,     0,     0,     9,     0,     0,    12,     0,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
     255,    21,     0,     0,     0,     0,   256,   257,   258,   259,
     260,   261,   262,    24,     0,   263,   264,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,   268,   269,   270,
     271,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,   273,   274,     0,     0,
       0,     0,     0,    34,    35,   275,   276,   277,    36,    37,
      38,    39,   278,    41,    42,    43,     0,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,    53,     5,     6,
       7,     0,     0,     8,     0,     0,     9,     0,     0,    12,
       0,     0,    14,    15,    16,    17,    18,     0,     0,    19,
      20,     0,     0,     0,    21,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   643,   648,     0,     0,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    41,    42,    43,     0,
      44,    45,    46,    47,     0,    48,    49,    50,    51,    52,
      53,     5,     6,     7,     0,     0,     8,     0,     0,     9,
       0,     0,    12,     0,     0,    14,    15,    16,    17,    18,
       0,     0,    19,    20,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
       0,     0,     5,     6,     7,     0,     0,     8,     0,     0,
       9,     0,     0,    12,     0,     0,    14,    15,    16,    17,
      18,     0,   392,    19,    20,     0,     0,     0,    21,   196,
       0,     0,     0,   393,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    41,
      42,    43,     0,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,    53,     0,     0,     0,   530,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      41,    42,    43,     0,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,    53,     5,     6,     7,     0,     0,
       8,     0,     0,     9,     0,     0,    12,     0,     0,    14,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,   620,     0,     0,    36,    37,
      38,    39,   196,    41,    42,    43,   621,    44,    45,    46,
      47,    15,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,    21,     0,    30,     0,     0,    23,     0,     0,
       0,     0,    34,    35,   136,     0,     0,     0,     0,    38,
      39,     0,    41,    42,    43,     0,    44,    45,     0,     0,
      15,     0,     0,     0,    51,    52,     0,   245,     0,     0,
       0,    21,     0,     0,     0,     0,    23,    15,   138,     0,
       0,     0,     0,   136,     0,     0,     0,     0,    21,     0,
       0,     0,     0,    23,     0,     0,    30,     0,     0,     0,
     136,     0,     0,     0,    34,    35,   371,     0,     0,     0,
       0,    38,    39,     0,    41,    42,    43,   138,    44,    45,
       0,     0,     0,   561,     0,     0,    51,    52,     0,     0,
       0,     0,     0,     0,   355,    30,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,     0,     0,
      38,    39,    30,    41,    42,    43,     0,    44,    45,     0,
      34,    35,    15,     0,     0,    51,    52,    38,    39,     0,
      41,    42,    43,    21,    44,    45,     0,     0,    23,    15,
       0,     0,    51,    52,     0,   136,     0,     0,     0,     0,
      21,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,   711,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,   355,
      23,     0,     0,     0,     0,   628,     0,     0,     0,     0,
       0,     0,   196,     0,     0,     0,   629,    30,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    15,     0,     0,
      25,     0,    38,    39,    30,    41,    42,    43,    21,    44,
      45,    26,    34,    35,     0,     0,     0,    51,    52,    38,
      39,     0,    41,    42,    43,    15,    44,    45,     0,    30,
       0,     0,     0,     0,    51,    52,    21,    34,    35,     0,
       0,    23,     0,   392,    38,    39,     0,    41,    42,    43,
     196,    44,    45,     0,   393,     0,     0,     0,     0,    51,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,    30,     0,     0,     0,     0,     0,     0,     0,
      34,    35,   359,     0,     0,     0,     0,    38,    39,     0,
      41,    42,    43,     0,    44,    45,     0,     0,     0,     0,
      30,     0,    51,    52,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,     0,    38,    39,     0,    41,    42,
      43,     0,    44,    45,   672,     0,     0,   673,   674,     0,
      51,    52,     0,     0,   675,     0,     0,     0,     0,     0,
     676,   677,     0,     0,   678,   679,   255,     0,   680,   681,
       0,   682,   683,   257,   258,   259,   260,   261,   262,   111,
       0,   263,   264,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,   580,     0,     0,
       0,     0,   267,   268,   269,   270,   271,   272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   274,    31,    32,    33,     0,     0,     0,
       0,   275,   276,   277,   255,     0,     0,     0,   278,     0,
     803,   257,   258,   259,   260,   261,   262,     0,     0,   263,
     264,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,     0,   804,   888,   805,     0,   806,
     267,   268,   269,   270,   271,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,   274,     0,     0,     0,     0,     0,     0,     0,   275,
     276,   277,   255,     0,     0,     0,   278,     0,   803,   257,
     258,   259,   260,   261,   262,     0,     0,   263,   264,     0,
       0,     0,     0,     0,     0,   265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,     0,   804,     0,   805,     0,   806,   267,   268,
     269,   270,   271,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,   274,
       0,     0,     0,     0,     0,     0,     0,   275,   276,   277,
     255,     0,     0,     0,   278,     0,   256,   257,   258,   259,
     260,   261,   262,     0,     0,   263,   264,     0,     0,     0,
       0,     0,   255,   265,     0,     0,     0,     0,   256,   257,
     258,   259,   260,   261,   262,     0,   266,   263,   264,     0,
       0,     0,     0,     0,   325,   265,   267,   268,   269,   270,
     271,   272,     0,     0,     0,     0,     0,     0,   266,   592,
       0,     0,     0,     0,     0,     0,   273,   274,   267,   268,
     269,   270,   271,   272,     0,   275,   276,   277,     0,     0,
       0,     0,   278,     0,     0,     0,     0,     0,   273,   274,
       0,     0,     0,     0,     0,     0,     0,   275,   276,   277,
     255,     0,     0,     0,   278,     0,   256,   257,   258,   259,
     260,   261,   262,     0,     0,   263,   264,     0,     0,     0,
       0,     0,   255,   265,     0,     0,     0,     0,   256,   257,
     258,   259,   260,   261,   262,     0,   266,   263,   264,     0,
       0,     0,     0,     0,     0,   265,   267,   268,   269,   270,
     271,   272,     0,     0,     0,     0,     0,     0,   266,   617,
       0,     0,     0,   723,     0,     0,   273,   274,   267,   268,
     269,   270,   271,   272,     0,   275,   276,   277,     0,     0,
       0,     0,   278,     0,     0,     0,     0,     0,   273,   274,
       0,     0,     0,     0,     0,     0,     0,   275,   276,   277,
     255,     0,     0,     0,   278,     0,   256,   257,   258,   259,
     260,   261,   262,     0,     0,   263,   264,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,   755,     0,     0,
       0,     0,     0,     0,     0,     0,   267,   268,   269,   270,
     271,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,   274,     0,     0,
       0,     0,     0,     0,     0,   275,   276,   277,   255,     0,
       0,     0,   278,     0,   256,   257,   258,   259,   260,   261,
     262,     0,     0,   263,   264,     0,     0,     0,     0,     0,
     255,   265,     0,     0,     0,     0,   256,   257,   258,   259,
     260,   261,   262,     0,   266,   263,   264,     0,     0,   804,
       0,     0,     0,   265,   267,   268,   269,   270,   271,   272,
       0,     0,     0,     0,     0,     0,   379,     0,     0,     0,
       0,     0,     0,     0,   273,   274,   267,   268,   269,   270,
     271,   272,     0,   275,   276,   277,     0,     0,     0,     0,
     278,     0,     0,     0,     0,     0,   273,   274,     0,     0,
       0,     0,     0,     0,     0,   275,   276,   277,   255,     0,
       0,     0,   278,     0,   256,   257,   258,   259,   260,   261,
     262,     0,     0,   263,   264,     0,     0,     0,     0,     0,
     255,   265,     0,     0,     0,     0,   256,   257,   258,   259,
     260,   261,   262,     0,   381,   263,   264,     0,     0,     0,
       0,     0,     0,   265,   267,   268,   269,   270,   271,   272,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,   273,   274,   267,   268,   269,   270,
     271,   272,     0,   275,   276,   277,     0,     0,     0,     0,
     278,     0,     0,     0,     0,     0,   273,   274,     0,     0,
       0,     0,     0,     0,     0,   275,   276,   277,   255,     0,
       0,     0,   278,     0,   256,   257,   258,   259,   260,   261,
     262,     0,     0,   263,   264,     0,     0,     0,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   419,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,   268,   269,   270,   271,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,   274,     0,     0,     0,     0,
       0,     0,     0,   275,   276,   277,     0,     0,     0,     0,
     278
};

static const yytype_int16 yycheck[] =
{
       2,     2,     2,     2,     2,     2,     2,     2,     2,   101,
     201,   196,     2,    40,   636,    65,   580,    36,   323,   189,
     392,   279,   280,   640,    26,     2,   101,   211,   212,     2,
     241,   123,   532,    36,   245,   816,   725,    53,    40,    40,
      40,    40,    40,    40,    40,    40,   338,   675,   123,    26,
      40,    36,    25,    26,    35,     7,   329,     9,    67,     0,
       2,    25,    14,    40,   250,   251,   252,    40,     7,    88,
       9,    87,   137,   138,    36,    14,    36,   858,    67,    54,
      89,    66,    66,    67,    65,    88,    65,    64,    65,    66,
      67,    64,    65,    66,    67,    76,   266,    66,    67,    83,
      84,    89,   137,    65,    73,    74,    75,    76,    77,    78,
      79,    80,    72,    88,    83,    84,    73,    67,    75,    67,
      77,    35,    79,    66,    67,    36,    83,    67,    42,   131,
     131,   131,   131,   131,   131,    70,   138,   131,    35,    89,
       2,   131,    66,    67,   329,    42,   138,   647,   125,    89,
     778,   651,   125,   653,    65,    79,    80,    71,   342,    35,
     371,   138,   114,    35,   137,   138,   118,   392,   278,   121,
      42,    67,    65,   137,    71,   114,   241,   227,    40,   118,
     245,   246,   121,    35,   234,   443,   444,   445,   446,    65,
      42,   880,    88,   132,    35,   134,    72,   224,   308,    71,
      76,    42,    64,    65,    66,    67,   241,   102,   103,   379,
     245,   381,   901,    66,    67,   574,   575,   576,    70,   680,
      73,    74,   224,   224,   224,   224,   224,   224,   230,   230,
     230,   230,   230,   230,   224,   405,   230,    76,    70,    35,
     230,   902,    81,    82,   228,   229,    42,   875,   620,   419,
     102,   103,    54,   545,   246,   547,   628,    67,    65,   228,
     229,   102,   103,   125,   925,   357,    70,   540,   241,   246,
     440,    73,   245,   246,   935,    54,     7,   241,     9,    89,
      76,   245,   357,    14,   848,   228,   229,   904,   916,   354,
     355,    65,    70,   232,    73,    66,   280,    72,    72,    74,
     266,   285,    76,    70,   228,   229,   371,   249,   250,   251,
     252,    70,   422,   423,   424,    90,    67,   881,   779,   354,
      71,   323,   323,   323,   323,   323,   323,   323,   323,   634,
     332,   589,   332,   323,   956,    70,   371,   280,    35,   961,
      67,   343,   136,   343,    65,    42,    73,    35,   559,    66,
     561,    72,    35,   355,    42,   540,   280,   359,    70,    42,
     284,    48,    49,   355,   226,   227,   228,   229,    70,   231,
     643,   663,   234,    70,    89,   228,   229,    65,   839,   565,
     566,   354,    65,    89,   246,   358,    70,   214,    76,   850,
     354,   393,    65,    76,   358,   620,    83,    84,   371,    72,
      88,   674,    72,   628,    74,   102,   103,   371,    70,    35,
      89,   872,    35,   379,    35,   381,    42,   878,   879,    42,
      90,    67,   388,   389,   218,    71,   220,   280,   281,    72,
      35,    74,   617,    35,   895,    70,   375,   376,   377,   378,
      42,    35,   801,   802,    65,    71,    70,    90,    42,   401,
     244,   443,   444,   419,   406,    76,    70,   918,   643,    70,
      65,   445,   446,    65,    43,    44,    45,    88,   560,   579,
      72,    76,    46,    47,    76,    35,   445,   446,   447,   448,
     941,   531,   740,    89,    35,   560,    65,   745,    72,   674,
     447,    42,    65,    72,   559,    74,   561,   562,   134,    36,
     711,    35,   445,   446,    35,    70,   333,   334,    42,    35,
      36,    37,    38,    39,    40,    41,   390,   344,   345,    67,
     115,   445,   446,    71,   559,    67,   561,    77,    78,    71,
     404,    65,   805,    66,    65,   537,   538,   537,   538,    65,
      70,    72,    76,    70,   418,    76,    65,    66,   532,   551,
     552,   551,   552,    72,   739,   557,   557,   557,   557,   557,
     557,   557,   557,    50,    51,   838,    70,   557,   442,    70,
     562,    35,   366,   367,   368,   685,   370,    70,    42,    70,
     106,   443,   444,   445,   446,   620,   559,    67,   561,   532,
     863,    71,   445,   446,    66,   559,    35,   561,   392,    65,
      66,    65,    65,    66,   774,   655,    72,   798,   532,    72,
     780,    65,    76,   783,   784,    65,    66,   890,    65,   621,
     805,    35,    72,   565,   566,    66,    67,   629,    42,   621,
      66,    67,   634,   634,   634,   634,   634,   634,   634,   634,
     913,   691,    65,    66,   634,    65,   711,   620,    66,    72,
      75,    65,    36,   838,    85,   628,   620,   659,   685,   659,
     851,    52,    76,   854,   628,    86,   668,    35,   668,   531,
     532,    97,    98,    99,    88,    89,   711,    73,   863,   532,
      66,    67,    70,   685,   685,   685,   685,   685,   685,    66,
      67,    35,    66,    67,   885,   685,    66,    67,    42,    70,
     562,   563,    66,    67,    35,   890,   645,   877,   692,   693,
     649,   902,   539,   690,   691,   692,   693,   690,   691,   692,
     693,    65,    70,   692,   693,    90,   553,   679,   913,    66,
      67,   196,    76,    66,   925,   926,    66,    67,   711,   375,
     376,   377,   378,    66,   935,   936,    67,   711,   740,   692,
     693,    66,    67,    67,   924,   946,    73,   948,   429,   430,
     431,   432,   728,   729,   955,   425,   426,   641,   692,   693,
     427,   428,   433,   434,   713,   714,    66,    65,   572,   949,
      67,    90,    71,    66,   786,   786,   786,   786,   786,   786,
     255,   653,   786,   655,    71,    71,   786,    66,   263,   264,
      67,    67,   741,   742,   743,   744,    67,   746,   747,    66,
      66,    66,    66,   278,    66,   817,   817,   817,   817,   817,
     817,   817,   817,    66,   763,   764,   620,   817,   690,   691,
     692,   693,    66,    71,   628,    88,    71,    35,    71,   692,
     693,   306,   716,   308,    43,    44,    45,   849,   849,   849,
     849,   849,   849,    71,    65,   849,   795,    89,    89,   849,
      65,   735,    88,    65,   329,    65,    65,    66,    88,    88,
      67,    88,    66,    72,    89,    74,    71,    70,   740,    66,
      67,    71,    71,   745,    34,    89,    73,    74,    75,    76,
      77,    78,    79,    80,    70,    70,    83,    84,   900,   900,
     900,   900,   900,   900,   900,   900,    19,    89,    70,    70,
     900,    70,    70,    70,    70,    28,     3,    30,   920,   920,
     920,   920,   920,   920,   920,   920,    13,    14,    70,    16,
     920,    65,    19,    65,    88,   809,    71,   731,   125,    66,
      66,    89,   816,    30,    65,    67,    33,    66,    88,    66,
      89,    66,    65,    89,     8,    73,    89,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,    67,    88,    71,    89,    89,
      88,    94,    73,    73,   858,    66,    71,    88,    88,   102,
     103,    67,    88,    67,    40,   362,   109,   110,   653,   112,
     113,   114,    89,   116,   117,   655,   651,    94,   337,   645,
     809,   124,   125,   649,   634,   102,   103,   804,   810,   727,
     386,   786,   109,   110,   352,   112,   113,   114,   641,   116,
     117,   435,   437,     3,     4,     5,   436,   124,   125,     9,
     438,   228,   229,    13,    14,    15,    16,   439,     2,    19,
      20,    21,    22,   754,   854,    25,    26,   926,   948,   246,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,   540,    -1,   713,   714,    -1,
      -1,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,    19,
      -1,    -1,    -1,   280,   281,   282,   283,   284,   285,    -1,
      30,    -1,    -1,    33,    -1,   741,   742,   743,   744,    -1,
     746,   747,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    -1,    -1,   763,   764,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,    -1,   617,    -1,   124,   125,   126,    -1,    -1,   795,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,   643,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,
      -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   674,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
     685,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,   445,   446,
     447,   448,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   739,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     805,    -1,    -1,    -1,    -1,   532,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   838,    -1,   562,   563,     3,     4,     5,
       6,    90,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,   863,    25,
      26,    -1,   589,    29,    30,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,   890,    52,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      13,    14,    -1,    16,    -1,    -1,    19,    -1,   913,    75,
      76,    77,    78,    79,    80,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,   692,   693,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,   710,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   740,    -1,    -1,    -1,    -1,   745,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    13,    14,    -1,    16,    -1,    76,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    89,
      -1,    33,    92,    93,    94,    -1,    -1,    97,    98,    99,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    94,    -1,    30,    -1,    -1,    33,    -1,    35,
     102,   103,    -1,    -1,    -1,   107,    42,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,     4,     5,    65,
      -1,    -1,     9,    -1,    -1,    -1,    72,    -1,    15,    -1,
      76,    -1,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    92,    93,    94,    30,    -1,
      -1,    33,    -1,    35,    -1,   102,   103,    -1,    -1,    -1,
      42,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    65,    -1,    -1,    -1,     3,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    13,    14,    -1,
      16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    30,    -1,    -1,    33,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    35,    94,    -1,
      -1,    -1,    -1,    -1,    42,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    65,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    94,    -1,    30,    -1,    -1,    33,
      -1,    35,   102,   103,    -1,    -1,    -1,    -1,    42,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,
      -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      19,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
     114,    30,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    94,    -1,
      30,    -1,    -1,    33,    -1,    35,   102,   103,    -1,    -1,
      -1,   107,    42,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,    -1,    -1,    -1,    94,    -1,    -1,   124,   125,
      -1,    -1,    -1,   102,   103,    65,    -1,    -1,    -1,    -1,
     109,   110,    -1,   112,   113,   114,    76,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    -1,    65,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    70,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    42,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    54,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    65,    25,    26,    -1,    -1,    -1,    30,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    65,    -1,    -1,   107,   108,
     109,   110,    72,   112,   113,   114,    76,   116,   117,   118,
     119,    19,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    30,    -1,    94,    -1,    -1,    35,    -1,    -1,
      -1,    -1,   102,   103,    42,    -1,    -1,    -1,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,    -1,    -1,
      19,    -1,    -1,    -1,   124,   125,    -1,    65,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    35,    19,    76,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    94,    -1,    -1,    -1,
      42,    -1,    -1,    -1,   102,   103,    65,    -1,    -1,    -1,
      -1,   109,   110,    -1,   112,   113,   114,    76,   116,   117,
      -1,    -1,    -1,    65,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
     109,   110,    94,   112,   113,   114,    -1,   116,   117,    -1,
     102,   103,    19,    -1,    -1,   124,   125,   109,   110,    -1,
     112,   113,   114,    30,   116,   117,    -1,    -1,    35,    19,
      -1,    -1,   124,   125,    -1,    42,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    76,
      35,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    19,    -1,    -1,
      65,    -1,   109,   110,    94,   112,   113,   114,    30,   116,
     117,    76,   102,   103,    -1,    -1,    -1,   124,   125,   109,
     110,    -1,   112,   113,   114,    19,   116,   117,    -1,    94,
      -1,    -1,    -1,    -1,   124,   125,    30,   102,   103,    -1,
      -1,    35,    -1,    65,   109,   110,    -1,   112,   113,   114,
      72,   116,   117,    -1,    76,    -1,    -1,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    76,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,    -1,    -1,    -1,    -1,
      94,    -1,   124,   125,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,     7,    -1,    -1,    10,    11,    -1,
     124,   125,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,   105,   106,    29,    -1,    -1,    -1,   111,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    29,    -1,    -1,    -1,   111,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    29,    52,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    65,    44,    45,    -1,
      -1,    -1,    -1,    -1,    73,    52,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    75,    76,
      77,    78,    79,    80,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    29,    52,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    65,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    65,    88,
      -1,    -1,    -1,    70,    -1,    -1,    95,    96,    75,    76,
      77,    78,    79,    80,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      29,    -1,    -1,    -1,   111,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,
      -1,    -1,   111,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      29,    52,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    65,    44,    45,    -1,    -1,    70,
      -1,    -1,    -1,    52,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    75,    76,    77,    78,
      79,    80,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,
      -1,    -1,   111,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      29,    52,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    65,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    75,    76,    77,    78,
      79,    80,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    29,    -1,
      -1,    -1,   111,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,
     111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   130,   131,     0,     3,     4,     5,     6,     9,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    25,
      26,    30,    33,    35,    42,    65,    76,    89,    92,    93,
      94,    97,    98,    99,   102,   103,   107,   108,   109,   110,
     111,   112,   113,   114,   116,   117,   118,   119,   121,   122,
     123,   124,   125,   126,   132,   133,   134,   135,   141,   142,
     150,   151,   156,   160,   164,   165,   166,   167,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   201,   218,   258,   259,   260,   261,   262,   263,
     267,   268,   269,   270,   271,   342,   343,   348,   349,   360,
      35,    42,   193,   237,   341,   342,    70,   237,   341,   202,
     237,   341,   260,   268,   270,   167,   258,   270,   135,   151,
     136,   138,    67,   155,    67,   154,    42,    65,    76,   249,
     250,   251,   252,   253,   254,   255,   256,   258,   270,   249,
     258,   270,    42,   168,   169,   182,   186,   187,   188,   191,
     258,   270,    42,   169,   182,   186,   187,   188,   191,   258,
     270,   168,   188,   169,   187,   188,   152,   168,   153,   169,
     187,   168,   169,   187,   168,   182,   169,   182,   187,    65,
     168,   186,   169,   186,   187,    65,    72,   264,   277,    65,
      89,    65,    70,   195,   197,   237,   342,    35,    42,   219,
     220,    70,    70,   237,    70,   204,   206,   237,    66,    66,
      66,   258,   270,    70,   111,   150,   164,   165,   166,   167,
     289,   340,   341,    89,   340,    89,    65,   264,   275,   277,
      42,    65,   253,   255,   257,    65,   167,   252,   255,   161,
     162,   157,   158,    89,    89,    29,    35,    36,    37,    38,
      39,    40,    41,    44,    45,    52,    65,    75,    76,    77,
      78,    79,    80,    95,    96,   104,   105,   106,   111,   165,
     167,   175,   177,   179,   181,   185,   238,   298,   299,   300,
     301,   302,   303,   306,   307,   308,   309,   310,   311,   312,
     313,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   338,   265,   272,    73,   315,   334,   339,    72,
      65,   299,   210,    70,    70,   199,   221,   222,    67,    71,
     219,   219,    70,   210,    70,    70,   208,   275,   275,   115,
     140,   283,   284,   285,    65,    76,   258,   268,    65,    76,
     258,   258,    70,   150,   258,   249,   257,    66,    66,   275,
     257,    65,   252,   255,   349,   350,   350,   350,   350,    65,
     315,    65,   315,   315,    35,   238,   304,   338,    65,    65,
      65,   323,    65,    76,   274,   275,   278,   279,   274,    66,
      36,    43,    44,    45,    65,    72,    74,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    90,   336,    65,
     315,   323,    76,    81,    82,    77,    78,    46,    47,    48,
      49,    83,    84,    50,    51,    75,    85,    86,    52,    53,
      87,    66,    67,   164,   165,   166,   167,   176,   177,   224,
     225,   226,   227,   228,   276,    35,   235,   236,    73,   339,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   344,   345,   347,    66,
      89,   165,   167,   194,   211,   212,   213,   210,   210,    70,
      90,   223,   223,    71,   220,    67,    71,    67,    71,   219,
     203,   210,   210,    70,    35,   286,   137,   287,   285,    65,
     268,    65,   167,   167,   140,   159,   163,    66,   275,   275,
      66,    66,   257,   340,   340,   340,   340,   238,   238,    66,
      70,   282,    66,   238,   238,   335,   275,   278,   279,   167,
     274,   237,    66,   314,   335,   338,   237,   335,   238,   323,
     323,   323,   324,   324,   325,   325,   326,   326,   326,   326,
     327,   327,   328,   329,   330,   331,   332,    88,   338,   335,
      65,    76,   252,   258,   274,   252,   258,   274,    65,    76,
     258,   274,   258,   274,    67,   266,    67,   273,    73,    66,
      67,    65,   346,    88,    89,   214,   217,   249,    89,   215,
     217,   258,    71,    67,    89,    67,    89,   196,   198,   210,
     339,    71,    71,    67,    71,    71,   205,   207,   210,    67,
      89,    71,     7,    10,    11,    17,    23,    24,    27,    28,
      31,    32,    34,    35,    42,   111,   143,   148,   149,   150,
     164,   165,   166,   167,   237,   280,   281,   282,   288,   290,
     291,   292,   293,   294,   295,   296,   297,   337,   338,   351,
     360,    65,   139,   350,   350,    66,    90,   239,   239,   239,
     239,    66,    66,    70,   323,   283,   305,    67,    67,    67,
      66,    66,    66,   274,    66,    67,    73,    66,   334,    88,
     167,   230,   229,   233,   232,   167,   231,   234,    54,   226,
      66,   236,    66,    66,   347,    66,   314,   339,   340,   216,
     217,   340,   216,   215,   214,    71,    71,   200,    71,    71,
      71,   209,    35,    89,    65,   339,   337,    89,    65,    88,
      76,   237,   280,    65,    65,   144,   146,   258,   270,   258,
     270,   258,   270,   258,   270,    88,    89,    28,    65,   169,
      71,   340,   340,    35,    70,    72,    74,   240,   241,   244,
     245,   246,   247,   248,   335,   242,   243,   287,    66,   306,
     238,   238,   275,   335,   334,   340,   340,   340,   340,   340,
     340,   346,    66,   340,   340,    71,    71,   338,    54,    88,
      89,   337,   280,   338,    89,    34,   338,   338,    70,   289,
     340,    65,   299,   352,    65,   239,   239,    88,   243,   339,
      35,    42,   241,    72,    90,   246,    71,   240,    71,    66,
      66,    66,    66,   339,   280,    89,    89,    65,    66,    66,
     283,    70,   280,   299,   358,    88,    66,   352,    71,   240,
      54,    73,   339,    67,   280,    88,   337,   338,   280,   280,
     287,   283,    88,    66,    72,   299,   353,   354,   355,    89,
      66,    71,   339,    54,    73,   280,    89,    66,     8,   145,
     287,   353,    89,   347,    65,    88,    67,    89,    73,   339,
     337,    89,   280,    71,   147,    88,    73,   338,   353,   355,
      73,    66,    71,   353,   299,    66,    88,   280,    88,    65,
     299,   357,   356,   357,   338,    67,    88,    66,   299,   236,
     359,    67,   236
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   130,   131,   131,   132,   132,   132,   132,   133,
     134,   134,   136,   137,   135,   138,   139,   135,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   144,   145,   143,   146,   147,   143,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   149,   150,   150,   152,   151,   153,   151,   154,   151,
     155,   151,   157,   156,   158,   156,   159,   156,   161,   160,
     162,   160,   163,   160,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   169,   169,   169,   170,   170,   170,   171,
     171,   171,   172,   172,   172,   173,   173,   173,   174,   174,
     174,   174,   175,   175,   175,   175,   176,   176,   176,   177,
     177,   177,   178,   178,   178,   179,   179,   179,   180,   180,
     180,   180,   181,   181,   181,   181,   182,   182,   183,   183,
     183,   184,   184,   184,   184,   185,   185,   185,   185,   186,
     187,   187,   187,   187,   187,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     190,   190,   191,   191,   191,   193,   194,   192,   195,   196,
     192,   192,   197,   198,   192,   199,   200,   192,   192,   202,
     203,   201,   204,   205,   201,   201,   206,   207,   201,   208,
     209,   201,   201,   210,   210,   211,   211,   211,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   216,   216,
     217,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   219,   219,   221,   220,   222,   220,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   227,   227,   227,
     227,   227,   227,   229,   228,   230,   228,   231,   228,   232,
     228,   233,   228,   234,   228,   235,   235,   236,   237,   237,
     238,   238,   238,   238,   239,   239,   240,   240,   241,   241,
     241,   242,   242,   243,   243,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   247,   247,   248,   249,   249,   250,
     251,   251,   252,   252,   252,   253,   253,   253,   254,   254,
     255,   255,   255,   255,   255,   256,   256,   256,   257,   257,
     258,   259,   259,   260,   260,   260,   261,   261,   261,   261,
     262,   263,   265,   266,   264,   267,   268,   268,   269,   270,
     270,   270,   272,   273,   271,   271,   271,   274,   274,   274,
     275,   275,   276,   276,   277,   277,   277,   278,   278,   278,
     278,   279,   279,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   281,   281,   281,   281,   282,   283,   283,   284,
     284,   285,   286,   286,   287,   287,   288,   288,   288,   289,
     289,   290,   291,   291,   291,   292,   292,   292,   293,   293,
     293,   293,   294,   294,   295,   296,   297,   298,   298,   298,
     298,   298,   299,   299,   300,   300,   300,   300,   300,   300,
     301,   302,   304,   305,   303,   306,   306,   306,   306,   306,
     306,   306,   306,   307,   308,   308,   309,   310,   311,   312,
     313,   314,   314,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   316,   317,   318,   319,   319,   320,
     320,   321,   322,   322,   322,   322,   322,   322,   323,   323,
     324,   324,   324,   324,   325,   325,   325,   326,   326,   326,
     327,   327,   327,   327,   327,   328,   328,   328,   329,   329,
     330,   330,   331,   331,   332,   332,   333,   333,   334,   334,
     334,   335,   335,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   337,   337,   338,   338,   339,   340,
     340,   341,   341,   342,   343,   343,   344,   344,   345,   345,
     346,   346,   346,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   348,
     349,   350,   350,   351,   351,   351,   352,   352,   352,   352,
     353,   353,   354,   354,   355,   355,   356,   356,   357,   357,
     358,   359,   359,   360,   360,   360
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     6,     0,     0,     7,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     0,     0,     7,     0,     0,     8,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     6,     0,     6,     0,     8,     0,     6,
       0,     6,     0,     8,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     4,     4,     1,     1,
       1,     2,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     6,     0,     0,
       7,     2,     0,     0,     7,     0,     0,     8,     3,     0,
       0,     6,     0,     0,     7,     2,     0,     0,     7,     0,
       0,     8,     3,     0,     2,     2,     2,     2,     2,     1,
       3,     4,     3,     4,     2,     1,     2,     1,     0,     1,
       2,     4,     5,     2,     5,     6,     5,     6,     3,     6,
       7,     1,     3,     0,     3,     0,     3,     0,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     3,     1,     1,     1,
       1,     2,     1,     2,     0,     2,     1,     2,     3,     4,
       1,     1,     2,     0,     3,     2,     1,     1,     1,     2,
       3,     5,     2,     2,     3,     5,     2,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     3,     3,     4,
       1,     4,     5,     2,     3,     3,     4,     4,     1,     3,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     4,
       3,     2,     0,     0,     5,     2,     1,     3,     1,     1,
       2,     3,     0,     0,     6,     3,     4,     1,     1,     1,
       1,     1,     0,     1,     2,     3,     4,     1,     2,     2,
       3,     3,     3,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     6,     3,     4,     0,     1,     1,
       2,     3,     1,     3,     0,     2,     1,     1,     1,     1,
       2,     2,     5,     7,     5,     5,     7,     9,     1,     1,
       1,     1,     3,     4,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     6,     0,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     6,     6,     2,     4,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     0,
       1,     1,     2,     6,     1,     1,     0,     1,     2,     4,
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     0,     1,     5,     6,     6,     7,     5,     3,     1,
       0,     1,     1,     3,     4,     7,     0,     1,     1,     3,
       9,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 12:
#line 284 "c.y"
                           { ReenterScope(subparser); }
#line 3094 "c.tab.c"
    break;

  case 13:
#line 284 "c.y"
                                                                                         { ExitScope(subparser); }
#line 3100 "c.tab.c"
    break;

  case 15:
#line 285 "c.y"
                               { ReenterScope(subparser); }
#line 3106 "c.tab.c"
    break;

  case 16:
#line 285 "c.y"
                                                                                                             { ExitScope(subparser); }
#line 3112 "c.tab.c"
    break;

  case 19:
#line 299 "c.y"
                               { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3118 "c.tab.c"
    break;

  case 20:
#line 301 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3127 "c.tab.c"
    break;

  case 21:
#line 306 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3136 "c.tab.c"
    break;

  case 22:
#line 311 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3145 "c.tab.c"
    break;

  case 23:
#line 316 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3154 "c.tab.c"
    break;

  case 24:
#line 321 "c.y"
                                                         { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3160 "c.tab.c"
    break;

  case 25:
#line 323 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3169 "c.tab.c"
    break;

  case 26:
#line 328 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3178 "c.tab.c"
    break;

  case 27:
#line 333 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3187 "c.tab.c"
    break;

  case 28:
#line 338 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3196 "c.tab.c"
    break;

  case 29:
#line 345 "c.y"
                                { bindFunDef(subparser, null, getNodeAt(subparser, 1)); }
#line 3202 "c.tab.c"
    break;

  case 30:
#line 347 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3211 "c.tab.c"
    break;

  case 31:
#line 352 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3220 "c.tab.c"
    break;

  case 32:
#line 357 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3229 "c.tab.c"
    break;

  case 33:
#line 362 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3238 "c.tab.c"
    break;

  case 34:
#line 372 "c.y"
                                 { ReenterScope(subparser); }
#line 3244 "c.tab.c"
    break;

  case 35:
#line 372 "c.y"
                                                                                                                             { ExitScope(subparser); }
#line 3250 "c.tab.c"
    break;

  case 37:
#line 373 "c.y"
                                     { ReenterScope(subparser); }
#line 3256 "c.tab.c"
    break;

  case 38:
#line 373 "c.y"
                                                                                                                                                 { ExitScope(subparser); }
#line 3262 "c.tab.c"
    break;

  case 40:
#line 378 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3271 "c.tab.c"
    break;

  case 41:
#line 383 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3280 "c.tab.c"
    break;

  case 42:
#line 388 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3289 "c.tab.c"
    break;

  case 43:
#line 393 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3298 "c.tab.c"
    break;

  case 44:
#line 399 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3307 "c.tab.c"
    break;

  case 45:
#line 404 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3316 "c.tab.c"
    break;

  case 46:
#line 409 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3325 "c.tab.c"
    break;

  case 47:
#line 414 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3334 "c.tab.c"
    break;

  case 48:
#line 422 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3343 "c.tab.c"
    break;

  case 49:
#line 427 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3352 "c.tab.c"
    break;

  case 50:
#line 432 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3361 "c.tab.c"
    break;

  case 51:
#line 437 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindFunDef(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3370 "c.tab.c"
    break;

  case 54:
#line 481 "c.y"
                                { KillReentrantScope(subparser); }
#line 3376 "c.tab.c"
    break;

  case 56:
#line 482 "c.y"
                           { KillReentrantScope(subparser); }
#line 3382 "c.tab.c"
    break;

  case 58:
#line 483 "c.y"
                        { KillReentrantScope(subparser); }
#line 3388 "c.tab.c"
    break;

  case 60:
#line 484 "c.y"
                               { KillReentrantScope(subparser); }
#line 3394 "c.tab.c"
    break;

  case 62:
#line 492 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3403 "c.tab.c"
    break;

  case 64:
#line 497 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3412 "c.tab.c"
    break;

  case 66:
#line 502 "c.y"
        {
          // reuses saved base type
          bindIdent(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 1));
        }
#line 3421 "c.tab.c"
    break;

  case 68:
#line 510 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3430 "c.tab.c"
    break;

  case 70:
#line 515 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 3439 "c.tab.c"
    break;

  case 72:
#line 520 "c.y"
        {
          // reuses saved base type
          bindIdent(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 1));
        }
#line 3448 "c.tab.c"
    break;

  case 84:
#line 543 "c.y"
                     {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3458 "c.tab.c"
    break;

  case 85:
#line 548 "c.y"
                                         {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3469 "c.tab.c"
    break;

  case 86:
#line 554 "c.y"
                                                        {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3480 "c.tab.c"
    break;

  case 87:
#line 563 "c.y"
                      {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3490 "c.tab.c"
    break;

  case 88:
#line 568 "c.y"
                                          {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3501 "c.tab.c"
    break;

  case 91:
#line 583 "c.y"
        {
          getSpecsAt(subparser, 1).add(Constants.ATT_CONSTANT);
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3512 "c.tab.c"
    break;

  case 92:
#line 590 "c.y"
        {
          getSpecsAt(subparser, 1).add(Constants.ATT_VOLATILE);
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3523 "c.tab.c"
    break;

  case 93:
#line 597 "c.y"
        {
          getSpecsAt(subparser, 1).add(Constants.ATT_RESTRICT);
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3534 "c.tab.c"
    break;

  case 94:
#line 604 "c.y"
        {
          /* TODO AttributeSpecifier */
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3545 "c.tab.c"
    break;

  case 95:
#line 611 "c.y"
        {
          getSpecsAt(subparser, 1).add(Constants.ATT_INLINE);
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3556 "c.tab.c"
    break;

  case 108:
#line 644 "c.y"
                                         {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3567 "c.tab.c"
    break;

  case 109:
#line 650 "c.y"
                                                 {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3578 "c.tab.c"
    break;

  case 110:
#line 656 "c.y"
                                                         {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3589 "c.tab.c"
    break;

  case 111:
#line 662 "c.y"
                                                  {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3600 "c.tab.c"
    break;

  case 112:
#line 672 "c.y"
        {
          // TUTORIAL: a semantic action that sets the semantic value
          // to a new typebuilder by adding a property derived from
          // the child semantic value(s)
          TypeBuilder tb = getTypeBuilderAt(subparser, 1);
          setTypeBuilder(value, tb);

          updateSpecs(subparser,  // candidate for removal
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3616 "c.tab.c"
    break;

  case 113:
#line 683 "c.y"
                                          {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3627 "c.tab.c"
    break;

  case 114:
#line 689 "c.y"
                                           {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3638 "c.tab.c"
    break;

  case 115:
#line 696 "c.y"
        {
          // TUTORIAL: a semantic action that sets the semantic value
          // to a new typebuilder by adding a property derived from
          // the child semantic value(s)

          // get the semantic values of each child
          TypeBuilder basicTypeSpecifier = getTypeBuilderAt(subparser, 2);
          TypeBuilder basicTypeName = getTypeBuilderAt(subparser, 1);

          // combine the partial type specs
          TypeBuilder tb = basicTypeSpecifier.combine(basicTypeName);
          
          setTypeBuilder(value, tb);

          updateSpecs(subparser,  // candidate for removal
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3662 "c.tab.c"
    break;

  case 141:
#line 768 "c.y"
                                         {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3673 "c.tab.c"
    break;

  case 142:
#line 774 "c.y"
                                                  {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3684 "c.tab.c"
    break;

  case 143:
#line 780 "c.y"
                                                          {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3695 "c.tab.c"
    break;

  case 144:
#line 786 "c.y"
                                                    {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3706 "c.tab.c"
    break;

  case 145:
#line 795 "c.y"
                       {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3716 "c.tab.c"
    break;

  case 146:
#line 800 "c.y"
                                           {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3727 "c.tab.c"
    break;

  case 147:
#line 806 "c.y"
                                            {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3738 "c.tab.c"
    break;

  case 148:
#line 812 "c.y"
                                             {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 3749 "c.tab.c"
    break;

  case 149:
#line 821 "c.y"
                          { getSpecsAt(subparser, 1).type = InternalT.VA_LIST; }
#line 3755 "c.tab.c"
    break;

  case 150:
#line 825 "c.y"
                    { getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_TYPEDEF; }
#line 3761 "c.tab.c"
    break;

  case 151:
#line 826 "c.y"
                    { getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_EXTERN; }
#line 3767 "c.tab.c"
    break;

  case 152:
#line 827 "c.y"
                    { getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_STATIC; }
#line 3773 "c.tab.c"
    break;

  case 153:
#line 828 "c.y"
                    { getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_AUTO; }
#line 3779 "c.tab.c"
    break;

  case 154:
#line 829 "c.y"
                    { getSpecsAt(subparser, 1).storage = Constants.ATT_STORAGE_REGISTER; }
#line 3785 "c.tab.c"
    break;

  case 155:
#line 833 "c.y"
                          { getSpecsAt(subparser, 1).type = VoidT.TYPE; }
#line 3791 "c.tab.c"
    break;

  case 156:
#line 834 "c.y"
                          { getSpecsAt(subparser, 1).seenChar = true; }
#line 3797 "c.tab.c"
    break;

  case 157:
#line 835 "c.y"
                          { getSpecsAt(subparser, 1).seenShort = true; }
#line 3803 "c.tab.c"
    break;

  case 158:
#line 837 "c.y"
        {
          // TUTORIAL: a semantic action that sets the semantic value
          // to a new typebuilderby adding a property annotation.
          
          // See xtc.type.* for the class hiearchy for types
          TypeBuilder tb = new TypeBuilder(NumberT.INT);
          setTypeBuilder(value, tb);
          
          getSpecsAt(subparser, 1).seenInt = true;  // candidate for removal
        }
#line 3818 "c.tab.c"
    break;

  case 159:
#line 847 "c.y"
                          { getSpecsAt(subparser, 1).seenInt = true; }
#line 3824 "c.tab.c"
    break;

  case 160:
#line 849 "c.y"
        {
          // TUTORIAL: a semantic action that sets the semantic value
          // to a new typebuilderby adding a property annotation.
          
          // See xtc.type.* for the class hiearchy for types
          TypeBuilder tb = new TypeBuilder(NumberT.LONG);
          setTypeBuilder(value, tb);
          
          getSpecsAt(subparser, 1).longCount++;  // candidate for removal
        }
#line 3839 "c.tab.c"
    break;

  case 161:
#line 859 "c.y"
                          { getSpecsAt(subparser, 1).seenFloat = true; }
#line 3845 "c.tab.c"
    break;

  case 162:
#line 860 "c.y"
                          { getSpecsAt(subparser, 1).seenDouble = true; }
#line 3851 "c.tab.c"
    break;

  case 163:
#line 861 "c.y"
                          { getSpecsAt(subparser, 1).seenSigned = true; }
#line 3857 "c.tab.c"
    break;

  case 164:
#line 862 "c.y"
                          { getSpecsAt(subparser, 1).seenUnsigned = true; }
#line 3863 "c.tab.c"
    break;

  case 165:
#line 863 "c.y"
                          { getSpecsAt(subparser, 1).seenBool = true; }
#line 3869 "c.tab.c"
    break;

  case 166:
#line 864 "c.y"
                          { getSpecsAt(subparser, 1).seenComplex = true; }
#line 3875 "c.tab.c"
    break;

  case 175:
#line 885 "c.y"
               { EnterScope(subparser); }
#line 3881 "c.tab.c"
    break;

  case 176:
#line 886 "c.y"
                                { ExitScope(subparser); }
#line 3887 "c.tab.c"
    break;

  case 177:
#line 888 "c.y"
        {
          Node tag     = null;
          Node members = getNodeAt(subparser, 3);
          Node attrs   = null;
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 3900 "c.tab.c"
    break;

  case 178:
#line 896 "c.y"
                                         { EnterScope(subparser); }
#line 3906 "c.tab.c"
    break;

  case 179:
#line 897 "c.y"
                                { ExitScope(subparser); }
#line 3912 "c.tab.c"
    break;

  case 180:
#line 899 "c.y"
        {
          Node tag     = getNodeAt(subparser, 6);
          Node members = getNodeAt(subparser, 3);
          Node attrs   = null;
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 3925 "c.tab.c"
    break;

  case 182:
#line 908 "c.y"
                                        { EnterScope(subparser); }
#line 3931 "c.tab.c"
    break;

  case 183:
#line 909 "c.y"
                                { ExitScope(subparser); }
#line 3937 "c.tab.c"
    break;

  case 184:
#line 911 "c.y"
        {
          Node tag     = null;
          Node members = getNodeAt(subparser, 3);
          Node attrs   = getNodeAt(subparser, 6);
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 3950 "c.tab.c"
    break;

  case 185:
#line 919 "c.y"
                                                                { EnterScope(subparser); }
#line 3956 "c.tab.c"
    break;

  case 186:
#line 920 "c.y"
                                { ExitScope(subparser); }
#line 3962 "c.tab.c"
    break;

  case 187:
#line 922 "c.y"
        {
          Node tag     = getNodeAt(subparser, 6);
          Node members = getNodeAt(subparser, 3);
          Node attrs   = getNodeAt(subparser, 7);
          updateSpecs(subparser,
                      makeStructSpec(subparser, tag, members, attrs),
                      value);
        }
#line 3975 "c.tab.c"
    break;

  case 189:
#line 934 "c.y"
              { EnterScope(subparser); }
#line 3981 "c.tab.c"
    break;

  case 190:
#line 935 "c.y"
                                { ExitScope(subparser); }
#line 3987 "c.tab.c"
    break;

  case 192:
#line 937 "c.y"
                                        { EnterScope(subparser); }
#line 3993 "c.tab.c"
    break;

  case 193:
#line 938 "c.y"
                                { ExitScope(subparser); }
#line 3999 "c.tab.c"
    break;

  case 196:
#line 941 "c.y"
                                       { EnterScope(subparser); }
#line 4005 "c.tab.c"
    break;

  case 197:
#line 942 "c.y"
                                { ExitScope(subparser); }
#line 4011 "c.tab.c"
    break;

  case 199:
#line 944 "c.y"
                                                               { EnterScope(subparser); }
#line 4017 "c.tab.c"
    break;

  case 200:
#line 945 "c.y"
                                { ExitScope(subparser); }
#line 4023 "c.tab.c"
    break;

  case 203:
#line 956 "c.y"
        {
          ((Node) value).setProperty(SPECS, new Specifiers());
        }
#line 4031 "c.tab.c"
    break;

  case 204:
#line 959 "c.y"
                                                  {
          updateSpecs(subparser,
                      getSpecsAt(subparser, 2),
                      getSpecsAt(subparser, 1),
                      value);
        }
#line 4042 "c.tab.c"
    break;

  case 233:
#line 1029 "c.y"
                   { BindEnum(subparser); }
#line 4048 "c.tab.c"
    break;

  case 235:
#line 1030 "c.y"
                      { BindEnum(subparser); }
#line 4054 "c.tab.c"
    break;

  case 253:
#line 1107 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4063 "c.tab.c"
    break;

  case 255:
#line 1112 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4072 "c.tab.c"
    break;

  case 257:
#line 1117 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4081 "c.tab.c"
    break;

  case 259:
#line 1122 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4090 "c.tab.c"
    break;

  case 261:
#line 1127 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4099 "c.tab.c"
    break;

  case 263:
#line 1132 "c.y"
        {
          saveBaseType(subparser, getNodeAt(subparser, 2));
          bindIdent(subparser, getNodeAt(subparser, 2), getNodeAt(subparser, 1));
        }
#line 4108 "c.tab.c"
    break;

  case 267:
#line 1148 "c.y"
                  { BindVar(subparser); }
#line 4114 "c.tab.c"
    break;

  case 324:
#line 1289 "c.y"
        {
          /* setDecl(value, new PointerT(getDecl(getNodeAt(subparser, 1)))); */
          /* copyName(subparser, value, 1); */
        }
#line 4123 "c.tab.c"
    break;

  case 325:
#line 1294 "c.y"
        {
          /* Specifiers spec = getSpecsAt(subparser, 2); */
          /* Type baseType = getDecl(getNodeAt(subparser, 1));; */
          /* Type result = spec.annotateBase(new PointerT(baseType).annotate()); */
          /* setDecl(value, result); */
          /* copyName(subparser, value, 1); */
        }
#line 4135 "c.tab.c"
    break;

  case 330:
#line 1312 "c.y"
        {
          /* copyDeclName(subparser, value, 2); */
        }
#line 4143 "c.tab.c"
    break;

  case 332:
#line 1322 "c.y"
               { EnterScope(subparser); }
#line 4149 "c.tab.c"
    break;

  case 333:
#line 1322 "c.y"
                                                               { ExitReentrantScope(subparser); }
#line 4155 "c.tab.c"
    break;

  case 336:
#line 1330 "c.y"
                         { /* copyDeclName(subparser, value, 1); */ }
#line 4161 "c.tab.c"
    break;

  case 337:
#line 1331 "c.y"
                                                  { /* copyDeclName(subparser, value, 2); */ }
#line 4167 "c.tab.c"
    break;

  case 338:
#line 1336 "c.y"
        {
          /* setDecl(value, lastSeenType(subparser)); */
          /* setName(value, getStringAt(subparser, 1)); */
        }
#line 4176 "c.tab.c"
    break;

  case 342:
#line 1349 "c.y"
                                         { EnterScope(subparser); }
#line 4182 "c.tab.c"
    break;

  case 343:
#line 1349 "c.y"
                                                                                   { ExitReentrantScope(subparser); }
#line 4188 "c.tab.c"
    break;

  case 354:
#line 1373 "c.y"
        {
          /* setDecl(value, new ArrayT(getDecl(getNodeAt(subparser, 1)))); */
          /* copyName(subparser, value, 1); */
        }
#line 4197 "c.tab.c"
    break;

  case 355:
#line 1378 "c.y"
        {
          /* setDecl(value, new ArrayT(getDecl())); */
          /* copyName(subparser, value, 1); */
        }
#line 4206 "c.tab.c"
    break;

  case 420:
#line 1541 "c.y"
                   { useIdent(subparser, getNodeAt(subparser, 1)); }
#line 4212 "c.tab.c"
    break;

  case 422:
#line 1549 "c.y"
               { EnterScope(subparser); }
#line 4218 "c.tab.c"
    break;

  case 423:
#line 1549 "c.y"
                                                            { ExitScope(subparser); }
#line 4224 "c.tab.c"
    break;

  case 434:
#line 1568 "c.y"
                                          { callFunction(subparser, getNodeAt(subparser, 3), null); }
#line 4230 "c.tab.c"
    break;

  case 435:
#line 1569 "c.y"
                                                          { callFunction(subparser, getNodeAt(subparser, 4), getNodeAt(subparser, 2)); }
#line 4236 "c.tab.c"
    break;


#line 4240 "c.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1927 "c.y"


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

/* private static void setName(Object n, String name) { */
/*   ((Node) n).setProperty(NAME, name); */
/* } */

/* private static String getName(Object n) { */
/*   return ((String) ((Node) n).getProperty(NAME)); */
/* } */

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
