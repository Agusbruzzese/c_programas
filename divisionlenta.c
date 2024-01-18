/*6. Divisiones

Escribir una función que, mediante restas sucesivas, obtenga el valor del cociente y el resto de dos números enteros.

int division_lenta(int dividendo, int divisor);

int cociente_lento(int dividendo, int divisor);*/

/*Suma lenta*/

#include<stdio.h>

main()
{
    int num1;
    int num2;
    int res=0;
    int cociente=0;
    int resto=0;

    printf("ingrese un numero: \n");
    scanf("%d", &num1);
    printf("ingrese otre numero: \n");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("No se puede...");
    }
    else if (num2 < num1)
    {
        if (num2 == 0)
        {
            printf("Error, no se puede dividir por cero...");
        }
        else
        {
            while (num1>num2)
            {
                resto = num1-num2;

                num1=num1-num2;
                //res=res-num2;
                cociente++;
            }
        }

    }

    printf("cociente %d", cociente);
    printf("resto %d", resto);

}

