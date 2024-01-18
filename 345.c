/*lados de un triangulo reactanglo*/



#include<stdio.h>

main(){
    float may, lado1, lado2, lado3, med, men,i=1, cate, hip;

    printf("ingrese el primer lado: \n");
    scanf("%f", &lado1);
    printf("ingrese el segundo lado: \n");
    scanf("%f", &lado2);
    printf("ingrese el ultimo lado: \n");
    scanf("%f", &lado3);

    while (i<=3){
        if (lado1 > may){
            may = lado1;
            med = lado2;
            men = lado3;
            }
        if (lado2 > may){
            may = lado2;
            med = lado1;
            men = lado3;
            }
        if (lado3 > may){
            may = lado3;
            med = lado2;
            men = lado1;
            }


        i++;
        }
        cate =(med * med) + (men * men);
        hip = may * may;
        if ( cate == hip)//comparar por pitagoras
            printf("SI es posible formar triangulo rectangulo...");
        else
            printf("NO es posible formar triangulo rectangulo...");


}
