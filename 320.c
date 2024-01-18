/*Calcular interes simple*/

#include<stdio.h>

main(void){
    int days;
    float rate,princ, interest;


    printf("Ingrese -1 para salir o cualquier monto para continuar: \n");
    scanf("%f", &princ);

    while (princ != -1){

        printf("Ingrese la tasa de interes: \n");
        scanf("%f", &rate);
        printf("Ingrese la cantidad de dias de deposito: \n");
        scanf("%d", &days);
        interest = princ * rate * days / 365;
        printf("El interes simple del prestamo ingresado es %.3f\n", interest);
        printf("Ingrese -1 para salir o un monto para continuar: \n");
        scanf("%f", &princ);

    }
}
