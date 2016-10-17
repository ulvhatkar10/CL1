#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "a4.y"
	#include<stdio.h>
	extern FILE *yyin;
	int flag = 1;
#line 23 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ID 257
#define MAIN 258
#define OP 259
#define CONDITIONAL 260
#define IF 261
#define FOR 262
#define WHILE 263
#define RELATIONAL 264
#define INC 265
#define DEC 266
#define NUMBER 267
#define DT 268
#define ELSE 269
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    3,    3,    3,    3,    3,
    3,    3,    9,    9,    8,    8,    8,    8,    8,    4,
    4,    4,    7,    7,    7,    5,   10,   10,   12,   12,
   11,   11,    6,
};
static const short yylen[] = {                            2,
    6,    2,    0,    2,    0,    4,    2,    1,    1,    1,
    1,    2,    2,    0,    2,    4,    3,    6,    5,    3,
    5,    1,    7,   11,    7,   11,    3,    3,    2,    2,
    3,    3,    7,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,
    0,    0,    0,    2,    4,    0,    8,    9,   10,    0,
    0,    0,    0,    0,    0,    0,    7,   12,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   14,
    0,    6,    0,    0,    0,    0,    0,    0,    0,    0,
   21,   28,    0,    5,    0,   32,    0,    0,    5,   14,
    0,   13,    0,    5,    0,    0,    0,    0,    0,    0,
    0,    0,   33,    0,   29,   30,    0,    5,    5,    0,
    0,   24,   26,
};
static const short yydgoto[] = {                          2,
    6,    7,   15,   16,   17,   18,   19,   20,   50,   33,
   35,   72,
};
static const short yysindex[] = {                      -219,
  -28,    0,    4,  -66,    0,  -60, -185,    0,   14,   39,
   40,   41, -175,    0,    0,  -49,    0,    0,    0,   25,
 -246, -172, -171, -172,   26, -172,    0,    0,   27,   46,
  -46, -221,   50,   32,   35,   54, -170, -163, -172,    0,
 -243,    0, -217,  -25, -211, -172,  -23,   55, -157, -220,
    0,    0, -163,    0, -202,    0, -163,   44,    0,    0,
   43,    0, -119,    0, -152, -105, -220, -161, -162, -185,
 -192,   67,    0,  -14,    0,    0,  -13,    0,    0,  -97,
  -89,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,  -81,    0,  -12,    0,  -43,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -122,
    0,    0,    0,    0,  -57,    0,    0,    0,  -41,  -54,
    0,    0,    0,    0,    0,    0,    0,  -40,    0,    0,
    0,    0,    0, -199,    0,    0,    0,  -36,    0,  -33,
    0,    0,  -26,    0,    0,    0,   52,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -24,    0,  -73, -121,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
  105,  -37,    0,    8,    0,    0,    0,  -42,   56,  -15,
    0,    0,
};
#define YYTABLESIZE 245
static const short yytable[] = {                         22,
   20,   15,   11,   25,   17,   69,   55,   62,   36,   27,
   29,    3,   42,   29,   27,   22,   63,   22,   20,   73,
   30,   66,   16,   51,   62,   19,   70,   82,   31,   32,
   58,   32,   27,   38,   18,   83,   61,   26,    1,   29,
   80,   81,   43,    3,    4,   29,   49,   13,   38,   52,
   53,   23,   57,   32,    9,   56,    5,    5,   10,   11,
   12,    5,    5,    5,    8,   13,   64,   15,    5,    5,
   17,    9,   75,   76,   21,   10,   11,   12,   22,   23,
   24,   25,   13,   28,   29,   34,   37,   39,   16,   40,
   44,   19,   45,   46,   47,   26,   48,   54,   60,   59,
   18,   41,   65,   68,   71,   30,   74,   77,   78,   79,
   31,   14,    3,    0,    0,   67,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   11,    0,    0,    9,   11,   11,
   11,   10,   11,   12,    0,   11,   11,   25,   13,    0,
    0,    9,    0,    0,    0,   10,   11,   12,    0,    9,
    0,    0,   13,   10,   11,   12,    0,    9,    0,    0,
   13,   10,   11,   12,    0,    5,    0,    0,   13,    5,
    5,    5,    0,   23,    0,    0,    5,   23,   23,   23,
    0,    0,    0,    0,   23,    0,    0,    0,    0,   15,
    0,    0,   17,   15,   15,   15,   17,   17,   17,   26,
   15,   15,   41,   17,   17,   22,    0,   22,    0,    0,
   16,    0,   22,   20,   16,   16,   16,   19,   19,   19,
    0,   16,   16,    0,    0,   19,   18,   18,   18,    0,
    0,    0,    0,    0,   18,
};
static const short yycheck[] = {                         41,
   41,   59,  125,  125,   59,  125,   44,   50,   24,   59,
  257,   40,   59,  257,   41,   59,   54,   59,   59,  125,
  267,   59,   59,  267,   67,   59,   64,  125,   21,   22,
   46,   24,   59,   26,   59,  125,  257,  259,  258,  257,
   78,   79,  264,  125,   41,  257,   39,  268,   41,  267,
   43,  125,   45,   46,  257,  267,  123,  257,  261,  262,
  263,  261,  262,  263,  125,  268,  269,  125,  268,  269,
  125,  257,  265,  266,   61,  261,  262,  263,   40,   40,
   40,  257,  268,   59,  257,  257,   61,   61,  125,   44,
   41,  125,   61,   59,   41,  259,  267,  123,   44,  123,
  125,  259,   59,   61,  257,  267,  269,   41,  123,  123,
   59,    7,  125,   -1,   -1,   60,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,   -1,  257,  261,  262,
  263,  261,  262,  263,   -1,  268,  269,  269,  268,   -1,
   -1,  257,   -1,   -1,   -1,  261,  262,  263,   -1,  257,
   -1,   -1,  268,  261,  262,  263,   -1,  257,   -1,   -1,
  268,  261,  262,  263,   -1,  257,   -1,   -1,  268,  261,
  262,  263,   -1,  257,   -1,   -1,  268,  261,  262,  263,
   -1,   -1,   -1,   -1,  268,   -1,   -1,   -1,   -1,  257,
   -1,   -1,  257,  261,  262,  263,  261,  262,  263,  259,
  268,  269,  259,  268,  269,  259,   -1,  259,   -1,   -1,
  257,   -1,  264,  264,  261,  262,  263,  261,  262,  263,
   -1,  268,  269,   -1,   -1,  269,  261,  262,  263,   -1,
   -1,   -1,   -1,   -1,  269,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 269
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"ID","MAIN","OP","CONDITIONAL","IF","FOR","WHILE","RELATIONAL",
"INC","DEC","NUMBER","DT","ELSE","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : s",
"s : MAIN '(' ')' '{' prog '}'",
"prog : stmtlist prog",
"prog :",
"stmtlist : stmtlist stmt",
"stmtlist :",
"stmt : ID '=' expr ';'",
"stmt : expr ';'",
"stmt : forstmt",
"stmt : whilestmt",
"stmt : ifstmt",
"stmt : vardeclare",
"stmt : vardeclare ';'",
"vardeclist : vardeclist vardeclare",
"vardeclist :",
"vardeclare : DT ID",
"vardeclare : DT ID '=' NUMBER",
"vardeclare : ID '=' NUMBER",
"vardeclare : DT ID '=' NUMBER ',' vardeclist",
"vardeclare : ID '=' NUMBER ',' vardeclist",
"expr : expr OP expr",
"expr : ID '=' expr OP NUMBER",
"expr : ID",
"ifstmt : IF '(' condition ')' '{' stmtlist '}'",
"ifstmt : IF '(' condition ')' '{' stmtlist '}' ELSE '{' stmtlist '}'",
"ifstmt : IF '(' condition ')' stmtlist ELSE stmtlist",
"forstmt : FOR '(' assigning ';' condition ';' incdec ')' '{' stmtlist '}'",
"condition : expr RELATIONAL expr",
"condition : expr RELATIONAL NUMBER",
"incdec : ID INC",
"incdec : ID DEC",
"assigning : ID '=' expr",
"assigning : ID '=' NUMBER",
"whilestmt : WHILE '(' condition ')' '{' stmtlist '}'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 69 "a4.y"

main()
{
	FILE *fin;
	fin=fopen("expressions.txt", "r");
	yyin=fin;
	yyparse();
}

int yywrap()
{
	return 1;
}

int yyerror()
{
	printf("**Syntax Error**");
	return 1;
}
#line 292 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 14 "a4.y"
	{ if(flag) printf("PROGRAM IS VALID\n"); else printf("INVALID PROGRAM\n");  }
break;
case 6:
#line 23 "a4.y"
	{ printf("Valid Statement\n"); }
break;
case 7:
#line 24 "a4.y"
	{ printf("Valid Statement\n"); }
break;
case 8:
#line 25 "a4.y"
	{ printf("for statement is a Valid Statement\n"); }
break;
case 9:
#line 26 "a4.y"
	{ printf("while statement is a Valid Statement\n"); }
break;
case 10:
#line 27 "a4.y"
	{ printf("if statement is a Valid Statement\n"); }
break;
case 11:
#line 28 "a4.y"
	{ printf("Incorrect declaration statement\n"); flag = 0;}
break;
case 12:
#line 29 "a4.y"
	{ printf("variable declaration statment is a Valid Statement\n"); }
break;
case 15:
#line 33 "a4.y"
	{}
break;
case 16:
#line 34 "a4.y"
	{}
break;
case 17:
#line 35 "a4.y"
	{}
break;
case 18:
#line 36 "a4.y"
	{}
break;
case 19:
#line 37 "a4.y"
	{}
break;
case 20:
#line 40 "a4.y"
	{}
break;
case 21:
#line 41 "a4.y"
	{}
break;
case 22:
#line 42 "a4.y"
	{}
break;
case 23:
#line 45 "a4.y"
	{}
break;
case 24:
#line 46 "a4.y"
	{}
break;
case 25:
#line 47 "a4.y"
	{}
break;
case 26:
#line 50 "a4.y"
	{}
break;
case 27:
#line 53 "a4.y"
	{}
break;
case 28:
#line 54 "a4.y"
	{}
break;
case 29:
#line 57 "a4.y"
	{}
break;
case 30:
#line 58 "a4.y"
	{}
break;
case 31:
#line 61 "a4.y"
	{}
break;
case 32:
#line 62 "a4.y"
	{}
break;
case 33:
#line 65 "a4.y"
	{}
break;
#line 602 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
