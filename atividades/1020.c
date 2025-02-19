#include<stdio.h>

int main(){

int idade,ano,meses,dias;

scanf("%i", &idade);

ano = idade/365;
idade = idade %365;

meses = idade/30;
dias = idade %30;


printf("%i ano(s)\n", ano);
printf("%i mes(es)\n", meses);
printf("%i dia(s)\n",dias );
return 0;
}