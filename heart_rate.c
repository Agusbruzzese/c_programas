/*formula for calculating your maximum heart rate in beats
per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
maximum heart rate*/

#include<stdio.h>

main(void){
    int age, max_hrate = 0, tgt_hrate = 0;

    printf("ingrese su edad: \n");
    scanf("%d", &age);

    max_hrate = 220 - age;
    tgt_hrate = max_hrate * 0.85;

    printf("Segun su edad, el target hrate es de %d", tgt_hrate);
}


