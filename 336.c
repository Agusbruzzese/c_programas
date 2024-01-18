/*binario a decimal*/
#include<stdio.h>
#include<math.h>

main(void){
		//variables
        int i=0,fin_dec=0, dec=0, num, pot, bin;
        printf("ingrese el numero: \n");
        scanf("%d", &bin);
		//contar cifras NO funco porque me daba el numero cortado, con funciones si anda
        /*if (num == 0)
            cifra = 1;
        else{
            while (num > 0){
                num = num / 10;
                cifra ++;
            }
        }
        printf("%d\n", cifra);*/

		//hacer un bucle con la cantidad de cifras para usar div entera y resto
		while (bin != 0){ //problema con variable local y global a esta parete me llegan ceros

            //printf("%d\n", num);//solo para revisar que numero llega hasta aca
            num = bin % 10;
            bin /= 10;
            dec = num * pow(2, i);
            fin_dec = dec + fin_dec;
            //printf("%d", bin);
            //cifra --;
            ++i;
		}
		printf("%d", fin_dec);

}
