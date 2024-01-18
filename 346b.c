/*Desencriptacion para empresa de telefono*/

#include<stdio.h>

main(void){
    int num, d_1, d_2, d_3, d_4;
    int r_1, r_2, r_3, r_4;

    printf("Ingrese un numero de 4 cifras para ser DES-codificado: \n");
    scanf("%d", &num);

    d_1 = (num / 1000);
    if (d_1 >= 7)
        r_1 -= 7;
    else
        r_1 = d_1 +3;
    printf ("%d ", r_1);


    d_2 = (num / 100) % 10;
    if (d_2 >= 7)
        r_2 = d_2 - 7;
    else
        r_2 = d_2+3;
    printf ("%d ", r_2);


    d_3 = (num / 10) % 10;//me da cero aca
    if (d_3 >= 7)
        r_3 = d_3 - 7; //use mal el += OJO
    else
        r_3 = d_3+3;
    printf ("%d ", r_3);

    d_4 = (num % 10);
    if (d_4 >= 7)
        r_4 = d_4 - 7;
    else
        r_4 = d_4+3;
    printf ("%d ", r_4);






    //printf ("%d %d %d %d", d_1, d_2, d_3, d_4);
}



