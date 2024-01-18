/*Lados de un cuadrado impresos como cuadrado de asteriscos*/


#include<stdio.h>

main(void){
		//variables
        int lado, i=1,j=0;
        printf("ingrese el lado de un cuadrado: \n");
        scanf("%d", &lado);

        while (i <= lado){ //imprime la primera linea y la ultima d estrella continuas
            if (i == 1 || i == lado){
            printf("\n");
            j = 0;
                while(j <= lado){
                    printf("*");

                    j += 1;
                    }
            }
            else{
                printf("\n*");
                j = 0;
                while(j < lado){
                    printf(" ");
                    j += 1;
                    }
                //printf("*");
                }
                printf("*");//para que no quede desparejo la base
            i += 1;
            }
        }
