/*potenciacion mejorado con ingreso de usuario de base y exponente*/

#include<stdio.h>

main(void){/*declaracion e inicializacion de variables*/
    int x, y = 0, res = 0, i = 0, prog;

    printf("Programa para calcular las potencias de numeros naturales y enteros,\n con exponentes NATURALES\n");
    printf("ingrese 0 para salir, otra tecla para continuar: \n");
    scanf("%d", &prog);
    while (prog != 0){
        /*casos base natural y exponente natural*/
        printf("ingrese la base: \n");;
        scanf("%d", &x, &res);
        res = x;
        printf("ingrese el exponente: \n");
        scanf("%d", &y);
        if (x > 0){
            while (i < y-1){

                res *= x;
                i++;
                printf("%d a la %d es %d\n", x, i+1, res);
            }
        }
        /*casos base entero y exponente natural*/
        else{
            if (x % 2 == 0){
                x *= -1;
                while (i < y-1){

                    res *= x;
                    i++;
                    printf("%d a la %d es %d\n", -x, i+1, -1*res);
                }
            }
            else {
                x *= -1;
                while (i < y-1){

                    res *= x;
                    i++;
                    printf("%d a la %d es %d\n", -x, i+1, res);
                }
            }
          /*casos base entero y exponente fraccionario*/

        }
        printf("ingrese 0 para salir, otra tecla para continuar: \n");
        scanf("%d", &prog);
    }
}

