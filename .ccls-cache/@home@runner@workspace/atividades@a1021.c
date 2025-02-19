#include <stdio.h>

int main() {

float valor,troco, cem, cinquenta, vinte, dez, cinco, dois, um, m1, m50, m25, m10, m5, m01;

scanf("%f",&valor);

troco = valor;
  
cem = troco / 100.0;
troco = troco - (cem *100.0);
  
cinquenta = troco / 50.0;
troco = troco - (cinquenta * 50.0);

vinte = troco / 20.0;
troco = troco - (vinte * 20.0);

dez = troco /10.0;
troco = troco -(dez * 10.0);

cinco = troco / 5.0;
troco = troco - (cinco * 5.0);

dois = troco / 2.0;
troco = troco - (dois * 2.0);

um = troco /1.0;
troco = troco - (um * 1.0);

m50 = troco / 0.50;
troco = troco - (m5 * 0.5);

m25 = troco / 0.20;
troco = troco - (m25 * 0.2);

m10 = troco /0.10;
troco = troco - (m10 * 0.1);

m5 = troco / 0.5;
troco = troco - (m5 * 0.05);

printf("%.2f\n",valor);

printf("%.0f nota(s) de R$ 100,00\n",cem);

printf("%.0f nota(s) de R$ 50,00\n",cinquenta);

printf("%.0f nota(s) de R$ 20,00\n",vinte);

printf("%.0f nota(s) de R$ 10,00\n",dez);

printf("%.0f nota(s) de R$ 5,00\n",cinco);

printf("%.0f nota(s) de R$ 2,00\n",dois);
  
printf("%.0f moedas(s) de R$ 1,00\n",um);
  
printf("%.0f moedas(s) de R$ 0,50\n",m50);

printf("%.0f moedas(s) de R$ 0,25\n",m25);

printf("%.0f moedas(s) de R$ 0,10\n",m10);

printf("%.0f moedas(s) de R$ 0.05\n",m5);

printf("%.0f moedas(s) de R$ 0,01\n",troco);
  
return 0;

}
