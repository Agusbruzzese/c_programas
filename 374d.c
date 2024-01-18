/*Calcular un aprocimado de la definicion de e*/


#include<stdio.h>

main(){
    float num, fac=1, e = 2;

    printf("ingrese un numero para aproximar el valor de e: \n");//prompt
    scanf("%f", &num);

    while (num > 0){ //e = 1 + (1 / 1!)+ (1 / 2!) +..... etc
        fac *= num;
        e += (1 / fac);
        num--;
    }
    printf("%.4f\n", e);
}

