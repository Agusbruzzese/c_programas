/*Sumatorias*/

#include<stdio.h>

main(){
    int num, fac=1;

    printf("ingrese un numero para calcular su factorial: \n");//prompt
    scanf("%d", &num);

    while (num > 0){
        fac *= num;
        num--;
    }
    printf("%d\n", fac);
}
