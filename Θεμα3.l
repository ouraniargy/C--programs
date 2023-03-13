%{
#include <stdio.h>

%}
ALPHABET [A-Z]
POINT ^"shmeio"" "{ALPHABET}{1}
LINE ^"eytheia"" "{ALPHABET}{2}
TRIANGLE ^"trigwno"" "{ALPHABET}{3}
SQUARE ^"tetragwno"" "{ALPHABET}{4}
PENTAGON ^"pentagwno"" "{ALPHABET}{5}
HEXAGON ^"exagwno"" "{ALPHABET}{6}
HEPTAGON ^"eptagwno"" "{ALPHABET}{7}
OCTAGON ^"octagwno"" "{ALPHABET}{8}

%%
{POINT} printf("%c%c%c%c%c%c : geometrikh ontothta\n %c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[7]);
{LINE} printf("%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[8],yytext[9]); 
{TRIANGLE} printf("%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[8],yytext[9],yytext[10]);
{SQUARE} printf("%c%c%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[7],yytext[8],yytext[10],yytext[11],yytext[12],yytext[13]);
{PENTAGON} printf("%c%c%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[7],yytext[8],yytext[10],yytext[11],yytext[12],yytext[13],yytext[14]);
{HEXAGON} printf("%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c%c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[8],yytext[9],yytext[10],yytext[11],yytext[12],yytext[13]);
{HEPTAGON} printf("%c%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c%c%c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[7],yytext[9],yytext[10],yytext[11],yytext[12],yytext[13],yytext[14],yytext[15]);
{OCTAGON} printf("%c%c%c%c%c%c%c%c : geometrikh ontothta\n %c%c%c%c%c%c%c%c : onoma geometrikhs ontothtas\n", yytext[0],yytext[1],yytext[2],yytext[3],yytext[4],yytext[5],yytext[6],yytext[7],yytext[9],yytext[10],yytext[11],yytext[12],yytext[13],yytext[14],yytext[15],yytext[16]);
. printf("X");
%%

int yywrap(){}
int main(){
    printf("Give Shapes and Points:\n");
    yylex();
return 0;
}



