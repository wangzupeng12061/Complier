/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CHAR = 258,                    /* CHAR  */
    INT = 259,                     /* INT  */
    ID = 260,                      /* ID  */
    ERRORID = 261,                 /* ERRORID  */
    STRING = 262,                  /* STRING  */
    RELOP = 263,                   /* RELOP  */
    TYPE = 264,                    /* TYPE  */
    FLOAT = 265,                   /* FLOAT  */
    STRUCT = 266,                  /* STRUCT  */
    RETURN = 267,                  /* RETURN  */
    FOR = 268,                     /* FOR  */
    SWITCH = 269,                  /* SWITCH  */
    CASE = 270,                    /* CASE  */
    COLON = 271,                   /* COLON  */
    DEFAULT = 272,                 /* DEFAULT  */
    STRUCT_VISIT = 273,            /* STRUCT_VISIT  */
    STRUCT_NEW = 274,              /* STRUCT_NEW  */
    STRUCT_DEC = 275,              /* STRUCT_DEC  */
    EXT_STRUCT_DEC = 276,          /* EXT_STRUCT_DEC  */
    CASE_STMT = 277,               /* CASE_STMT  */
    CASE_STMT_LIST = 278,          /* CASE_STMT_LIST  */
    DEFAULT_STMT = 279,            /* DEFAULT_STMT  */
    FOR_DEC = 280,                 /* FOR_DEC  */
    FOR_EXP1 = 281,                /* FOR_EXP1  */
    FOR_EXP2 = 282,                /* FOR_EXP2  */
    FOR_EXP3 = 283,                /* FOR_EXP3  */
    DPLUS = 284,                   /* DPLUS  */
    LP = 285,                      /* LP  */
    RP = 286,                      /* RP  */
    LC = 287,                      /* LC  */
    RC = 288,                      /* RC  */
    LB = 289,                      /* LB  */
    RB = 290,                      /* RB  */
    SEMI = 291,                    /* SEMI  */
    COMMA = 292,                   /* COMMA  */
    DOT = 293,                     /* DOT  */
    PLUS = 294,                    /* PLUS  */
    MINUS = 295,                   /* MINUS  */
    STAR = 296,                    /* STAR  */
    DIV = 297,                     /* DIV  */
    MOD = 298,                     /* MOD  */
    ASSIGNOP = 299,                /* ASSIGNOP  */
    PLUSASSIGNOP = 300,            /* PLUSASSIGNOP  */
    MINUSASSIGNOP = 301,           /* MINUSASSIGNOP  */
    STARASSIGNOP = 302,            /* STARASSIGNOP  */
    DIVASSIGNOP = 303,             /* DIVASSIGNOP  */
    MODASSIGNOP = 304,             /* MODASSIGNOP  */
    AND = 305,                     /* AND  */
    OR = 306,                      /* OR  */
    NOT = 307,                     /* NOT  */
    AUTOPLUS = 308,                /* AUTOPLUS  */
    AUTOMINUS = 309,               /* AUTOMINUS  */
    IF = 310,                      /* IF  */
    ELSE = 311,                    /* ELSE  */
    WHILE = 312,                   /* WHILE  */
    BREAK = 313,                   /* BREAK  */
    CONTINUE = 314,                /* CONTINUE  */
    EXT_DEF_LIST = 315,            /* EXT_DEF_LIST  */
    EXT_VAR_DEF = 316,             /* EXT_VAR_DEF  */
    FUNC_DEF = 317,                /* FUNC_DEF  */
    FUNC_DEC = 318,                /* FUNC_DEC  */
    EXT_DEC_LIST = 319,            /* EXT_DEC_LIST  */
    PARAM_LIST = 320,              /* PARAM_LIST  */
    PARAM_DEC = 321,               /* PARAM_DEC  */
    VAR_DEF = 322,                 /* VAR_DEF  */
    DEC_LIST = 323,                /* DEC_LIST  */
    DEF_LIST = 324,                /* DEF_LIST  */
    COMP_STM = 325,                /* COMP_STM  */
    STM_LIST = 326,                /* STM_LIST  */
    EXP_STMT = 327,                /* EXP_STMT  */
    IF_THEN = 328,                 /* IF_THEN  */
    IF_THEN_ELSE = 329,            /* IF_THEN_ELSE  */
    FUNC_CALL = 330,               /* FUNC_CALL  */
    ARGS = 331,                    /* ARGS  */
    FUNCTION = 332,                /* FUNCTION  */
    PARAM = 333,                   /* PARAM  */
    ARG = 334,                     /* ARG  */
    CALL = 335,                    /* CALL  */
    LABEL = 336,                   /* LABEL  */
    GOTO = 337,                    /* GOTO  */
    JLT = 338,                     /* JLT  */
    JLE = 339,                     /* JLE  */
    JGT = 340,                     /* JGT  */
    JGE = 341,                     /* JGE  */
    EQ = 342,                      /* EQ  */
    NEQ = 343,                     /* NEQ  */
    ARRAY_LIST = 344,              /* ARRAY_LIST  */
    UMINUS = 345,                  /* UMINUS  */
    DMINUS = 346,                  /* DMINUS  */
    LOWER_THEN_ELSE = 347          /* LOWER_THEN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "parser.y"

	int    type_int;
        char   type_char;
	float  type_float;
	char   type_id[32];
	struct ASTNode *ptr;

#line 164 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
