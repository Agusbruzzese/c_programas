/*par o impar*/

#include<stdio.h>

main(void){
    int num1;
    float resto;

    printf("ingrese numero enteros: \n");
    scanf("%d", &num1);

    resto = num1 % 2;

    if (resto == 0){
        printf("El numero es PAR");
    }
    if (resto == 1){
        printf("El numero es IMPAR");
    }
}
