/*prpgrama para elegir el mas grande de deiz numeros*/

#include<stdio.h>

main(void){
    int i, x = 0, mayor;

    while (x <= 9){
        printf ("ingrese el numero a comparar: \n");
        scanf("%d", &i);
            if (i > mayor)
                mayor = i;
        x += 1;
        }
    printf("El numero mas grande es %d", mayor);
}
