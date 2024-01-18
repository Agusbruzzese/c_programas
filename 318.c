/*Registrar cuenta de usuarios*/
#include<stdio.h>
/*Inicializar variables*/
main(void){

    int i,num_cl, cred_tot,cred_lim;
    float balance;
    printf("Ingrese -1 para salir o cualquier tecla para continuar: \n");
    scanf("%d", &i);
/*Cliclo controlado por centinela y pedido de datos*/
    while(i != -1){
        printf("Ingrese el numero de cliente: \n");
        scanf("%d", &num_cl);
        printf("Ingrese el balance inicial del cliente: \n");
        scanf("%f", &balance);
        printf("Ingrese el credito total: \n");
        scanf("%d", &cred_tot);
        printf("Ingrese el limite de credito: \n");
        scanf("%d", &cred_lim);
        balance = (cred_lim - cred_tot);
            if (cred_lim < cred_tot)
                printf("El cliente tiene **SOBREGIRO**, su balance es %.3f: \n", balance);
            else
                printf("El balance es%.3f: \n", balance);

        printf("Ingrese -1 para salir o cualquier tecla para continuar: \n");
        scanf("%d", &i);

    }



/*Imprimir datos del usiario indicando el estado de su cuenta*/
}
