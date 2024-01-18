/*1. Contador de dígitos
Escribe una función que cuente y muestre en pantalla la cantidad de dígitos en un número entero positivo.*/

#include<stdio.h>
int contador_numeros (int numero);

int main()
{
    int numero;
    int contador=0;
    int numero_i;

    printf("ingrese un numero: ");
    scanf("%d", &numero);
    numero_i = contador_numeros (numero);

    printf("la cantidad de digitos es: %d", numero_i);


}


int contador_numeros (int numero)
{
    int contador=0;



    while (numero > 0)
    {
        numero /= 10;
        contador++;
    }
    return contador;
}
