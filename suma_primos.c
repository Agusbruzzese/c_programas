/*
Primos
Agustin S. Bruzzese
Comision 2 - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

int es_primo(int numero);

int sumatoria_primos(int limite);

int main()
{
	int limite;
	int valor;


	printf("Ingrese un numero como limite para sumar solo los primos: ");
	scanf("%d", &limite);

	if (limite <= 1)
	{
	    printf("ingrese un  numero mayor a 2...");
	}

	valor = sumatoria_primos(limite);

	printf("El valor es %d: ", valor);

	return 0;

}

int es_primo(int numero)
{
    if (numero <= 1)
    {
        return 0; // No es primo
    }

    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int sumatoria_primos(int limite)
{
    int numero=2;
    int sumador_primos=0;

    while (numero <= limite)
    {
        if(es_primo(numero))
        {
            sumador_primos = sumador_primos + numero;
        }
        numero++;

    }
    return sumador_primos;

}


