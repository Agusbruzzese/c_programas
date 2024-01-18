/*programa para el ingreso de licenciados en bienes raices*/

#include<stdio.h>

main(void){
    int i,cont_aprob = 0,nota, cont_desap = 0;

    while (i < 10){
        printf("Ingrese 1 si el estudiante aprobo o 2 si desaprobo: \n");
        scanf("%d", &nota);
        if (nota == 1){
            cont_aprob = cont_aprob +1;
        }
        else{
            cont_desap = cont_desap +1;
        }
    i = i + 1;
    }
    if (cont_aprob >= 8){
        printf("Aumente la matricula...\n, aprobaron %d alumnos",cont_aprob );
    }
    else {
        printf("La cantidad de aprobados es %d, y de desaprobados es %d", cont_aprob, cont_desap);
    }

}
