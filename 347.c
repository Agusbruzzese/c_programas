/*Factorial de un numero*/


#include<stdio.h>

main(){
    int num, i, fac=1, sfac = 1;

    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%d", &num);

    while (num > 0){

        fac *= num;
        num--;

    }
    printf("%d", fac);

}
