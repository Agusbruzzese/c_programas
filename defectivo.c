/*
Agustin S. Bruzzese
Comision 2 - 2023
Programacion 1 - Ingenieria en computacion
Escribe una función que determine si un número entero positivo es un número defectivo.*/

#include<stdio.h>


int es_defectivo();


int main()
{
    int numero;
    int  valor_bool = 0;

    printf ("Ingrese un numero para verificar si es defectivo: ");
    scanf("%d", &numero);

    if(es_defectivo(numero) == 1)
    {
        printf("No es defectivo\n");
    }
    else
    {
        printf("Es defectivo\n");
    }
}

//esta funcion divide desde el 1 hasta el numero ingresado verificando si el resto es o no 0
//en caso de ser 0 , es divisor, por lo cual se agrega a una variable sumadora, que posteriormente verifica
//si es mayor o no al numero ingresado.
int es_defectivo(int numero)
{
    int i = 1; // Comenzar en 1, ya que 0 no es un divisor válido
    int suma = 0;

    while (i < numero)
    {
        if (numero % i == 0)
        {
            suma += i; // Acumular los divisores
        }
        i++;
    }
    if (suma > numero)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
