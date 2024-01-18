/*imprimir numueros sumados mas 2 4 y 6*/


#include<stdio.h>

main(void){
    int i=1, a=3;
    printf("A\tA+2\tA+4\tA+6\n",i);
    while (i<=5){


        printf("%d\t%d\t%d\t%d\t\n",a,a+2,a+4,a+6);
        i+=1;
        a += 3;
    }

}
