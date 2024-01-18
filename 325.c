/*imprimir numueros multiplicados por 10 y 100*/


#include<stdio.h>

main(void){
    int i=1;
    printf("N\tN*10\tN*100\tN*1000\n",i);
    while (i<=10){


        printf("%d\t%d\t%d\t%d\t\n",i,i*10,i*100,i*1000);
        i+=1;
    }

}
