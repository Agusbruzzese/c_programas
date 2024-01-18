/*
Primos
Agustin S. Bruzzese
Comision COMPLETAR - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

int es_primo(int numero);

int main()
{
        int numero;
        int valor;


        printf("Ingrese un numero para evaluar si es primo: ");
        scanf("%d", &numero);

        if (numero <= 1)
        {
            printf("ingrese un  numero mayor a 2...");
        }
        else
        {
            valor = es_primo(numero);

            printf("El valor es %d: ", valor);
        }

}

int es_primo(int numero)
{
    int cont=0;
    int i=1;
    int valor=0;

        while (i<=numero)
        {
                if (numero % i == 0)
                {
                        cont++;
                }

                i++;
        }
        if (cont==2)
        {
                valor = 0;
        }
        else
        {
                valor = 1;
        }
        return valor;
}
