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
    INT = 258,                     /* INT  */
    ID = 259,                      /* ID  */
    RELOP = 260,                   /* RELOP  */
    TYPE = 261,                    /* TYPE  */
    CHAR = 262,                    /* CHAR  */
    FLOAT = 263,                   /* FLOAT  */
    LP = 264,                      /* LP  */
    RP = 265,                      /* RP  */
    LB = 266,                      /* LB  */
    RB = 267,                      /* RB  */
    LC = 268,                      /* LC  */
    RC = 269,                      /* RC  */
    SEMI = 270,                    /* SEMI  */
    COMMA = 271,                   /* COMMA  */
    COMADD = 272,                  /* COMADD  */
    COMSUB = 273,                  /* COMSUB  */
    COMSTAR = 274,                 /* COMSTAR  */
    COMDIV = 275,                  /* COMDIV  */
    COMMOD = 276,                  /* COMMOD  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    STAR = 279,                    /* STAR  */
    DIV = 280,                     /* DIV  */
    MOD = 281,                     /* MOD  */
    ASSIGNOP = 282,                /* ASSIGNOP  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NOT = 285,                     /* NOT  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    WHILE = 288,                   /* WHILE  */
    RETURN = 289,                  /* RETURN  */
    FOR = 290,                     /* FOR  */
    SWITCH = 291,                  /* SWITCH  */
    CASE = 292,                    /* CASE  */
    COLON = 293,                   /* COLON  */
    DEFAULT = 294,                 /* DEFAULT  */
    AUTOADD = 295,                 /* AUTOADD  */
    AUTOSUB = 296,                 /* AUTOSUB  */
    BREAK = 297,                   /* BREAK  */
    CONTINUE = 298,                /* CONTINUE  */
    EXT_DEF_LIST = 299,            /* EXT_DEF_LIST  */
    EXT_VAR_DEF = 300,             /* EXT_VAR_DEF  */
    FUNC_DEF = 301,                /* FUNC_DEF  */
    FUNC_DEC = 302,                /* FUNC_DEC  */
    EXT_DEC_LIST = 303,            /* EXT_DEC_LIST  */
    PARAM_LIST = 304,              /* PARAM_LIST  */
    PARAM_DEC = 305,               /* PARAM_DEC  */
    VAR_DEF = 306,                 /* VAR_DEF  */
    DEC_LIST = 307,                /* DEC_LIST  */
    DEF_LIST = 308,                /* DEF_LIST  */
    COMP_STM = 309,                /* COMP_STM  */
    STM_LIST = 310,                /* STM_LIST  */
    EXP_STMT = 311,                /* EXP_STMT  */
    IF_THEN = 312,                 /* IF_THEN  */
    IF_THEN_ELSE = 313,            /* IF_THEN_ELSE  */
    FUNC_CALL = 314,               /* FUNC_CALL  */
    ARGS = 315,                    /* ARGS  */
    FUNCTION = 316,                /* FUNCTION  */
    PARAM = 317,                   /* PARAM  */
    ARG = 318,                     /* ARG  */
    CALL = 319,                    /* CALL  */
    LABEL = 320,                   /* LABEL  */
    GOTO = 321,                    /* GOTO  */
    JLT = 322,                     /* JLT  */
    JLE = 323,                     /* JLE  */
    JGT = 324,                     /* JGT  */
    JGE = 325,                     /* JGE  */
    EQ = 326,                      /* EQ  */
    NEQ = 327,                     /* NEQ  */
    ARRAY_DEC = 328,               /* ARRAY_DEC  */
    FOR_DEC = 329,                 /* FOR_DEC  */
    CONTINUE_NODE = 330,           /* CONTINUE_NODE  */
    BREAK_NODE = 331,              /* BREAK_NODE  */
    BLANK = 332,                   /* BLANK  */
    ARRAY_DF = 333,                /* ARRAY_DF  */
    FOR_EXP1 = 334,                /* FOR_EXP1  */
    FOR_EXP2 = 335,                /* FOR_EXP2  */
    FOR_EXP3 = 336,                /* FOR_EXP3  */
    FOR_NODE = 337,                /* FOR_NODE  */
    ARRAY_CALL = 338,              /* ARRAY_CALL  */
    UMINUS = 339,                  /* UMINUS  */
    DPLUS = 340,                   /* DPLUS  */
    LOWER_THEN_ELSE = 341          /* LOWER_THEN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"

	int    type_int;
	float  type_float;
	char   type_char[3];
	char   type_id[32];
	struct ASTNode *ptr;

#line 158 "parser.tab.h"

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
