/*Implementar una funci�n que dado un n�mero entero y un l�mite,
retorne el n�mero incrementado en 1 hasta el l�mite.

int contador_circular(int i, int limite);
Cuando i == limite, la funci�n retornar� 0.*/

#include<stdio.h>

int contador_circular(int i, int limite);

int main()
{
    int i;
    int limite;

    printf("Ingrese un numero para sumar: ");
    scanf("%d", &i);
    printf("Ingrese un numero para establecer el limite: ");
    scanf("%d", &limite);

    int resultado = contador_circular(i, limite);
    printf("%d", resultado);

}

int contador_circular(int i, int limite)
{
    while(i<limite)
    {
        i = i + 1;
    }
    return i;
}
