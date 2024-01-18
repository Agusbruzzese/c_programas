/*Factorial de un numero*/


#include<stdio.h>

main(){
    float num, i, fac=1, sfac = 1;
    float e = 2, eprob =0;
    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%f", &num);

    while (num > 0){
        fac *= num;
        e += (1/fac);
        //e = eprob +1;




        //eprob = 1+(1/(float)fac) + eprob;
        //fac *= num;
        num--;

    }
    //printf("%d\n", fac);


    printf("%f\n", e);



}
