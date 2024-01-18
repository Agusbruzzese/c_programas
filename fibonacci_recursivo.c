/*Funcion recursiva para calcular Fibonacci*/

#include<stdio.h>

long fibonacci (long);

int main()
{
    long result;
    long number;

    printf("Enter an integer: ");
    scanf("%ld", &number);
    result = fibonacci(number);
    printf("Fibonacci (%ld) = %ld\n", number, result);
    return 0;
}


//esta funcion calcula la sucesion de fibonacci (lo hice con funcion recursiva porque lo exploica asi Deitel en la pagina 180
//y me gusto la simpleza de la solucion, aunque no entiendo plenamente como funcionan
//si se ingresa un numero mayor a 41 el programa explota
long fibonacci (long n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
