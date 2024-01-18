/*100 asteriscos uno en uno y dios en el de todos*/



#include<stdio.h>

main(void){
    int suma, cont;

    while (cont < 100){

        printf("*");
        cont++;
        if (cont % 10 == 0){
            printf("\n");
        }
    }
}
