/*Calcular salario semanal de un empleado en funcion de las horas trabajadas*/

#include<stdio.h>

main(void){
    int horas, horas_ex;
    float valor_hora, sueldo_ex;

    printf("Ingrese -1 para salir o las horas trabajadas: \n");
    scanf("%d", &horas);

        while (horas != -1){

            printf("Ingrese el monto por hora: \n");
            scanf("%f", &valor_hora);
            if (horas > 40){
                horas_ex = horas -40;
                sueldo_ex = horas_ex * (valor_hora * 1.5) + 40;
                printf("El salario semanal es de %.2f$\n", sueldo_ex);
                }
            else{
                printf("El salario semanal es de %.2f$\n", valor_hora * horas);
                }

            printf("Ingrese -1 para salir o las horas trabajadas: \n");
            scanf("%d", &horas);

        }
}
