/*Leer tres float y determinar su puede formar un triangulo*/

#include<stdio.h>

main(){
    float lado1, lado2, lado3;

    printf("ingrese el primer lado: \n");
    scanf("%f", &lado1);
    printf("ingrese el segundo lado: \n");
    scanf("%f", &lado2);
    printf("ingrese el ultimo lado: \n");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3){
        if(lado2 + lado3 > lado1){
            if(lado3 + lado2 > lado1)
                printf("el triangulo es POSIBLE...");

        }

    }
    else
        printf("NO es posible...");
}
