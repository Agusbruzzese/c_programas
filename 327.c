/*imprimir numueros sumados mas 2 4 y 6*/


#include<stdio.h>

main(void){
    int i=1, a, max = 0, b;

    while (i<=5){
        printf("Ingresar dos numeros para evaluar: \n");
        scanf("%d%d", &a,&b);
        if (a > b){
            if(a > max)
                max = a;
            else
                (b > max);
        }
        else
            if (b > a)
                if (b > max)
                    max = b;
        i+=1;

        printf("El maximo numero ingresado es %d, y el siguiente es %d\n", a, b);

    }


}
