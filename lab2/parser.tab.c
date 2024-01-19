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

#line 84 "parser.tab.c"

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
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_RELOP = 5,                      /* RELOP  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_LP = 9,                         /* LP  */
  YYSYMBOL_RP = 10,                        /* RP  */
  YYSYMBOL_LB = 11,                        /* LB  */
  YYSYMBOL_RB = 12,                        /* RB  */
  YYSYMBOL_LC = 13,                        /* LC  */
  YYSYMBOL_RC = 14,                        /* RC  */
  YYSYMBOL_SEMI = 15,                      /* SEMI  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_COMADD = 17,                    /* COMADD  */
  YYSYMBOL_COMSUB = 18,                    /* COMSUB  */
  YYSYMBOL_COMSTAR = 19,                   /* COMSTAR  */
  YYSYMBOL_COMDIV = 20,                    /* COMDIV  */
  YYSYMBOL_COMMOD = 21,                    /* COMMOD  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_STAR = 24,                      /* STAR  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_ASSIGNOP = 27,                  /* ASSIGNOP  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_SWITCH = 36,                    /* SWITCH  */
  YYSYMBOL_CASE = 37,                      /* CASE  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_DEFAULT = 39,                   /* DEFAULT  */
  YYSYMBOL_AUTOADD = 40,                   /* AUTOADD  */
  YYSYMBOL_AUTOSUB = 41,                   /* AUTOSUB  */
  YYSYMBOL_BREAK = 42,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 43,                  /* CONTINUE  */
  YYSYMBOL_EXT_DEF_LIST = 44,              /* EXT_DEF_LIST  */
  YYSYMBOL_EXT_VAR_DEF = 45,               /* EXT_VAR_DEF  */
  YYSYMBOL_FUNC_DEF = 46,                  /* FUNC_DEF  */
  YYSYMBOL_FUNC_DEC = 47,                  /* FUNC_DEC  */
  YYSYMBOL_EXT_DEC_LIST = 48,              /* EXT_DEC_LIST  */
  YYSYMBOL_PARAM_LIST = 49,                /* PARAM_LIST  */
  YYSYMBOL_PARAM_DEC = 50,                 /* PARAM_DEC  */
  YYSYMBOL_VAR_DEF = 51,                   /* VAR_DEF  */
  YYSYMBOL_DEC_LIST = 52,                  /* DEC_LIST  */
  YYSYMBOL_DEF_LIST = 53,                  /* DEF_LIST  */
  YYSYMBOL_COMP_STM = 54,                  /* COMP_STM  */
  YYSYMBOL_STM_LIST = 55,                  /* STM_LIST  */
  YYSYMBOL_EXP_STMT = 56,                  /* EXP_STMT  */
  YYSYMBOL_IF_THEN = 57,                   /* IF_THEN  */
  YYSYMBOL_IF_THEN_ELSE = 58,              /* IF_THEN_ELSE  */
  YYSYMBOL_FUNC_CALL = 59,                 /* FUNC_CALL  */
  YYSYMBOL_ARGS = 60,                      /* ARGS  */
  YYSYMBOL_FUNCTION = 61,                  /* FUNCTION  */
  YYSYMBOL_PARAM = 62,                     /* PARAM  */
  YYSYMBOL_ARG = 63,                       /* ARG  */
  YYSYMBOL_CALL = 64,                      /* CALL  */
  YYSYMBOL_LABEL = 65,                     /* LABEL  */
  YYSYMBOL_GOTO = 66,                      /* GOTO  */
  YYSYMBOL_JLT = 67,                       /* JLT  */
  YYSYMBOL_JLE = 68,                       /* JLE  */
  YYSYMBOL_JGT = 69,                       /* JGT  */
  YYSYMBOL_JGE = 70,                       /* JGE  */
  YYSYMBOL_EQ = 71,                        /* EQ  */
  YYSYMBOL_NEQ = 72,                       /* NEQ  */
  YYSYMBOL_ARRAY_DEC = 73,                 /* ARRAY_DEC  */
  YYSYMBOL_FOR_DEC = 74,                   /* FOR_DEC  */
  YYSYMBOL_CONTINUE_NODE = 75,             /* CONTINUE_NODE  */
  YYSYMBOL_BREAK_NODE = 76,                /* BREAK_NODE  */
  YYSYMBOL_BLANK = 77,                     /* BLANK  */
  YYSYMBOL_ARRAY_DF = 78,                  /* ARRAY_DF  */
  YYSYMBOL_FOR_EXP1 = 79,                  /* FOR_EXP1  */
  YYSYMBOL_FOR_EXP2 = 80,                  /* FOR_EXP2  */
  YYSYMBOL_FOR_EXP3 = 81,                  /* FOR_EXP3  */
  YYSYMBOL_FOR_NODE = 82,                  /* FOR_NODE  */
  YYSYMBOL_ARRAY_CALL = 83,                /* ARRAY_CALL  */
  YYSYMBOL_UMINUS = 84,                    /* UMINUS  */
  YYSYMBOL_DPLUS = 85,                     /* DPLUS  */
  YYSYMBOL_LOWER_THEN_ELSE = 86,           /* LOWER_THEN_ELSE  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_program = 88,                   /* program  */
  YYSYMBOL_ExtDefList = 89,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 90,                    /* ExtDef  */
  YYSYMBOL_Specifier = 91,                 /* Specifier  */
  YYSYMBOL_ExtDecList = 92,                /* ExtDecList  */
  YYSYMBOL_VarDec = 93,                    /* VarDec  */
  YYSYMBOL_ArrayDec = 94,                  /* ArrayDec  */
  YYSYMBOL_INDEX = 95,                     /* INDEX  */
  YYSYMBOL_FuncDec = 96,                   /* FuncDec  */
  YYSYMBOL_VarList = 97,                   /* VarList  */
  YYSYMBOL_ParamDec = 98,                  /* ParamDec  */
  YYSYMBOL_CompSt = 99,                    /* CompSt  */
  YYSYMBOL_StmList = 100,                  /* StmList  */
  YYSYMBOL_Stmt = 101,                     /* Stmt  */
  YYSYMBOL_FORDEC = 102,                   /* FORDEC  */
  YYSYMBOL_FOREXP1 = 103,                  /* FOREXP1  */
  YYSYMBOL_FOREXP2 = 104,                  /* FOREXP2  */
  YYSYMBOL_FOREXP3 = 105,                  /* FOREXP3  */
  YYSYMBOL_DefList = 106,                  /* DefList  */
  YYSYMBOL_Def = 107,                      /* Def  */
  YYSYMBOL_DecList = 108,                  /* DecList  */
  YYSYMBOL_Dec = 109,                      /* Dec  */
  YYSYMBOL_Exp = 110,                      /* Exp  */
  YYSYMBOL_Args = 111                      /* Args  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   587

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


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
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    70,    71,    74,    75,    76,    80,    84,
      85,    89,    90,    94,    95,    96,    99,   103,   104,   105,
     109,   110,   114,   118,   123,   124,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   141,   142,   143,   144,
     145,   146,   147,   148,   151,   152,   154,   155,   157,   158,
     163,   164,   165,   169,   172,   173,   175,   176,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     204,   205,   206,   207,   208,   209,   210,   212,   213
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "ID", "RELOP",
  "TYPE", "CHAR", "FLOAT", "LP", "RP", "LB", "RB", "LC", "RC", "SEMI",
  "COMMA", "COMADD", "COMSUB", "COMSTAR", "COMDIV", "COMMOD", "PLUS",
  "MINUS", "STAR", "DIV", "MOD", "ASSIGNOP", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "RETURN", "FOR", "SWITCH", "CASE", "COLON", "DEFAULT",
  "AUTOADD", "AUTOSUB", "BREAK", "CONTINUE", "EXT_DEF_LIST", "EXT_VAR_DEF",
  "FUNC_DEF", "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC",
  "VAR_DEF", "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT",
  "IF_THEN", "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM",
  "ARG", "CALL", "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ",
  "ARRAY_DEC", "FOR_DEC", "CONTINUE_NODE", "BREAK_NODE", "BLANK",
  "ARRAY_DF", "FOR_EXP1", "FOR_EXP2", "FOR_EXP3", "FOR_NODE", "ARRAY_CALL",
  "UMINUS", "DPLUS", "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList",
  "ExtDef", "Specifier", "ExtDecList", "VarDec", "ArrayDec", "INDEX",
  "FuncDec", "VarList", "ParamDec", "CompSt", "StmList", "Stmt", "FORDEC",
  "FOREXP1", "FOREXP2", "FOREXP3", "DefList", "Def", "DecList", "Dec",
  "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    -7,  -132,    17,  -132,    26,    71,  -132,  -132,  -132,
       8,   571,     4,    22,    42,  -132,    44,    27,    54,  -132,
    -132,    59,    86,  -132,  -132,  -132,    59,    55,    48,  -132,
      65,    58,  -132,    56,    59,   127,    86,  -132,  -132,    74,
     136,  -132,    57,    66,    67,  -132,    79,  -132,  -132,   221,
     221,  -132,   221,   221,    89,    95,   221,    97,   221,   221,
      92,    96,  -132,    99,   127,   249,  -132,  -132,  -132,   221,
    -132,    59,   168,   274,   300,    98,   103,   103,   221,   221,
     327,     9,   103,   103,  -132,  -132,  -132,  -132,   221,   221,
    -132,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,  -132,  -132,   479,  -132,  -132,   105,
    -132,   221,  -132,   352,   377,  -132,   177,    59,   108,   107,
    -132,   171,   402,   504,   504,   504,   504,   504,   215,   215,
      -6,    -6,    -6,   512,   544,   537,  -132,  -132,   127,   127,
     221,   109,   428,  -132,   127,   212,  -132,    91,  -132,  -132,
     454,   221,   221,  -132,   221,   110,   127,   221,  -132,  -132,
    -132,   221,  -132,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     8,     0,     2,     0,     0,     7,     1,     4,
       0,     0,     0,     9,     0,    19,     0,     0,     0,    12,
       5,     0,     0,     6,    15,    18,     0,     0,    20,    16,
       0,     0,    10,     0,     0,    24,     0,    22,    17,     0,
       0,    52,    56,     0,    54,    84,    83,    86,    85,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    24,     0,    51,    21,    14,     0,
      53,     0,     0,     0,    88,     0,    73,    74,     0,     0,
       0,     0,    75,    77,    33,    34,    23,    25,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    78,    57,    55,    81,     0,
      72,     0,    79,     0,     0,    28,     0,     0,     0,     0,
      44,    61,     0,    67,    68,    69,    70,    71,    62,    63,
      64,    65,    66,    58,    59,    60,    80,    87,     0,     0,
      43,     0,    47,    45,     0,     0,    82,    29,    31,    42,
      49,    41,     0,    32,    39,     0,     0,     0,    40,    46,
      37,    38,    30,    48,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,   128,  -132,   -11,   111,    10,   101,  -132,  -132,
     100,  -132,   129,    80,   -78,  -132,  -132,  -131,   -75,   112,
    -132,   -59,  -132,   -49,   -70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    12,    42,    19,    30,    14,
      27,    28,    62,    63,    64,   118,   119,   141,   149,    35,
      36,    43,    44,    65,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    74,   109,    76,    77,    89,    26,    80,     7,    82,
      83,    34,   107,    31,   155,     2,    13,     8,    15,    20,
     106,   159,   120,    74,   116,    34,    -3,     1,    26,   113,
     114,    13,     2,     2,   104,   105,    37,    25,    21,   121,
     122,   137,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    22,    24,    29,   143,    16,
     147,   148,    74,    31,    39,    38,   153,   142,   -11,    18,
     117,    41,    10,   -11,   -11,    11,   158,    40,   162,   160,
       2,    70,   163,    71,    69,   -11,   164,    33,    72,   -50,
     -50,   150,     2,   -50,   -50,   -50,   142,   -50,    78,   -50,
     -50,   -50,   150,   142,    79,   150,    81,    84,   150,   -50,
     112,    85,   150,    86,    89,   136,   -50,   -50,   144,   -50,
     -50,   -50,   145,   156,   151,   161,   -50,   -50,   -50,   -50,
      45,    46,    32,     9,    47,    48,    49,    16,    50,    67,
      22,    68,    51,    23,    87,     0,   -13,    18,    66,     0,
      52,   -13,   -13,     0,     0,     0,     0,    53,    54,     0,
      55,    56,    57,   -13,     0,     0,     0,    58,    59,    60,
      61,    45,    46,     0,     0,    47,    48,    49,   108,    50,
      45,    46,    89,     0,    47,    48,    49,     0,    50,     0,
       0,    52,   140,    96,    97,    98,    99,   100,    53,     0,
      52,     0,     0,     0,     0,     0,     0,    53,    58,    59,
       0,   104,   105,     0,     0,    45,    46,    58,    59,    47,
      48,    49,     0,    50,    45,    46,    89,   154,    47,    48,
      49,     0,    50,     0,     0,    52,     0,     0,     0,    98,
      99,   100,    53,     0,    52,     0,     0,     0,     0,     0,
       0,    53,    58,    59,    88,   104,   105,     0,     0,     0,
      89,    58,    59,     0,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    88,
       0,     0,     0,     0,   110,    89,     0,     0,     0,   104,
     105,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,    88,     0,     0,     0,     0,
       0,    89,     0,     0,   104,   105,   111,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,     0,    88,     0,     0,     0,     0,     0,    89,     0,
     104,   105,   115,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    88,     0,     0,
       0,     0,   138,    89,     0,     0,     0,   104,   105,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    88,     0,     0,     0,     0,   139,    89,     0,
       0,     0,   104,   105,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    88,     0,     0,
       0,     0,     0,    89,   146,     0,     0,   104,   105,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,    88,     0,     0,     0,     0,     0,    89,
       0,     0,   104,   105,   152,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,    88,
       0,     0,     0,     0,     0,    89,     0,     0,   104,   105,
     157,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    88,     0,     0,     0,     0,     0,
      89,     0,     0,     0,   104,   105,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    88,
       0,     0,     0,     0,     0,    89,     0,    88,     0,   104,
     105,     0,     0,    89,     0,     0,    96,    97,    98,    99,
     100,   101,   102,   103,    96,    97,    98,    99,   100,     0,
     102,   103,    88,     0,   104,   105,     0,     0,    89,    88,
       0,     0,   104,   105,     0,    89,     0,     0,     0,    96,
      97,    98,    99,   100,     0,   102,    96,    97,    98,    99,
     100,     0,    16,     0,     0,     0,     0,   104,   105,     0,
      17,     0,    18,     0,   104,   105,   -11,   -11
};

static const yytype_int16 yycheck[] =
{
      49,    50,    72,    52,    53,    11,    17,    56,    15,    58,
      59,    22,    71,     4,   145,     6,     6,     0,    10,    15,
      69,   152,    81,    72,    15,    36,     0,     1,    39,    78,
      79,    21,     6,     6,    40,    41,    26,    10,    16,    88,
      89,   111,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    13,    12,     3,   117,     1,
     138,   139,   111,     4,    16,    10,   144,   116,    10,    11,
      81,    15,     1,    15,    16,     4,   151,    12,   156,   154,
       6,    15,   157,    16,    27,    27,   161,     1,     9,     3,
       4,   140,     6,     7,     8,     9,   145,    11,     9,    13,
      14,    15,   151,   152,     9,   154,     9,    15,   157,    23,
      12,    15,   161,    14,    11,    10,    30,    31,    10,    33,
      34,    35,    15,    32,    15,    15,    40,    41,    42,    43,
       3,     4,    21,     5,     7,     8,     9,     1,    11,    39,
      13,    40,    15,    14,    64,    -1,    10,    11,    36,    -1,
      23,    15,    16,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    27,    -1,    -1,    -1,    40,    41,    42,
      43,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
       3,     4,    11,    -1,     7,     8,     9,    -1,    11,    -1,
      -1,    23,    15,    22,    23,    24,    25,    26,    30,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    40,    41,
      -1,    40,    41,    -1,    -1,     3,     4,    40,    41,     7,
       8,     9,    -1,    11,     3,     4,    11,    15,     7,     8,
       9,    -1,    11,    -1,    -1,    23,    -1,    -1,    -1,    24,
      25,    26,    30,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    40,    41,     5,    40,    41,    -1,    -1,    -1,
      11,    40,    41,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     5,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    40,
      41,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    40,    41,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      40,    41,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     5,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    40,    41,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     5,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    40,    41,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    40,    41,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    40,    41,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    40,    41,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    40,    41,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,     5,    -1,    40,
      41,    -1,    -1,    11,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    -1,
      28,    29,     5,    -1,    40,    41,    -1,    -1,    11,     5,
      -1,    -1,    40,    41,    -1,    11,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    -1,    28,    22,    23,    24,    25,
      26,    -1,     1,    -1,    -1,    -1,    -1,    40,    41,    -1,
       9,    -1,    11,    -1,    40,    41,    15,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,    88,    89,    90,    91,    15,     0,    89,
       1,     4,    92,    93,    96,    10,     1,     9,    11,    94,
      15,    16,    13,    99,    12,    10,    91,    97,    98,     3,
      95,     4,    92,     1,    91,   106,   107,    93,    10,    16,
      12,    15,    93,   108,   109,     3,     4,     7,     8,     9,
      11,    15,    23,    30,    31,    33,    34,    35,    40,    41,
      42,    43,    99,   100,   101,   110,   106,    97,    94,    27,
      15,    16,     9,   110,   110,   111,   110,   110,     9,     9,
     110,     9,   110,   110,    15,    15,    14,   100,     5,    11,
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    40,    41,   110,   108,    10,   111,
      10,    16,    12,   110,   110,    15,    15,    91,   102,   103,
     108,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,    10,   111,    10,    10,
      15,   104,   110,   108,    10,    15,    12,   101,   101,   105,
     110,    15,    16,   101,    15,   104,    32,    16,   105,   104,
     105,    15,   101,   105,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    90,    91,    92,
      92,    93,    93,    94,    94,    94,    95,    96,    96,    96,
      97,    97,    98,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     1,     1,
       3,     1,     2,     3,     4,     2,     1,     4,     3,     2,
       1,     3,     2,     4,     0,     2,     2,     1,     3,     5,
       7,     5,     5,     2,     2,     1,     5,     4,     4,     3,
       4,     3,     3,     2,     1,     2,     3,     1,     3,     1,
       0,     2,     2,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       4,     3,     4,     1,     1,     1,     1,     3,     1
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
                       { display((yyvsp[0].ptr),0); semantic_Analysis0((yyvsp[0].ptr));}
#line 1771 "parser.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 70 "parser.y"
            {(yyval.ptr)=NULL;}
#line 1777 "parser.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 71 "parser.y"
                              {(yyval.ptr)=mknode(2,EXT_DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1783 "parser.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 74 "parser.y"
                                      {(yyval.ptr)=mknode(2,EXT_VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1789 "parser.tab.c"
    break;

  case 6: /* ExtDef: Specifier FuncDec CompSt  */
#line 75 "parser.y"
                                      {(yyval.ptr)=mknode(3,FUNC_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1795 "parser.tab.c"
    break;

  case 7: /* ExtDef: error SEMI  */
#line 76 "parser.y"
                        {(yyval.ptr)=NULL;printf("\t missing SEMI \t\n");}
#line 1801 "parser.tab.c"
    break;

  case 8: /* Specifier: TYPE  */
#line 80 "parser.y"
                    {(yyval.ptr)=mknode(0,TYPE,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type=!strcmp((yyvsp[0].type_id),"int")?INT:(!strcmp((yyvsp[0].type_id),"float")?FLOAT:CHAR);}
#line 1807 "parser.tab.c"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 84 "parser.y"
                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1813 "parser.tab.c"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 85 "parser.y"
                                     {(yyval.ptr)=mknode(2,EXT_DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1819 "parser.tab.c"
    break;

  case 11: /* VarDec: ID  */
#line 89 "parser.y"
                     {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 1825 "parser.tab.c"
    break;

  case 12: /* VarDec: ID ArrayDec  */
#line 90 "parser.y"
                              {(yyval.ptr)=mknode(1,ARRAY_DF,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1831 "parser.tab.c"
    break;

  case 13: /* ArrayDec: LB INDEX RB  */
#line 94 "parser.y"
                      {(yyval.ptr)=mknode(1,ARRAY_DEC,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"ARRAY_DEC");}
#line 1837 "parser.tab.c"
    break;

  case 14: /* ArrayDec: LB INDEX RB ArrayDec  */
#line 95 "parser.y"
                                 {(yyval.ptr)=mknode(2,ARRAY_DEC,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ARRAY_DEC");}
#line 1843 "parser.tab.c"
    break;

  case 15: /* ArrayDec: error RB  */
#line 96 "parser.y"
                             {(yyval.ptr)=NULL;printf("\t define array error \t\n");}
#line 1849 "parser.tab.c"
    break;

  case 16: /* INDEX: INT  */
#line 99 "parser.y"
           {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 1855 "parser.tab.c"
    break;

  case 17: /* FuncDec: ID LP VarList RP  */
#line 103 "parser.y"
                            {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1861 "parser.tab.c"
    break;

  case 18: /* FuncDec: ID LP RP  */
#line 104 "parser.y"
                             {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));(yyval.ptr)->ptr[0]=NULL;}
#line 1867 "parser.tab.c"
    break;

  case 19: /* FuncDec: error RP  */
#line 105 "parser.y"
                           {(yyval.ptr)=NULL; printf("\t define function error\n");}
#line 1873 "parser.tab.c"
    break;

  case 20: /* VarList: ParamDec  */
#line 109 "parser.y"
                   {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[0].ptr));}
#line 1879 "parser.tab.c"
    break;

  case 21: /* VarList: ParamDec COMMA VarList  */
#line 110 "parser.y"
                                   {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1885 "parser.tab.c"
    break;

  case 22: /* ParamDec: Specifier VarDec  */
#line 114 "parser.y"
                                   {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1891 "parser.tab.c"
    break;

  case 23: /* CompSt: LC DefList StmList RC  */
#line 118 "parser.y"
                                 {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1897 "parser.tab.c"
    break;

  case 24: /* StmList: %empty  */
#line 123 "parser.y"
         {(yyval.ptr)=NULL; }
#line 1903 "parser.tab.c"
    break;

  case 25: /* StmList: Stmt StmList  */
#line 124 "parser.y"
                        {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1909 "parser.tab.c"
    break;

  case 26: /* Stmt: Exp SEMI  */
#line 128 "parser.y"
                    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[-1].ptr));}
#line 1915 "parser.tab.c"
    break;

  case 27: /* Stmt: CompSt  */
#line 129 "parser.y"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1921 "parser.tab.c"
    break;

  case 28: /* Stmt: RETURN Exp SEMI  */
#line 130 "parser.y"
                          {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[-1].ptr));}
#line 1927 "parser.tab.c"
    break;

  case 29: /* Stmt: IF LP Exp RP Stmt  */
#line 131 "parser.y"
                                                  {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1933 "parser.tab.c"
    break;

  case 30: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 132 "parser.y"
                                      {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1939 "parser.tab.c"
    break;

  case 31: /* Stmt: WHILE LP Exp RP Stmt  */
#line 133 "parser.y"
                             {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1945 "parser.tab.c"
    break;

  case 32: /* Stmt: FOR LP FORDEC RP Stmt  */
#line 134 "parser.y"
                                  {(yyval.ptr)=mknode(2,FOR_NODE,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1951 "parser.tab.c"
    break;

  case 33: /* Stmt: BREAK SEMI  */
#line 135 "parser.y"
                                 {(yyval.ptr)=mknode(0,BREAK_NODE,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");}
#line 1957 "parser.tab.c"
    break;

  case 34: /* Stmt: CONTINUE SEMI  */
#line 136 "parser.y"
                            {(yyval.ptr)=mknode(0,CONTINUE_NODE,yylineno);strcpy((yyval.ptr)->type_id,"CONTINUE");}
#line 1963 "parser.tab.c"
    break;

  case 35: /* Stmt: SEMI  */
#line 137 "parser.y"
                 {(yyval.ptr) = mknode(0,BLANK,yylineno);strcpy((yyval.ptr)->type_id,"BLANK");}
#line 1969 "parser.tab.c"
    break;

  case 36: /* FORDEC: FOREXP1 SEMI FOREXP2 SEMI FOREXP3  */
#line 141 "parser.y"
                                          {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1975 "parser.tab.c"
    break;

  case 37: /* FORDEC: FOREXP1 SEMI SEMI FOREXP3  */
#line 142 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-3].ptr),NULL,(yyvsp[0].ptr));}
#line 1981 "parser.tab.c"
    break;

  case 38: /* FORDEC: FOREXP1 SEMI FOREXP2 SEMI  */
#line 143 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-3].ptr),(yyvsp[-1].ptr),NULL);}
#line 1987 "parser.tab.c"
    break;

  case 39: /* FORDEC: FOREXP1 SEMI SEMI  */
#line 144 "parser.y"
                           {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,(yyvsp[-2].ptr),NULL,NULL);}
#line 1993 "parser.tab.c"
    break;

  case 40: /* FORDEC: SEMI FOREXP2 SEMI FOREXP3  */
#line 145 "parser.y"
                                   {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1999 "parser.tab.c"
    break;

  case 41: /* FORDEC: SEMI FOREXP2 SEMI  */
#line 146 "parser.y"
                            {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,(yyvsp[-1].ptr),NULL);}
#line 2005 "parser.tab.c"
    break;

  case 42: /* FORDEC: SEMI SEMI FOREXP3  */
#line 147 "parser.y"
                           {(yyval.ptr)=mknode(3, FOR_DEC,yylineno,NULL,NULL,(yyvsp[0].ptr));}
#line 2011 "parser.tab.c"
    break;

  case 43: /* FORDEC: SEMI SEMI  */
#line 148 "parser.y"
                   {(yyval.ptr)=mknode(3, FOR_DEC, yylineno, NULL, NULL, NULL);}
#line 2017 "parser.tab.c"
    break;

  case 44: /* FOREXP1: DecList  */
#line 151 "parser.y"
                  {(yyval.ptr)=mknode(1, FOR_EXP1, yylineno, (yyvsp[0].ptr));}
#line 2023 "parser.tab.c"
    break;

  case 45: /* FOREXP1: Specifier DecList  */
#line 152 "parser.y"
                            {(yyval.ptr)=mknode(2, FOR_EXP1, yylineno, (yyvsp[-1].ptr), (yyvsp[0].ptr));}
#line 2029 "parser.tab.c"
    break;

  case 46: /* FOREXP2: Exp COMMA FOREXP2  */
#line 154 "parser.y"
                            {(yyval.ptr)=mknode(2, FOR_EXP2, yylineno, (yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2035 "parser.tab.c"
    break;

  case 47: /* FOREXP2: Exp  */
#line 155 "parser.y"
                      {(yyval.ptr)=mknode(1, FOR_EXP2, yylineno, (yyvsp[0].ptr));}
#line 2041 "parser.tab.c"
    break;

  case 48: /* FOREXP3: Exp COMMA FOREXP3  */
#line 157 "parser.y"
                            {(yyval.ptr)=mknode(2, FOR_EXP3, yylineno, (yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2047 "parser.tab.c"
    break;

  case 49: /* FOREXP3: Exp  */
#line 158 "parser.y"
              {(yyval.ptr)=mknode(2, FOR_EXP3, yylineno, (yyvsp[0].ptr), NULL);}
#line 2053 "parser.tab.c"
    break;

  case 50: /* DefList: %empty  */
#line 163 "parser.y"
         {(yyval.ptr)=NULL; }
#line 2059 "parser.tab.c"
    break;

  case 51: /* DefList: Def DefList  */
#line 164 "parser.y"
                      {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 2065 "parser.tab.c"
    break;

  case 52: /* DefList: error SEMI  */
#line 165 "parser.y"
                       {(yyval.ptr)=NULL;}
#line 2071 "parser.tab.c"
    break;

  case 53: /* Def: Specifier DecList SEMI  */
#line 169 "parser.y"
                               {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 2077 "parser.tab.c"
    break;

  case 54: /* DecList: Dec  */
#line 172 "parser.y"
              {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[0].ptr));}
#line 2083 "parser.tab.c"
    break;

  case 55: /* DecList: Dec COMMA DecList  */
#line 173 "parser.y"
                            {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2089 "parser.tab.c"
    break;

  case 56: /* Dec: VarDec  */
#line 175 "parser.y"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2095 "parser.tab.c"
    break;

  case 57: /* Dec: VarDec ASSIGNOP Exp  */
#line 176 "parser.y"
                              {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 2101 "parser.tab.c"
    break;

  case 58: /* Exp: Exp ASSIGNOP Exp  */
#line 180 "parser.y"
                         {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 2107 "parser.tab.c"
    break;

  case 59: /* Exp: Exp AND Exp  */
#line 181 "parser.y"
                      {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"AND");}
#line 2113 "parser.tab.c"
    break;

  case 60: /* Exp: Exp OR Exp  */
#line 182 "parser.y"
                      {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"OR");}
#line 2119 "parser.tab.c"
    break;

  case 61: /* Exp: Exp RELOP Exp  */
#line 183 "parser.y"
                      {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 2125 "parser.tab.c"
    break;

  case 62: /* Exp: Exp PLUS Exp  */
#line 184 "parser.y"
                      {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"PLUS");}
#line 2131 "parser.tab.c"
    break;

  case 63: /* Exp: Exp MINUS Exp  */
#line 185 "parser.y"
                      {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MINUS");}
#line 2137 "parser.tab.c"
    break;

  case 64: /* Exp: Exp STAR Exp  */
#line 186 "parser.y"
                      {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"STAR");}
#line 2143 "parser.tab.c"
    break;

  case 65: /* Exp: Exp DIV Exp  */
#line 187 "parser.y"
                      {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DIV");}
#line 2149 "parser.tab.c"
    break;

  case 66: /* Exp: Exp MOD Exp  */
#line 188 "parser.y"
                          {(yyval.ptr)=mknode(2,MOD,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MOD");}
#line 2155 "parser.tab.c"
    break;

  case 67: /* Exp: Exp COMADD Exp  */
#line 189 "parser.y"
                           {(yyval.ptr)=mknode(2,COMADD,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"COMADD");}
#line 2161 "parser.tab.c"
    break;

  case 68: /* Exp: Exp COMSUB Exp  */
#line 190 "parser.y"
                       {(yyval.ptr)=mknode(2,COMSUB,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"COMSUB");}
#line 2167 "parser.tab.c"
    break;

  case 69: /* Exp: Exp COMSTAR Exp  */
#line 191 "parser.y"
                        {(yyval.ptr)=mknode(2,COMSTAR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"COMSTAR");}
#line 2173 "parser.tab.c"
    break;

  case 70: /* Exp: Exp COMDIV Exp  */
#line 192 "parser.y"
                       {(yyval.ptr)=mknode(2,COMDIV,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"COMDIV");}
#line 2179 "parser.tab.c"
    break;

  case 71: /* Exp: Exp COMMOD Exp  */
#line 193 "parser.y"
                       {(yyval.ptr)=mknode(2,COMMOD,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"COMMOD");}
#line 2185 "parser.tab.c"
    break;

  case 72: /* Exp: LP Exp RP  */
#line 194 "parser.y"
                      {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2191 "parser.tab.c"
    break;

  case 73: /* Exp: MINUS Exp  */
#line 195 "parser.y"
                                 {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");}
#line 2197 "parser.tab.c"
    break;

  case 74: /* Exp: NOT Exp  */
#line 196 "parser.y"
                      {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"NOT");}
#line 2203 "parser.tab.c"
    break;

  case 75: /* Exp: AUTOADD Exp  */
#line 197 "parser.y"
                          {(yyval.ptr)=mknode(1,AUTOADD,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"AUTOADD");}
#line 2209 "parser.tab.c"
    break;

  case 76: /* Exp: Exp AUTOADD  */
#line 198 "parser.y"
                         {(yyval.ptr)=mknode(1,AUTOADD,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"AUTOADD");}
#line 2215 "parser.tab.c"
    break;

  case 77: /* Exp: AUTOSUB Exp  */
#line 199 "parser.y"
                              {(yyval.ptr)=mknode(1,AUTOSUB,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"AUTOSUB");}
#line 2221 "parser.tab.c"
    break;

  case 78: /* Exp: Exp AUTOSUB  */
#line 200 "parser.y"
                         {(yyval.ptr)=mknode(1,AUTOSUB,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"AUTOSUB");}
#line 2227 "parser.tab.c"
    break;

  case 79: /* Exp: LB Args RB  */
#line 201 "parser.y"
                         {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2233 "parser.tab.c"
    break;

  case 80: /* Exp: ID LP Args RP  */
#line 204 "parser.y"
                      {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 2239 "parser.tab.c"
    break;

  case 81: /* Exp: ID LP RP  */
#line 205 "parser.y"
                      {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 2245 "parser.tab.c"
    break;

  case 82: /* Exp: Exp LB Exp RB  */
#line 206 "parser.y"
                          {(yyval.ptr)=mknode(2,ARRAY_CALL,yylineno,(yyvsp[-3].ptr),(yyvsp[-1].ptr));}
#line 2251 "parser.tab.c"
    break;

  case 83: /* Exp: ID  */
#line 207 "parser.y"
                      {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2257 "parser.tab.c"
    break;

  case 84: /* Exp: INT  */
#line 208 "parser.y"
                      {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 2263 "parser.tab.c"
    break;

  case 85: /* Exp: FLOAT  */
#line 209 "parser.y"
                      {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[0].type_float);(yyval.ptr)->type=FLOAT;}
#line 2269 "parser.tab.c"
    break;

  case 86: /* Exp: CHAR  */
#line 210 "parser.y"
                                  {(yyval.ptr)=mknode(0,CHAR,yylineno); strcpy((yyval.ptr)->type_char,(yyvsp[0].type_char));(yyval.ptr)->type=CHAR;}
#line 2275 "parser.tab.c"
    break;

  case 87: /* Args: Exp COMMA Args  */
#line 212 "parser.y"
                           {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2281 "parser.tab.c"
    break;

  case 88: /* Args: Exp  */
#line 213 "parser.y"
                           {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[0].ptr));}
#line 2287 "parser.tab.c"
    break;


#line 2291 "parser.tab.c"

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

#line 216 "parser.y"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return -1;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
 
