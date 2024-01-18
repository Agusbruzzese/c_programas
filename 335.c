/*palindromo*/

#include<stdio.h>

main(void){
		//variables
        int pal, cifra=0, cifra_2=0,cifra_3=0,cifra_4=0,cifra_5=0, i=0;
        int resto_1,resto_2,resto_3,resto_4;
        printf("ingrese el numero maximo de cindo digitos: \n");
        scanf("%d", &pal);

            while (i < pal){ //usar modulo y division para analizar cada numero
                cifra = pal / 10000;
                resto_1 = pal % 10000;
                cifra_2 = resto_1 / 1000;
                resto_2 = resto_1 % 1000;
                cifra_3 = resto_2 / 100;
                resto_3 = resto_2 % 100;
                cifra_4 = resto_3 / 10;
                cifra_5 = resto_3 % 10;
                //cifra_5 = resto_4 / 1;
                i += 1;

                }
                if (cifra == cifra_5){
                    if (cifra_2 == cifra_4);
                        printf("Es palindromo...");
                }
                else
                    printf("NO es palindromo, siga buscando...");

            //imprimir resultados
            //printf("%d %d %d %d %d",cifra, cifra_2,cifra_3,cifra_4,cifra_5 );
}
