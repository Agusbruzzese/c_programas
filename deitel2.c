/*pogramitapara usar el scanf*/

#include<stdio.h>

int main(void){

    int integer1 = 0;/*definicion de variables*/
    int integer2 = 0;
    printf("Enter first integer: ");//prompt le dice al usuario QUE hacer
    scanf("%d", &integer1);// & es un adress operator
    printf("Enter second integer: ");
    scanf("%d", &integer2);//decimal integer
    int sum = 0;//se puede asignar y operar en lamims linea
    sum = integer1+integer2;
    printf("Sum is %d\n", sum);//se puede operar en el printf
}
