/*Suma de elementos del un array*/



#include<stdio.h>

#define SIZE 13 //definir el tamano de cada arreglo com una cosntante
//simolica, hace a los programas mas dimensionables, solo usar MAYUSCULAS

int main()
{
    int s[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 100, 45}, j, total = 0;

    for (j = 0; j <= SIZE - 1; j++)
    {
        total += s[j];
    }
    printf("La suma de los elemnto del array es %d\n", total);


    return 0;
}

