/*2. Suma de d�gitos
Dise�a e implementa una funci�n que calcule la suma de los d�gitos
de un n�mero entero positivo pasado como par�metro.*/

//separar los numeros con modulo e ir sumandolos

/*1. Contador de d�gitos
Escribe una funci�n que cuente y muestre en pantalla la cantidad de d�gitos en un n�mero entero positivo.*/

#include<stdio.h>
int sumador_numeros (int numero);

int main()
{
    int numero;
    int contador=0;
    int sumatoria=0;

    printf("ingrese un numero: ");
    scanf("%d", &numero);
    sumatoria = sumador_numeros (numero);

    printf("la sumatoria de digitos es: %d", sumatoria);


}

/*esta funcion elimina el ultimo digito hasta que queda uno solo, y
va sumando los valores del ultimo digito*/
int sumador_numeros (int numero)
{
    int contador=0;
    int ultimo_dig=numero;
    int sumador=0;



    do
    {
        ultimo_dig=numero;
        ultimo_dig %= 10;
        sumador = sumador + ultimo_dig;
        numero /= 10;
        contador++;

    } while (numero > 0);

    return sumador;
}

