/*calcular x elevad a una potencia y  usando while*/

#include<stdio.h>

main(void){
    int x = 2, y = 5, res = 2,i = 0; // x es la base, y el exponente, que es la cantidad de veces que multiplico

    while (i < y){
        res *= x; //res y x tienen que empezar siendo el mismo numero, es decir la base
        i++;
        printf("%d\n", res);
    }
}
