/*Algoritmo de euclides para hallar MCD, mientras muestra los resultados parciales*/

#include<stdio.h>

int algoritmo_euclides(int dividendo, int divisor);

int main()
{
    int dividendo=440, divisor=252;
    printf("   MCD es**%d***",algoritmo_euclides(dividendo, divisor));
}

int algoritmo_euclides(int dividendo, int divisor)
{
    //agrregar casos 0, negativos y unicos
    int resto , cociente, nuevo_dividendo;
    while (divisor != 0)
    {
        cociente = dividendo / divisor;
        resto = dividendo % divisor;
        nuevo_dividendo = divisor;
        divisor = resto;

        printf("Dividendo: %6d ||",dividendo);
        printf("Divisor: %6d \n",nuevo_dividendo);

        dividendo = nuevo_dividendo;

    }
    return dividendo;
}
