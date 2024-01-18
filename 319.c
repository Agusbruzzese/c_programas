/*Programa para calcular sueldo de empleado de ventas*/

#include<stdio.h>

/*variables*/

main(void){
    int i;
    float sueldo = 0, venta_B;
    char name;

    printf("Ingrese -1 para salir o cualquier tecla para continuar: \n");
    scanf("%d", &i);

    while (i != -1){
        printf("Ingrese el nombre del empleado: \n");
        scanf("%s", &name);
        printf("Ingrese la venta 'v'ruta del local: \n");
        scanf("%f", &venta_B);
        sueldo = (venta_B-(venta_B * 0.9)) + 200;
        printf("El sueldo de %c es de %.2f$\n", name, sueldo);
        printf("Ingrese -1 para salir o cualquier tecla para continuar: \n");
        scanf("%d", &i);
    }

}

