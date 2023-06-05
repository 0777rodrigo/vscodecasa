#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, numeroPar = 0, numeroImpar = 0;
    float numero[6];

    for (i = 0; i < 6; i++)
    {

        printf("digite o %d numero \n ", i + 1);
        scanf("%f",&numero[i]);
    }

    if (numeroPar % 2 == 0)

    {

        numeroPar++;
    }
    else if (numeroImpar % 2 == 0)
    {

        numeroImpar++;
    }
    {
        printf("quantidade de numeros pares %i \n ", numeroPar);
        printf("quantidade de numeros impares %i \n ", numeroImpar);
    }
    return 0;
}
