/*Faça uma função que verifique se um valor é perfeito
ou não. Um valor é dito perfeito quando ele é igual a
soma dos seus divisores excetuando ele próprio.
(Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores).
A função deve retornar 1 caso o numero seja perfeito
ou 0 caso o número não seja perfeito.*/

#include <stdio.h>
#include <stdlib.h>

int perfeito(int x);
int main()
{

    int i;
    int retorno;

    for(i=0; i<1000; i++)
    {
            retorno = perfeito(i);

            if (retorno == 1 )
            {
                printf("O numero %d é perfeito\n", i);
            }
    }
    return 0;
}

int perfeito (int x)
{
    int divisor;
    int som = 0;

    for (divisor = 1; divisor <x; divisor++)
    {
        if (x%divisor==0)
        {
        som = som + divisor;
        }
    }

    if (som ==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}