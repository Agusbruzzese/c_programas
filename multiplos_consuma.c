/*Multiplos*/

#include<stdio.h>

int es_multiplo(int numero, int multiplo);

int main()
{
    int numero;
    int multiplo;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Ingrese otro: ");
    scanf("%d", &multiplo);

    if (numero < multiplo)
    {
        printf("ingrese un numero MAYOR al multiplo\n");
    }
    else
    {
      suma = es_multiplo(numero, multiplo);

      printf("%d", suma);
    }

}

int es_multiplo(int numero, int multiplo)
{
    int resta;
    while (numero>multiplo)
    {
        resta = numero - multiplo;
        numero=numero-multiplo;
    }
    if (resta != 0)
    {
        return 1;
    }
}
