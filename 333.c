/*Lados de un cuadrado impresos como cuadrado de asteriscos*/


#include<stdio.h>

main(void){
		//variables
        int lado, i=0,j=0;
        printf("ingrese el lado de un cuadrado: \n");
        scanf("%d", &lado);
        //operaciones y pedido de datos

        while (i < lado){
            printf("\n");
            j = 0;// se inicializa de nuevo a 0 para que el contador del siguiente bucle pueda leer la variable local
            while(j <= lado){
                printf("*");
                j += 1;
                }
            i += 1;
        }
}
