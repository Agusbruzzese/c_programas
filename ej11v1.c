/* suma circular/ contador
 Agustin S. Bruzzese
 Comision 2 - 2023
 Programacion 1 - Ingenieria en computacion */
/*Implementar una función que dado un número entero y un límite,
retorne el número incrementado en 1 hasta el límite.*/
#include <stdio.h>

int contador_circular(int base, int limite);

int main()
{
    int i = 0;
    int bucle = 0;
    int limite;
    int base;

    printf("Ingrese un numero base: ");
    scanf("%d", &base);
    printf("Ingrese un numero para establecer el limite: ");
    scanf("%d", &limite);

    while (i < limite)
    {
        bucle = contador_circular(bucle, limite);
        printf("%d\n", bucle);
        i++;
    }

    return 0;
}

int contador_circular(int base, int limite)
{
    base++;
    if (base == limite)
    {
        base = 0;
    }
    return base;
}



