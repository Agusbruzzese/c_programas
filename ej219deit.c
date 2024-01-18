/* suma, promedio, mayor y menor de tres numeros enteros*/

#include<stdio.h>

main(void){
    int num1, num2, num3, suma, promedio, prod, min, max;

    printf("ingrese tres numeros enteros para comenzar a operar: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    suma = num1 + num2 + num3;
    promedio = suma / 3;
    prod = num1 * num2 * num3;
    min = num1;
    max = num1;
    if (num2 < min){
        min = num2;
    }
    if (num3 < min){
        min = num3;
    }
    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }

    printf("Sum is %d\nAverage is %d\nproduct is %d\nSmallest is %d\nLargest is %d\n", suma, promedio, prod, min, max);
}
