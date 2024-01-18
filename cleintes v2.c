/*Registrar cuenta de usuarios V.2 con registro de cleintes SIN vectores*/
#include<stdio.h>
/*Inicializar variables NO SE SI SE PUEDE DESPUES VEO*/
main(void){

    int i,num_cl, cred_tot,cred_lim, x=1;
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
        x += 1;

    }



/*Imprimir datos del usiario indicando el estado de su cuenta*/
}
