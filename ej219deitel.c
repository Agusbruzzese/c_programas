//comparar dos enteros

#include<stdio.h>

main(void){
    int num1, num2;
    printf("Ingrese dos enteros \n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("El numero %d, es mayor que %d\n", num1, num2);
    }
    if (num1 < num2){
        printf("El numero %d, es menor que %d\n", num1, num2);
    }
    if (num2 > num1){
        printf("El numero %d, es mayor que %d\n", num2, num1);
    }
    if (num2 > num1){
        printf("El numero %d, es menor que %d\n", num2, num1);
    }
    if (num1 == num2){
        printf("El numero %d, es igual que %d\n", num1, num2);
    }
}
