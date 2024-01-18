/*comparar 5 enteros*/

#include<stdio.h>

main(void){
    int num1, num2, num3, num4, num5, mayor, menor;

    printf("ingrese cinco numeros enteros: \n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    mayor = num1;
    menor = num1;

    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }
    if (num4 < menor){
        menor = num4;
    }
    if (num5 < menor){
        menor = num5;
    }
    if (num2 > mayor){
        mayor = num2;
    }
    if (num3 > mayor){
        mayor = num3;
    }
    if (num4 > mayor){
        mayor = num4;
    }
    if (num5 > mayor){
        mayor = num5;
    }
    printf("El numero mas grande es %d\ny el mas pequenio es %d\n", mayor, menor);
}
