/*separar digitos*/

#include<stdio.h>

main(void){
    int num1, resto, prCifra,   seCifra,   teCifra,   cuCifra,   qCifra, resto1, resto2,resto3, resto4, resto5 ;

    printf("ingrese un numero  de cinco cifras: \n");
    scanf("%d", &num1);

    prCifra = num1 / 10000;
    resto1 = num1 % 10000;
    seCifra = resto1 / 1000;
    resto2 = resto1 % 1000;
    teCifra = resto2 / 100;
    resto3 = resto2 % 100;
    cuCifra = resto3 / 10;
    resto4 = resto3 % 10;
    qCifra = resto4 / 1;
    resto5 = resto4 % 1;

    printf("El numero es %d %d %d %d %d", prCifra,   seCifra,   teCifra,   cuCifra,   qCifra);

}
