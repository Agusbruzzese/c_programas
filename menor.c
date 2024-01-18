/*5. Menor de Tres Números
Escribe una función similar a la anterior, pero que devuelva el menor de tres números enteros dados.*/



#include<stdio.h>

int comparar_numeros(int numero1, int numero2, int numero3);

int main ()
{
    int numero1;
    int numero2;
    int numero3;
    int menor;

    printf("ingrese un numero: ");
    scanf("%d", &numero1);
    printf("ingrese otro numero: ");
    scanf("%d", &numero2);
    printf("ingrese un ultimo numero: ");
    scanf("%d", &numero3);


    menor = comparar_numeros(numero1, numero2, numero3);
    printf("El menor es %d", menor);

}

int comparar_numeros(int numero1, int numero2, int numero3)
{
    int menor;
    if (numero1<numero2)
    {
        if (numero1<numero3)
        menor = numero1;
        else if(numero3<numero1)
        {
            menor = numero3;
        }
    }
    else if(numero2<numero1)
    {
        if (numero2<numero3)
        {
            menor = numero2;
        }
        else if(numero3<numero2)
        {
            menor = numero3;
        }

    }
    else if(numero3<numero1)
    {
        if (numero3<numero1)
        {
            menor = numero3;
        }
        else if(numero2<numero3)
        {
            menor = numero2;
        }

    }
    return menor;
}


