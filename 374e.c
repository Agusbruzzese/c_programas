/*Sumatoria dada*/




#include<stdio.h>


main(){
    float num, fac=1, e = 2, x, pot;

    printf("ingrese un numero para aproximar el valor de e: \n");//prompt
    scanf("%f", &num);

   while (num > 0){ //e = 1 + (1 / 1!)+ (1 / 2!) +..... etc
        fac *= num;
        while (num < x)
            pot += (x * x);
        e += (1 / fac);
        num--;
    }
    printf("%.4f\n", e);
}

