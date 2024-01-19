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
    AUTOADD = 291,                 /* AUTOADD  */
    AUTOSUB = 292,                 /* AUTOSUB  */
    BREAK = 293,                   /* BREAK  */
    CONTINUE = 294,                /* CONTINUE  */
    UMINUS = 295,                  /* UMINUS  */
    LOWER_THEN_ELSE = 296          /* LOWER_THEN_ELSE  */
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

#line 113 "parser.tab.h"

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
