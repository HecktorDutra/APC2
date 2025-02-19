#include <stdio.h>

int main() {

float valor;
  
int troco, cem, cinquenta, vinte, dez, cinco, dois, m1, m50, m25, m10, m5;

scanf("%f",&valor);

troco = valor;

cem = troco / 100;
troco = troco - (cem * 100);

cinquenta = troco / 50;
troco = troco - (cinquenta * 50);

vinte = troco / 20;
troco = troco - (vinte * 20);

dez = troco / 10;
troco = troco -(dez * 10);

cinco = troco / 5;
troco = troco - (cinco * 5);

dois = troco / 2;
troco = troco - (dois * 2);

m1= troco / 1;
troco = troco - (m1 * 1);

m50 = troco / 0.5;
troco = troco - (m5 * 0.5);

m25 = troco / 0.2;
troco = troco - (m25 * 0.2);

m10 = troco /0.1;
troco = troco - (m10 * 0.1);

m5 = troco / 0.5;
troco = troco - (m5 * 0.05);


printf("%.2f\n",valor);

printf("%d nota(s) de R$ 100,00\n",cem);

printf("%d nota(s) de R$ 50,00\n",cinquenta);

printf("%d nota(s) de R$ 20,00\n",vinte);

printf("%d nota(s) de R$ 10,00\n",dez);
  
printf("%d nota(s) de R$ 5,00\n",cinco);

printf("%d nota(s) de R$ 2,00\n",dois);

printf("%d moedas(s) de R$ 1,00\n",m1);

printf("%d moedas(s) de R$ 0,50\n",m50);

printf("%d moedas(s) de R$ 0,25\n",m25);

printf("%d moedas(s) de R$ 0,10\n",m10);

printf("%d moedas(s) de R$ 0,05\n",m5);

printf("%d moedas(s) de R$ 0,01\n",troco);

return 0;

}
