/*imprimir patron de estrellitas */

#include<stdio.h>

main(){
    int i=0, x=0;

    while (x < 9){
        printf("\n");
        if (x%2 == 0){
            while (i < 9){
                printf(" ");
                printf("* ");
                i++;
            }
        }
        else{
            while (i < 9){
                printf(" ");
                printf("/ ");
                i++;
            }
        }
    x++;
    }

}
