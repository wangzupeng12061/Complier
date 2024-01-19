/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "parser.y"

        #include "stdio.h"
        #include "math.h"
        #include "string.h"
        #include "def.h"
        extern int yylineno;
        extern char *yytext;
        extern FILE *yyin;
        int yylex();
        void yyerror(const char* fmt, ...);
        void display(struct ASTNode *,int);
        void displayRoot();

#line 85 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_ERRORID = 6,                    /* ERRORID  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_RELOP = 8,                      /* RELOP  */
  YYSYMBOL_TYPE = 9,                       /* TYPE  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_STRUCT = 11,                    /* STRUCT  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_SWITCH = 14,                    /* SWITCH  */
  YYSYMBOL_CASE = 15,                      /* CASE  */
  YYSYMBOL_COLON = 16,                     /* COLON  */
  YYSYMBOL_DEFAULT = 17,                   /* DEFAULT  */
  YYSYMBOL_STRUCT_VISIT = 18,              /* STRUCT_VISIT  */
  YYSYMBOL_STRUCT_NEW = 19,                /* STRUCT_NEW  */
  YYSYMBOL_STRUCT_DEC = 20,                /* STRUCT_DEC  */
  YYSYMBOL_EXT_STRUCT_DEC = 21,            /* EXT_STRUCT_DEC  */
  YYSYMBOL_CASE_STMT = 22,                 /* CASE_STMT  */
  YYSYMBOL_CASE_STMT_LIST = 23,            /* CASE_STMT_LIST  */
  YYSYMBOL_DEFAULT_STMT = 24,              /* DEFAULT_STMT  */
  YYSYMBOL_FOR_DEC = 25,                   /* FOR_DEC  */
  YYSYMBOL_FOR_EXP1 = 26,                  /* FOR_EXP1  */
  YYSYMBOL_FOR_EXP2 = 27,                  /* FOR_EXP2  */
  YYSYMBOL_FOR_EXP3 = 28,                  /* FOR_EXP3  */
  YYSYMBOL_DPLUS = 29,                     /* DPLUS  */
  YYSYMBOL_LP = 30,                        /* LP  */
  YYSYMBOL_RP = 31,                        /* RP  */
  YYSYMBOL_LC = 32,                        /* LC  */
  YYSYMBOL_RC = 33,                        /* RC  */
  YYSYMBOL_LB = 34,                        /* LB  */
  YYSYMBOL_RB = 35,                        /* RB  */
  YYSYMBOL_SEMI = 36,                      /* SEMI  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_DOT = 38,                       /* DOT  */
  YYSYMBOL_PLUS = 39,                      /* PLUS  */
  YYSYMBOL_MINUS = 40,                     /* MINUS  */
  YYSYMBOL_STAR = 41,                      /* STAR  */
  YYSYMBOL_DIV = 42,                       /* DIV  */
  YYSYMBOL_MOD = 43,                       /* MOD  */
  YYSYMBOL_ASSIGNOP = 44,                  /* ASSIGNOP  */
  YYSYMBOL_PLUSASSIGNOP = 45,              /* PLUSASSIGNOP  */
  YYSYMBOL_MINUSASSIGNOP = 46,             /* MINUSASSIGNOP  */
  YYSYMBOL_STARASSIGNOP = 47,              /* STARASSIGNOP  */
  YYSYMBOL_DIVASSIGNOP = 48,               /* DIVASSIGNOP  */
  YYSYMBOL_MODASSIGNOP = 49,               /* MODASSIGNOP  */
  YYSYMBOL_AND = 50,                       /* AND  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_NOT = 52,                       /* NOT  */
  YYSYMBOL_AUTOPLUS = 53,                  /* AUTOPLUS  */
  YYSYMBOL_AUTOMINUS = 54,                 /* AUTOMINUS  */
  YYSYMBOL_IF = 55,                        /* IF  */
  YYSYMBOL_ELSE = 56,                      /* ELSE  */
  YYSYMBOL_WHILE = 57,                     /* WHILE  */
  YYSYMBOL_BREAK = 58,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_EXT_DEF_LIST = 60,              /* EXT_DEF_LIST  */
  YYSYMBOL_EXT_VAR_DEF = 61,               /* EXT_VAR_DEF  */
  YYSYMBOL_FUNC_DEF = 62,                  /* FUNC_DEF  */
  YYSYMBOL_FUNC_DEC = 63,                  /* FUNC_DEC  */
  YYSYMBOL_EXT_DEC_LIST = 64,              /* EXT_DEC_LIST  */
  YYSYMBOL_PARAM_LIST = 65,                /* PARAM_LIST  */
  YYSYMBOL_PARAM_DEC = 66,                 /* PARAM_DEC  */
  YYSYMBOL_VAR_DEF = 67,                   /* VAR_DEF  */
  YYSYMBOL_DEC_LIST = 68,                  /* DEC_LIST  */
  YYSYMBOL_DEF_LIST = 69,                  /* DEF_LIST  */
  YYSYMBOL_COMP_STM = 70,                  /* COMP_STM  */
  YYSYMBOL_STM_LIST = 71,                  /* STM_LIST  */
  YYSYMBOL_EXP_STMT = 72,                  /* EXP_STMT  */
  YYSYMBOL_IF_THEN = 73,                   /* IF_THEN  */
  YYSYMBOL_IF_THEN_ELSE = 74,              /* IF_THEN_ELSE  */
  YYSYMBOL_FUNC_CALL = 75,                 /* FUNC_CALL  */
  YYSYMBOL_ARGS = 76,                      /* ARGS  */
  YYSYMBOL_FUNCTION = 77,                  /* FUNCTION  */
  YYSYMBOL_PARAM = 78,                     /* PARAM  */
  YYSYMBOL_ARG = 79,                       /* ARG  */
  YYSYMBOL_CALL = 80,                      /* CALL  */
  YYSYMBOL_LABEL = 81,                     /* LABEL  */
  YYSYMBOL_GOTO = 82,                      /* GOTO  */
  YYSYMBOL_JLT = 83,                       /* JLT  */
  YYSYMBOL_JLE = 84,                       /* JLE  */
  YYSYMBOL_JGT = 85,                       /* JGT  */
  YYSYMBOL_JGE = 86,                       /* JGE  */
  YYSYMBOL_EQ = 87,                        /* EQ  */
  YYSYMBOL_NEQ = 88,                       /* NEQ  */
  YYSYMBOL_ARRAY_LIST = 89,                /* ARRAY_LIST  */
  YYSYMBOL_UMINUS = 90,                    /* UMINUS  */
  YYSYMBOL_DMINUS = 91,                    /* DMINUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 92,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_program = 94,                   /* program  */
  YYSYMBOL_ExtDefList = 95,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 96,                    /* ExtDef  */
  YYSYMBOL_Specifier = 97,                 /* Specifier  */
  YYSYMBOL_ExtDecList = 98,                /* ExtDecList  */
  YYSYMBOL_VarDec = 99,                    /* VarDec  */
  YYSYMBOL_Arraylist = 100,                /* Arraylist  */
  YYSYMBOL_FuncDec = 101,                  /* FuncDec  */
  YYSYMBOL_VarList = 102,                  /* VarList  */
  YYSYMBOL_ParamDec = 103,                 /* ParamDec  */
  YYSYMBOL_CompSt = 104,                   /* CompSt  */
  YYSYMBOL_StmList = 105,                  /* StmList  */
  YYSYMBOL_Stmt = 106,                     /* Stmt  */
  YYSYMBOL_DefaultStmt = 107,              /* DefaultStmt  */
  YYSYMBOL_CaseStmt = 108,                 /* CaseStmt  */
  YYSYMBOL_CaseStmtList = 109,             /* CaseStmtList  */
  YYSYMBOL_ForDec = 110,                   /* ForDec  */
  YYSYMBOL_ForExp1 = 111,                  /* ForExp1  */
  YYSYMBOL_ForExp2 = 112,                  /* ForExp2  */
  YYSYMBOL_ForExp3 = 113,                  /* ForExp3  */
  YYSYMBOL_Struct_dec = 114,               /* Struct_dec  */
  YYSYMBOL_StructName = 115,               /* StructName  */
  YYSYMBOL_DefList = 116,                  /* DefList  */
  YYSYMBOL_Def = 117,                      /* Def  */
  YYSYMBOL_DecList = 118,                  /* DecList  */
  YYSYMBOL_Dec = 119,                      /* Dec  */
  YYSYMBOL_Exp = 120,                      /* Exp  */
  YYSYMBOL_Args = 121                      /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    69,    70,    72,    73,    74,    75,    77,
      79,    80,    82,    83,    86,    87,    89,    90,    92,    93,
      95,    98,   100,   101,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   119,   120,   125,   126,   127,
     139,   140,   141,   142,   143,   144,   145,   146,   149,   150,
     152,   154,   155,   160,   161,   163,   164,   167,   168,   169,
     171,   172,   174,   175,   177,   178,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   214,
     215
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "INT", "ID",
  "ERRORID", "STRING", "RELOP", "TYPE", "FLOAT", "STRUCT", "RETURN", "FOR",
  "SWITCH", "CASE", "COLON", "DEFAULT", "STRUCT_VISIT", "STRUCT_NEW",
  "STRUCT_DEC", "EXT_STRUCT_DEC", "CASE_STMT", "CASE_STMT_LIST",
  "DEFAULT_STMT", "FOR_DEC", "FOR_EXP1", "FOR_EXP2", "FOR_EXP3", "DPLUS",
  "LP", "RP", "LC", "RC", "LB", "RB", "SEMI", "COMMA", "DOT", "PLUS",
  "MINUS", "STAR", "DIV", "MOD", "ASSIGNOP", "PLUSASSIGNOP",
  "MINUSASSIGNOP", "STARASSIGNOP", "DIVASSIGNOP", "MODASSIGNOP", "AND",
  "OR", "NOT", "AUTOPLUS", "AUTOMINUS", "IF", "ELSE", "WHILE", "BREAK",
  "CONTINUE", "EXT_DEF_LIST", "EXT_VAR_DEF", "FUNC_DEF", "FUNC_DEC",
  "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC", "VAR_DEF", "DEC_LIST",
  "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT", "IF_THEN",
  "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL",
  "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ", "ARRAY_LIST",
  "UMINUS", "DMINUS", "LOWER_THEN_ELSE", "$accept", "program",
  "ExtDefList", "ExtDef", "Specifier", "ExtDecList", "VarDec", "Arraylist",
  "FuncDec", "VarList", "ParamDec", "CompSt", "StmList", "Stmt",
  "DefaultStmt", "CaseStmt", "CaseStmtList", "ForDec", "ForExp1",
  "ForExp2", "ForExp3", "Struct_dec", "StructName", "DefList", "Def",
  "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     140,   -35,  -134,     9,    88,  -134,   140,    54,    55,  -134,
      94,    72,  -134,  -134,     0,    77,    71,    82,  -134,  -134,
      30,     7,   114,  -134,  -134,   118,   125,  -134,    83,   118,
      91,   109,   125,  -134,   118,   112,   107,   110,   113,  -134,
     157,  -134,   102,   117,   111,  -134,  -134,  -134,  -134,  -134,
     141,   113,  -134,  -134,    37,  -134,  -134,   257,   122,   126,
     257,   257,   257,   257,   257,   257,   257,   133,   136,   132,
     137,  -134,   139,   157,    36,   257,  -134,   118,  -134,  -134,
     189,  -134,   276,    59,   257,   -14,   305,   331,   146,   -14,
     -14,   -14,   -14,   257,   257,  -134,  -134,  -134,  -134,   257,
    -134,  -134,   169,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,  -134,  -134,   458,  -134,
    -134,   144,  -134,   197,   118,   145,   149,  -134,   357,  -134,
     257,  -134,   383,   409,   528,  -134,    68,    68,    63,    63,
      63,   484,   484,   484,   484,   484,   484,   520,   502,  -134,
     257,   152,   458,  -134,   157,   249,   158,  -134,   157,   157,
    -134,   435,   257,  -134,   257,   159,   116,   142,  -134,   257,
    -134,  -134,   257,    66,   187,  -134,   116,   172,   157,  -134,
    -134,   190,   192,   157,  -134,  -134,  -134,   157,   157,  -134,
    -134,  -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     9,    55,     0,     2,     0,     0,     0,     8,
      56,     0,     1,     4,    12,     0,    10,     0,     7,    54,
       0,     0,     0,    13,     5,     0,     0,     6,     0,     0,
       0,     0,     0,    17,     0,     0,    18,     0,    12,    11,
      22,    59,    64,     0,    62,    61,    53,    58,    20,    16,
       0,    14,    93,    92,    91,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    22,     0,     0,    60,     0,    19,    15,
       0,    97,     0,     0,     0,    87,     0,   100,     0,    85,
      86,    82,    83,     0,     0,    31,    30,    21,    23,     0,
      88,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    65,    63,
      90,     0,    26,     0,     0,     0,     0,    48,     0,    84,
       0,    96,     0,     0,    74,    98,    75,    76,    77,    78,
      79,    66,    67,    68,    69,    70,    71,    72,    73,    89,
      47,     0,    50,    49,     0,     0,     0,    99,     0,     0,
      46,    52,    45,    32,    43,     0,    37,    27,    29,     0,
      44,    41,    42,     0,     0,    39,    37,     0,     0,    51,
      40,     0,     0,    22,    38,    33,    28,    22,    22,    34,
      36,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,   207,  -134,    11,   196,    -5,    49,  -134,   167,
    -134,   205,   -63,  -133,  -134,  -134,    48,  -134,  -134,    73,
    -129,    22,  -134,    70,  -134,   -64,  -134,   -57,   -68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    29,    15,    42,    23,    17,    35,
      36,    71,    72,    73,   175,   176,   177,   125,   126,   151,
     160,    30,    11,    31,    32,    43,    44,    74,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,     9,    16,    85,    86,    87,    89,    90,    91,    92,
      98,     7,   121,   119,    10,   100,     2,     7,   118,   127,
      16,   163,     8,    87,   102,   167,   168,   128,     8,    48,
      21,    28,    34,   170,    22,   171,   132,   133,    33,     2,
     179,     3,   134,   180,    99,   186,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    14,
     153,    34,   157,   -57,    38,   100,   152,    80,     2,   181,
     182,    22,   101,    87,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    12,   116,
     117,    18,   100,   161,   124,   123,    40,   100,   152,    19,
      79,   102,    47,    81,    20,   161,   102,   161,    25,   105,
     106,   107,   161,    24,    26,   161,   116,   117,    37,    41,
     189,   116,   117,    38,   190,   191,    28,    45,   -57,   -57,
     -57,   173,   -57,   174,     2,   -57,     3,   -57,   -57,   -57,
      -3,     1,    46,    49,    50,    51,    75,    22,    77,     2,
       2,     3,    83,    76,   -57,   -57,    84,   -57,   -57,   -57,
      52,    53,    54,    93,    55,   -57,    94,    56,    95,    57,
      58,    59,    97,    96,   135,   149,   154,   -57,   -57,   -57,
     -57,   131,   -57,   -57,   -57,   155,    60,    61,   162,    26,
     166,    62,    52,    53,    54,   172,    55,    63,   178,    56,
      52,    53,    54,   183,    55,   185,   187,    56,   188,    64,
      65,    66,    67,    13,    68,    69,    70,    78,    60,    61,
     120,    39,    27,    62,   184,     0,    60,    61,   165,    63,
       0,    62,     0,   150,     0,     0,     0,    63,     0,     0,
       0,    64,    65,    66,     0,     0,     0,     0,     0,    64,
      65,    66,    52,    53,    54,     0,    55,     0,     0,    56,
      52,    53,    54,     0,    55,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,     0,    62,    99,   164,    60,    61,     0,    63,
       0,    62,     0,     0,     0,     0,     0,    63,     0,     0,
       0,    64,    65,    66,     0,   100,     0,     0,     0,    64,
      65,    66,   122,    99,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   116,
     117,     0,     0,     0,   100,     0,   129,     0,     0,    99,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,     0,   116,   117,
     100,     0,     0,     0,     0,    99,     0,     0,   130,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     0,   116,   117,   100,     0,   156,     0,
       0,    99,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,     0,
     116,   117,   100,     0,   158,     0,     0,    99,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,     0,   116,   117,   100,     0,
     159,     0,     0,    99,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,     0,   116,   117,   100,     0,    99,     0,     0,     0,
       0,     0,   169,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   100,   116,   117,
       0,     0,    99,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      99,   116,   117,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   107,    99,     0,
       0,   100,     0,     0,   114,   115,     0,   116,   117,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,   100,
       0,     0,   114,     0,     0,   116,   117,   100,   102,   103,
     104,   105,   106,   107,     0,     0,   102,   103,   104,   105,
     106,   107,     0,   116,   117,     0,     0,     0,     0,     0,
       0,   116,   117
};

static const yytype_int16 yycheck[] =
{
      57,    36,     7,    60,    61,    62,    63,    64,    65,    66,
      73,     0,    80,    77,     5,    29,     9,     6,    75,    83,
      25,   154,     0,    80,    38,   158,   159,    84,     6,    34,
      30,     1,    21,   162,    34,   164,    93,    94,    31,     9,
     169,    11,    99,   172,     8,   178,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,     5,
     124,    50,   130,    33,     5,    29,   123,    30,     9,     3,
       4,    34,    36,   130,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,    53,
      54,    36,    29,   150,    83,    36,    26,    29,   155,     5,
      51,    38,    32,    54,    32,   162,    38,   164,    37,    41,
      42,    43,   169,    36,    32,   172,    53,    54,     4,    36,
     183,    53,    54,     5,   187,   188,     1,    36,     3,     4,
       5,    15,     7,    17,     9,    10,    11,    12,    13,    14,
       0,     1,    33,    31,    37,    35,    44,    34,    37,     9,
       9,    11,    30,    36,    29,    30,    30,    32,    33,    34,
       3,     4,     5,    30,     7,    40,    30,    10,    36,    12,
      13,    14,    33,    36,     5,    31,    31,    52,    53,    54,
      55,    35,    57,    58,    59,    36,    29,    30,    36,    32,
      32,    34,     3,     4,     5,    36,     7,    40,    56,    10,
       3,     4,     5,    16,     7,    33,    16,    10,    16,    52,
      53,    54,    55,     6,    57,    58,    59,    50,    29,    30,
      31,    25,    17,    34,   176,    -1,    29,    30,   155,    40,
      -1,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,     3,     4,     5,    -1,     7,    -1,    -1,    10,
       3,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,     8,    36,    29,    30,    -1,    40,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    52,    53,    54,    -1,    29,    -1,    -1,    -1,    52,
      53,    54,    36,     8,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    29,    -1,    31,    -1,    -1,     8,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      29,    -1,    -1,    -1,    -1,     8,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    29,    -1,    31,    -1,
      -1,     8,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    29,    -1,    31,    -1,    -1,     8,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    29,    -1,
      31,    -1,    -1,     8,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    29,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    29,    53,    54,
      -1,    -1,     8,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       8,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,     8,    -1,
      -1,    29,    -1,    -1,    50,    51,    -1,    53,    54,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    29,
      -1,    -1,    50,    -1,    -1,    53,    54,    29,    38,    39,
      40,    41,    42,    43,    -1,    -1,    38,    39,    40,    41,
      42,    43,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    11,    94,    95,    96,    97,   114,    36,
       5,   115,     0,    95,     5,    98,    99,   101,    36,     5,
      32,    30,    34,   100,    36,    37,    32,   104,     1,    97,
     114,   116,   117,    31,    97,   102,   103,     4,     5,    98,
     116,    36,    99,   118,   119,    36,    33,   116,    99,    31,
      37,    35,     3,     4,     5,     7,    10,    12,    13,    14,
      29,    30,    34,    40,    52,    53,    54,    55,    57,    58,
      59,   104,   105,   106,   120,    44,    36,    37,   102,   100,
      30,   100,   120,    30,    30,   120,   120,   120,   121,   120,
     120,   120,   120,    30,    30,    36,    36,    33,   105,     8,
      29,    36,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    53,    54,   120,   118,
      31,   121,    36,    36,    97,   110,   111,   118,   120,    31,
      37,    35,   120,   120,   120,     5,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,    31,
      36,   112,   120,   118,    31,    36,    31,   121,    31,    31,
     113,   120,    36,   106,    36,   112,    32,   106,   106,    37,
     113,   113,    36,    15,    17,   107,   108,   109,    56,   113,
     113,     3,     4,    16,   109,    33,   106,    16,    16,   105,
     105,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    96,    96,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     2,     1,
       1,     3,     1,     2,     3,     4,     4,     3,     1,     3,
       2,     4,     0,     2,     2,     1,     3,     5,     7,     5,
       2,     2,     5,     7,     3,     4,     4,     0,     2,     1,
       5,     4,     4,     3,     4,     3,     3,     2,     1,     2,
       1,     3,     1,     5,     3,     0,     1,     0,     2,     2,
       3,     2,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     4,
       3,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: ExtDefList  */
#line 67 "parser.y"
                       {displayRoot();display((yyvsp[0].ptr),0);}
#line 1800 "parser.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 69 "parser.y"
            {(yyval.ptr)=NULL;}
#line 1806 "parser.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 70 "parser.y"
                              {(yyval.ptr)=mknode(2,EXT_DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1812 "parser.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 72 "parser.y"
                                      {(yyval.ptr)=mknode(2,EXT_VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1818 "parser.tab.c"
    break;

  case 6: /* ExtDef: Specifier FuncDec CompSt  */
#line 73 "parser.y"
                                      {(yyval.ptr)=mknode(3,FUNC_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1824 "parser.tab.c"
    break;

  case 7: /* ExtDef: Struct_dec SEMI  */
#line 74 "parser.y"
                         {(yyval.ptr)=mknode(1, EXT_STRUCT_DEC, yylineno,(yyvsp[-1].ptr));}
#line 1830 "parser.tab.c"
    break;

  case 8: /* ExtDef: error SEMI  */
#line 75 "parser.y"
                        {(yyval.ptr)=NULL;}
#line 1836 "parser.tab.c"
    break;

  case 9: /* Specifier: TYPE  */
#line 77 "parser.y"
                    {(yyval.ptr)=mknode(0,TYPE,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type=!strcmp((yyvsp[0].type_id),"int")?INT:FLOAT;}
#line 1842 "parser.tab.c"
    break;

  case 10: /* ExtDecList: VarDec  */
#line 79 "parser.y"
                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1848 "parser.tab.c"
    break;

  case 11: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 80 "parser.y"
                                     {(yyval.ptr)=mknode(2,EXT_DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1854 "parser.tab.c"
    break;

  case 12: /* VarDec: ID  */
#line 82 "parser.y"
                     {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 1860 "parser.tab.c"
    break;

  case 13: /* VarDec: ID Arraylist  */
#line 83 "parser.y"
                       {(yyval.ptr)=mknode(1,ARRAY_LIST,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1866 "parser.tab.c"
    break;

  case 14: /* Arraylist: LB INT RB  */
#line 86 "parser.y"
                                {(yyval.ptr)=mknode(0,ARRAY_LIST,yylineno);(yyval.ptr)->type_int=(yyvsp[-1].type_int);}
#line 1872 "parser.tab.c"
    break;

  case 15: /* Arraylist: LB INT RB Arraylist  */
#line 87 "parser.y"
                                        {(yyval.ptr)=mknode(2,ARRAY_LIST,yylineno,(yyvsp[-2].type_int),(yyvsp[0].ptr));(yyval.ptr)->type_int=(yyvsp[-2].type_int);}
#line 1878 "parser.tab.c"
    break;

  case 16: /* FuncDec: ID LP VarList RP  */
#line 89 "parser.y"
                            {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1884 "parser.tab.c"
    break;

  case 17: /* FuncDec: ID LP RP  */
#line 90 "parser.y"
                     {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));(yyval.ptr)->ptr[0]=NULL;}
#line 1890 "parser.tab.c"
    break;

  case 18: /* VarList: ParamDec  */
#line 92 "parser.y"
                   {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[0].ptr));}
#line 1896 "parser.tab.c"
    break;

  case 19: /* VarList: ParamDec COMMA VarList  */
#line 93 "parser.y"
                                   {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1902 "parser.tab.c"
    break;

  case 20: /* ParamDec: Specifier VarDec  */
#line 95 "parser.y"
                                   {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1908 "parser.tab.c"
    break;

  case 21: /* CompSt: LC DefList StmList RC  */
#line 98 "parser.y"
                                 {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1914 "parser.tab.c"
    break;

  case 22: /* StmList: %empty  */
#line 100 "parser.y"
         {(yyval.ptr)=NULL; }
#line 1920 "parser.tab.c"
    break;

  case 23: /* StmList: Stmt StmList  */
#line 101 "parser.y"
                        {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1926 "parser.tab.c"
    break;

  case 24: /* Stmt: Exp SEMI  */
#line 103 "parser.y"
                    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[-1].ptr));}
#line 1932 "parser.tab.c"
    break;

  case 25: /* Stmt: CompSt  */
#line 104 "parser.y"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1938 "parser.tab.c"
    break;

  case 26: /* Stmt: RETURN Exp SEMI  */
#line 105 "parser.y"
                          {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[-1].ptr));}
#line 1944 "parser.tab.c"
    break;

  case 27: /* Stmt: IF LP Exp RP Stmt  */
#line 106 "parser.y"
                                                  {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1950 "parser.tab.c"
    break;

  case 28: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 107 "parser.y"
                                      {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1956 "parser.tab.c"
    break;

  case 29: /* Stmt: WHILE LP Exp RP Stmt  */
#line 108 "parser.y"
                             {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1962 "parser.tab.c"
    break;

  case 30: /* Stmt: CONTINUE SEMI  */
#line 109 "parser.y"
                        { (yyval.ptr) = mknode(0, CONTINUE, yylineno); strcpy((yyval.ptr)->type_id, "CONTINUE"); }
#line 1968 "parser.tab.c"
    break;

  case 31: /* Stmt: BREAK SEMI  */
#line 110 "parser.y"
                        { (yyval.ptr) = mknode(0, BREAK, yylineno); strcpy((yyval.ptr)->type_id, "BREAK"); }
#line 1974 "parser.tab.c"
    break;

  case 32: /* Stmt: FOR LP ForDec RP Stmt  */
#line 111 "parser.y"
                              {(yyval.ptr)=mknode(2,FOR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1980 "parser.tab.c"
    break;

  case 33: /* Stmt: SWITCH LP Exp RP LC CaseStmtList RC  */
#line 112 "parser.y"
                                            {(yyval.ptr)=mknode(2, SWITCH, yylineno, (yyvsp[-4].ptr), (yyvsp[-1].ptr));}
#line 1986 "parser.tab.c"
    break;

  case 34: /* DefaultStmt: DEFAULT COLON StmList  */
#line 115 "parser.y"
                                   {(yyval.ptr)=mknode(1, DEFAULT_STMT, yylineno, (yyvsp[0].ptr));}
#line 1992 "parser.tab.c"
    break;

  case 35: /* CaseStmt: CASE INT COLON StmList  */
#line 119 "parser.y"
                                 {(yyval.ptr)=mknode(1, CASE_STMT, yylineno, (yyvsp[0].ptr));(yyval.ptr)->type_int=(yyvsp[-2].type_int);(yyval.ptr)->type=INT;}
#line 1998 "parser.tab.c"
    break;

  case 36: /* CaseStmt: CASE CHAR COLON StmList  */
#line 120 "parser.y"
                                  {(yyval.ptr)=mknode(1, CASE_STMT, yylineno, (yyvsp[0].ptr));(yyval.ptr)->type_char=(yyvsp[-2].type_char);(yyval.ptr)->type=CHAR;}
#line 2004 "parser.tab.c"
    break;

  case 37: /* CaseStmtList: %empty  */
#line 125 "parser.y"
          {(yyval.ptr)=NULL;}
#line 2010 "parser.tab.c"
    break;

  case 38: /* CaseStmtList: CaseStmt CaseStmtList  */
#line 126 "parser.y"
                                {(yyval.ptr)=mknode(2, CASE_STMT_LIST, yylineno, (yyvsp[-1].ptr), (yyvsp[0].ptr));}
#line 2016 "parser.tab.c"
    break;

  case 39: /* CaseStmtList: DefaultStmt  */
#line 127 "parser.y"
                      {(yyval.ptr)=mknode(1, CASE_STMT_LIST, yylineno,(yyvsp[0].ptr));}
#line 2022 "parser.tab.c"
    break;

  case 40: /* ForDec: ForExp1 SEMI ForExp2 SEMI ForExp3  */
#line 139 "parser.y"
                                          {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2028 "parser.tab.c"
    break;

  case 41: /* ForDec: ForExp1 SEMI SEMI ForExp3  */
#line 140 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-3].ptr),NULL,(yyvsp[0].ptr));}
#line 2034 "parser.tab.c"
    break;

  case 42: /* ForDec: ForExp1 SEMI ForExp2 SEMI  */
#line 141 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-3].ptr),(yyvsp[-1].ptr),NULL);}
#line 2040 "parser.tab.c"
    break;

  case 43: /* ForDec: ForExp1 SEMI SEMI  */
#line 142 "parser.y"
                           {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-2].ptr),NULL,NULL);}
#line 2046 "parser.tab.c"
    break;

  case 44: /* ForDec: SEMI ForExp2 SEMI ForExp3  */
#line 143 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2052 "parser.tab.c"
    break;

  case 45: /* ForDec: SEMI ForExp2 SEMI  */
#line 144 "parser.y"
                            {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,(yyvsp[-1].ptr),NULL);}
#line 2058 "parser.tab.c"
    break;

  case 46: /* ForDec: SEMI SEMI ForExp3  */
#line 145 "parser.y"
                           {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,NULL,(yyvsp[0].ptr));}
#line 2064 "parser.tab.c"
    break;

  case 47: /* ForDec: SEMI SEMI  */
#line 146 "parser.y"
                   {(yyval.ptr)=mknode(3, FOR_DEC, yylineno, NULL, NULL, NULL);}
#line 2070 "parser.tab.c"
    break;

  case 48: /* ForExp1: DecList  */
#line 149 "parser.y"
                  {(yyval.ptr)=mknode(1, FOR_EXP1, yylineno, (yyvsp[0].ptr));}
#line 2076 "parser.tab.c"
    break;

  case 49: /* ForExp1: Specifier DecList  */
#line 150 "parser.y"
                            {(yyval.ptr)=mknode(2, FOR_EXP1, yylineno, (yyvsp[-1].ptr), (yyvsp[0].ptr));}
#line 2082 "parser.tab.c"
    break;

  case 50: /* ForExp2: Exp  */
#line 152 "parser.y"
             {(yyval.ptr)=mknode(1, FOR_EXP2, yylineno, (yyvsp[0].ptr));}
#line 2088 "parser.tab.c"
    break;

  case 51: /* ForExp3: Exp COMMA ForExp3  */
#line 154 "parser.y"
                            {(yyval.ptr)=mknode(2, FOR_EXP3, yylineno, (yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2094 "parser.tab.c"
    break;

  case 52: /* ForExp3: Exp  */
#line 155 "parser.y"
              {(yyval.ptr)=mknode(2, FOR_EXP3, yylineno, (yyvsp[0].ptr), NULL);}
#line 2100 "parser.tab.c"
    break;

  case 53: /* Struct_dec: STRUCT StructName LC DefList RC  */
#line 160 "parser.y"
                                            {(yyval.ptr)=mknode(2, STRUCT_NEW, yylineno, (yyvsp[-3].ptr), (yyvsp[-1].ptr));}
#line 2106 "parser.tab.c"
    break;

  case 54: /* Struct_dec: STRUCT ID ID  */
#line 161 "parser.y"
                       {(yyval.ptr)=mknode(0,STRUCT_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2112 "parser.tab.c"
    break;

  case 55: /* StructName: %empty  */
#line 163 "parser.y"
            {(yyval.ptr)=NULL;}
#line 2118 "parser.tab.c"
    break;

  case 56: /* StructName: ID  */
#line 164 "parser.y"
             {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2124 "parser.tab.c"
    break;

  case 57: /* DefList: %empty  */
#line 167 "parser.y"
         {(yyval.ptr)=NULL; }
#line 2130 "parser.tab.c"
    break;

  case 58: /* DefList: Def DefList  */
#line 168 "parser.y"
                      {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 2136 "parser.tab.c"
    break;

  case 59: /* DefList: error SEMI  */
#line 169 "parser.y"
                       {(yyval.ptr)=NULL;}
#line 2142 "parser.tab.c"
    break;

  case 60: /* Def: Specifier DecList SEMI  */
#line 171 "parser.y"
                               {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 2148 "parser.tab.c"
    break;

  case 61: /* Def: Struct_dec SEMI  */
#line 172 "parser.y"
                         {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2154 "parser.tab.c"
    break;

  case 62: /* DecList: Dec  */
#line 174 "parser.y"
              {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[0].ptr));}
#line 2160 "parser.tab.c"
    break;

  case 63: /* DecList: Dec COMMA DecList  */
#line 175 "parser.y"
                            {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2166 "parser.tab.c"
    break;

  case 64: /* Dec: VarDec  */
#line 177 "parser.y"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2172 "parser.tab.c"
    break;

  case 65: /* Dec: VarDec ASSIGNOP Exp  */
#line 178 "parser.y"
                              {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 2178 "parser.tab.c"
    break;

  case 66: /* Exp: Exp ASSIGNOP Exp  */
#line 180 "parser.y"
                         {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 2184 "parser.tab.c"
    break;

  case 67: /* Exp: Exp PLUSASSIGNOP Exp  */
#line 181 "parser.y"
                             {(yyval.ptr)=mknode(2,PLUSASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "PLUSASSIGNOP");}
#line 2190 "parser.tab.c"
    break;

  case 68: /* Exp: Exp MINUSASSIGNOP Exp  */
#line 182 "parser.y"
                              {(yyval.ptr)=mknode(2,MINUSASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "MINUSASSIGNOP");}
#line 2196 "parser.tab.c"
    break;

  case 69: /* Exp: Exp STARASSIGNOP Exp  */
#line 183 "parser.y"
                             {(yyval.ptr)=mknode(2, STARASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"STARASSIGNOP");}
#line 2202 "parser.tab.c"
    break;

  case 70: /* Exp: Exp DIVASSIGNOP Exp  */
#line 184 "parser.y"
                            {(yyval.ptr)=mknode(2,DIVASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DIVASSIGNOP");}
#line 2208 "parser.tab.c"
    break;

  case 71: /* Exp: Exp MODASSIGNOP Exp  */
#line 185 "parser.y"
                            {(yyval.ptr)=mknode(2,MODASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "MODASSIGNOP");}
#line 2214 "parser.tab.c"
    break;

  case 72: /* Exp: Exp AND Exp  */
#line 186 "parser.y"
                      {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"AND");}
#line 2220 "parser.tab.c"
    break;

  case 73: /* Exp: Exp OR Exp  */
#line 187 "parser.y"
                      {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"OR");}
#line 2226 "parser.tab.c"
    break;

  case 74: /* Exp: Exp RELOP Exp  */
#line 188 "parser.y"
                      {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 2232 "parser.tab.c"
    break;

  case 75: /* Exp: Exp PLUS Exp  */
#line 189 "parser.y"
                      {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"PLUS");}
#line 2238 "parser.tab.c"
    break;

  case 76: /* Exp: Exp MINUS Exp  */
#line 190 "parser.y"
                      {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MINUS");}
#line 2244 "parser.tab.c"
    break;

  case 77: /* Exp: Exp STAR Exp  */
#line 191 "parser.y"
                      {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"STAR");}
#line 2250 "parser.tab.c"
    break;

  case 78: /* Exp: Exp DIV Exp  */
#line 192 "parser.y"
                      {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DIV");}
#line 2256 "parser.tab.c"
    break;

  case 79: /* Exp: Exp MOD Exp  */
#line 193 "parser.y"
                      {(yyval.ptr)=mknode(2,MOD,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MOD");}
#line 2262 "parser.tab.c"
    break;

  case 80: /* Exp: Exp AUTOPLUS  */
#line 194 "parser.y"
                      {(yyval.ptr)=mknode(1,AUTOPLUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id, "RPAUTOPLUS");}
#line 2268 "parser.tab.c"
    break;

  case 81: /* Exp: Exp AUTOMINUS  */
#line 195 "parser.y"
                      {(yyval.ptr)=mknode(1,AUTOMINUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"RPAUTOMINUS");}
#line 2274 "parser.tab.c"
    break;

  case 82: /* Exp: AUTOPLUS Exp  */
#line 196 "parser.y"
                      {(yyval.ptr)=mknode(1,AUTOPLUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "LPAUTOPLUS");}
#line 2280 "parser.tab.c"
    break;

  case 83: /* Exp: AUTOMINUS Exp  */
#line 197 "parser.y"
                      {(yyval.ptr)=mknode(1,AUTOMINUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "LPAUTOMINUS");}
#line 2286 "parser.tab.c"
    break;

  case 84: /* Exp: LP Exp RP  */
#line 198 "parser.y"
                      {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2292 "parser.tab.c"
    break;

  case 85: /* Exp: MINUS Exp  */
#line 199 "parser.y"
                                 {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");}
#line 2298 "parser.tab.c"
    break;

  case 86: /* Exp: NOT Exp  */
#line 200 "parser.y"
                      {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"NOT");}
#line 2304 "parser.tab.c"
    break;

  case 87: /* Exp: DPLUS Exp  */
#line 201 "parser.y"
                       {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");}
#line 2310 "parser.tab.c"
    break;

  case 88: /* Exp: Exp DPLUS  */
#line 202 "parser.y"
                       {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");}
#line 2316 "parser.tab.c"
    break;

  case 89: /* Exp: ID LP Args RP  */
#line 203 "parser.y"
                      {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 2322 "parser.tab.c"
    break;

  case 90: /* Exp: ID LP RP  */
#line 204 "parser.y"
                      {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 2328 "parser.tab.c"
    break;

  case 91: /* Exp: ID  */
#line 205 "parser.y"
                      {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2334 "parser.tab.c"
    break;

  case 92: /* Exp: INT  */
#line 206 "parser.y"
                      {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 2340 "parser.tab.c"
    break;

  case 93: /* Exp: CHAR  */
#line 207 "parser.y"
                      {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[0].type_char);(yyval.ptr)->type=CHAR;}
#line 2346 "parser.tab.c"
    break;

  case 94: /* Exp: STRING  */
#line 208 "parser.y"
                      {(yyval.ptr)=mknode(0,STRING,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type=STRING;}
#line 2352 "parser.tab.c"
    break;

  case 95: /* Exp: FLOAT  */
#line 209 "parser.y"
                      {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[0].type_float);(yyval.ptr)->type=FLOAT;}
#line 2358 "parser.tab.c"
    break;

  case 96: /* Exp: LB Args RB  */
#line 210 "parser.y"
                      {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2364 "parser.tab.c"
    break;

  case 97: /* Exp: ID Arraylist  */
#line 211 "parser.y"
                      {(yyval.ptr)=mknode(1,ID,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 2370 "parser.tab.c"
    break;

  case 98: /* Exp: Exp DOT ID  */
#line 212 "parser.y"
                   {(yyval.ptr)=mknode(1, STRUCT_VISIT, yylineno, (yyvsp[-2].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2376 "parser.tab.c"
    break;

  case 99: /* Args: Exp COMMA Args  */
#line 214 "parser.y"
                           {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2382 "parser.tab.c"
    break;

  case 100: /* Args: Exp  */
#line 215 "parser.y"
                           {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[0].ptr));}
#line 2388 "parser.tab.c"
    break;


#line 2392 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 217 "parser.y"


int main(int argc, char *argv[]){
        yyin=fopen(argv[1],"r");
	if (!yyin) 
        return 0;
	yylineno=1;
	yyparse();
	return 0;
}

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
