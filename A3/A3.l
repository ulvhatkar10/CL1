%{
#include <stdio.h>
int line=1;
%}

%%



"/*"(.|\n)*"*/" {printf("%s is a comment\n",yytext);fprintf(yyout,"%d\t%s\tComment\n",line,yytext);}
"//"(.)* {printf("%s is a comment\n",yytext);fprintf(yyout,"%d\t%s\tComment\n",line,yytext);} 
#include {printf("%s is the preprocessor directive\n",yytext);fprintf(yyout,"%d\t%s\tPreprocessor directive\n",line,yytext);}

printf {printf("%s is the library function\n",yytext);fprintf(yyout,"%d\t%s\tlibrary function\n",line,yytext);}

scanf {printf("%s is the library function\n",yytext);fprintf(yyout,"%d\t%s\tlibrary function\n",line,yytext);}
scanf[^(] {printf("%s is the error\n",yytext);fprintf(yyout,"%d\t%s\terror\n",line,yytext);}
printf[^(] {printf("%s is the error\n",yytext);fprintf(yyout,"%d\t%s\terror\n",line,yytext);}
return|for|main {printf("%s is the keyword\n",yytext);fprintf(yyout,"%d\t%s\tKeyword\n",line,yytext);}
int|float|char {printf("%s is the datatype\n",yytext);fprintf(yyout,"%d\t%s\tDatatype\n",line,yytext);}
flaot|itn|ret|mian {printf("%s Error\n",yytext); fprintf(yyout,"%d\t%s\terror\n",line,yytext);}

"<"((.)*.h)">" {printf("%s is the header file\n",yytext);fprintf(yyout,"%d\t%s\tHeader file\n",line,yytext);}
[><(){},;:.*&""/\\] {printf("%s is the symbol\n",yytext);fprintf(yyout,"%d\t%s\tSymbol\n",line,yytext);}
%d | %s | %f | %c | %u {printf("%s is the format specifier\n",yytext);fprintf(yyout,"%d\t%s\tFormat specifier\n",line,yytext);}
[A-Za-z_][A-Za-z0-9]* {printf("%s is the identifier\n",yytext);fprintf(yyout,"%d\t%s\tIdentifier\n",line,yytext);}
[0-9]+ {printf("%s is the number\n",yytext);fprintf(yyout,"%d\t%s\tNumber\n",line,yytext);}
"\n" {++line;}
" " ;

%%
int main()
{
yyin=fopen("myfile.c","r");
yyout=fopen("myfile3.txt","w");
fprintf(yyout,"line\tLexeme\tToken\n");
yylex();
fclose(yyin);
return 1;
}

int yywrap()
{
return 1;
}
void yyerror()
{
printf("Error\n");
}




