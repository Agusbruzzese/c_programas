/*Encriptacion para empresa de telefono*/

#include<stdio.h>

main(void){
    int num, d_1, d_2, d_3, d_4;


    printf("Ingrese un numero de 4 cifras para ser codificado: \n");
    scanf("%d", &num);

    d_1 = ((num / 1000) + 7) % 10;
    d_2 = ((num / 100) + 7) % 10;
    d_3 = ((num / 10) + 7) % 10;
    d_4 = ((num / 1) + 7) % 10;

    printf ("%d %d %d %d", d_1, d_2, d_3, d_4);
}


