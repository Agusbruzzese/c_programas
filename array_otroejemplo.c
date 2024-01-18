/*otro ejemplo arrays, generar valores a clocarse en los elementos del array*/

#include<stdio.h>

#define SIZE 10 //definir el tamano de cada arreglo com una cosntante
//simolica, hace a los programas mas dimensionables, solo usar MAYUSCULAS

int main()
{
    int s[SIZE], j;

    for (j = 0; j <= SIZE - 1; j++)
    {
        s[j] = 2 + 2 * j;
    }
    printf("%s%13s\n", "Element", "Value");

    for (j = 0; j <= SIZE - 1; j++)
    {
        printf("%7d%13d\n", j, s[j]);
    }
    return 0;
}
