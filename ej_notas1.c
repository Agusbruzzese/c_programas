/*promedio de notas de estudiantes*/

#include<stdio.h>

main(void){
    int total = 0;
    int grade_counter = 1, nota;


    while (grade_counter < 10){
        printf("Ingrese nota: \n");
        scanf("%d", &nota);
        total = nota + total;
        grade_counter = grade_counter + 1;

    }

    float class_av = total / 10;
    printf("El promedio de la clase es %.2f\n", class_av);
    return 0;
}
