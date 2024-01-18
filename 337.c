#include<stdio.h>

main(){
    //poner variables
    int limite = 3000000,i ;
    int suma;
    int paso=1;
    while (i <= limite){//numero % multiplo == 0
        suma += 1;
        if (i % 1000000 == 0){
            printf("%d\n", i);
        }
    i++;
    }

}
