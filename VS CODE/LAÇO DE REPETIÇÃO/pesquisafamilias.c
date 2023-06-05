#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int filhos, contador;
    float media, salario, mediasalario, mediafilhos, menorsalario = -9999, maiorsalario;
    float somasalario, totalfamilias, somafilhos;

    menorsalario = -9999


    printf("informe seu salario \n");
    scanf("%f", &salario);

    

    printf("informe o numero de filhos \n");
    scanf("%i", &filhos);
    
    
    somasalario += salario;
    somafilhos += filhos;
    contador++;

    media = somasalario / contador;
    media = somafilhos / contador;


    if (salario > maiorsalario)
    {

        printf("maiorsalario");
    }
    else
    {
    }
    if (salario < menorsalario)
    {
        printf("menor salario");
    }

    printf("total de familias %f \n", totalfamilias);
    printf("media salarial %f \n ", mediasalario);
    printf("media de filhos %f \n ", mediafilhos);
    {
    }

    return 0;
}