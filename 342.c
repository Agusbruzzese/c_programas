/*ingresa radio, caclula diametro, circunferenci ay area*/

#include<stdio.h>

main(){
    float radio, area, diam,circ ;
    float pi = 3.14159;

    printf ("ingrese radio: \n");
    scanf("%f", &radio);

    diam = radio * 2;
    circ = radio * 2 * pi;
    area = pi * radio * radio;

    printf ("El diametro es %.2f,\ncircunferencia es %.2f\n y area es %.2f", diam, circ, area);

}
