/*Suma en rango
Implementar una función que sume los números enteros comprendidos entre dos cotas.

Siendo n inclusive y m no inclusive.

int suma_rango(int n, int m);*/


#include<stdio.h>

int suma_rango(int n, int m);

int main()
{
    int n;
    int m;
    int suma=0;

    printf("Ingrese un numero para sumar: ");
    scanf("%d", &n);
    printf("Ingrese otro numero para sumar: ");
    scanf("%d", &m);

    suma = suma_rango(n, m);

    printf("%d", suma);

}

int suma_rango(int n, int m)
{
    int i=1;
    int suma=n;

    while (n+i < m)
    {
        suma = suma + (n+i);
        i++;


    }
    return suma;

}
