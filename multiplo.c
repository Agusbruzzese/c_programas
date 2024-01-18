/*multiplo o no*/

#include<stdio.h>

main(void){
    int num1, num2;
    float resto;

    printf("ingrese dos numeroZ enteros: \n");
    scanf("%d %d", &num1, &num2);

    resto = num1 % num2;

    if (resto == 0){
        printf("%d es multiplo de %d", num1, num2);
    }
    if (resto == 1){
        printf("%d es NO es multiplo de %d", num1, num2);
    }
}
