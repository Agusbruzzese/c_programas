#include<stdio.h>

main(void){
    int suma, resta, mult, div, resto, num1, num2;
    printf("Ingrese dos numeros enteros: \n");
    scanf("%d %d", &num1, &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1 % num2;
    printf("Los numeros %d y %d\nsumados dan %d\nrestados dan %d\nmultiplicados dan %d\ndivididos dan %d\ny el resto es %d\n", num1, num2, suma, resta,mult, div, resto);
}

