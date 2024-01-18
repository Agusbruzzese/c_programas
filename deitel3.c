//if y operadores relacionales
#include<stdio.h>

main(void){
    printf("Ingrese dos numeros para comparar: ");

    int int1 = 0, int2 = 0;

    scanf("%d %d", &int1, &int2 );

    if(int1 == int2){
        printf("%d are equal to %d...\n", int1, int2);
    }
    if(int1 != int2){
        printf("%d are NOT equal to %d...\n", int1, int2);
    }
    if(int1 < int2){
        printf("%d are greater than %d...\n", int1, int2);
    }
    if(int1 > int2){
        printf("%d are less than %d...\n", int1, int2);
    }

}
