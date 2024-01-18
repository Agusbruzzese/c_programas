/*leer un entero y decir cuantos 7's tiene*/

#include<stdio.h>


main(){
    int num, digit, cont=0;

    printf("Ingrese un numero: \n");
    scanf("%d", &num);

    while (num > 0){ /*para determinar cuantos 0 le pones al 10mil podes hacer pasadas y luego multiplocar ese 10 por l apotencia*/
        digit = num;
        //printf("%d\n", digit);
        num /= 10;
        digit %= 10; //usar una variable auxiliar para no destruir la variable
        if (digit == 7){
            cont ++;
            }


    }
    printf("%d\n", cont);

}
