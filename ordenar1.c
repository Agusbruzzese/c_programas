/*ordenar numeros de menor a mayor*/

#include<stdio.h>

main(void){
    int n1, n2, n3, min, may, med;

    printf("ingrese tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    min = 0;
    med = 0;
    may = 0;
    //los 3 iguales
    if (n1 == n2){
        if(n1 == n3){
        printf("son iguales\n");
    }
    }
    //a y b iguales y c mayor
    if (n1 == n2){
        if(n1 < n3){
            printf("%d y %d son iguales\ny %des el mayor\n", n1, n2, n3);
        }
    }
    //a y b iguales y c menor
    if (n1 == n2){
        if(n1 > n3){
            printf("%d y %d son iguales\ny %des el menor\n", n1, n2, n3);
        }
    }

    //c y b iguales y a mayor
    if (n2 == n3){
        if(n1 > n3){
            printf("%d y %d son iguales\ny %des el mayor\n", n3, n2, n1);
    }
    }

    //c y b iguales y a menor
    if (n2 == n3){
        if(n1 < n3){
            printf("%d y %d son iguales\ny %des el menor\n", n3, n2, n1);
        }
        }
    //a y c iguales y b mayor
    if (n1 == n3){
        if(n2 > n3){
            printf("%d y %d son iguales\ny %des el mayor\n", n1, n3, n2);
    }
    }

    //a y c iguales y b menor
    if (n1 == n3){
        if(n2 < n3){
            printf("%d y %d son iguales\ny %des el menor\n", n1, n3, n2);
        }
        }

    if (n1 < n2){
        if (n1 < n3){
            if (n2 < n3){
                min = n1;
                med = n2;
                may = n3;

        }
        }
        }
    if (n1 < n2){
        if (n1 < n3){
            if (n2 > n3){
                min = n1;
                med = n3;
                may = n2;

        }
        }
        }
    if (n2 < n1){//aca entra el 30.20.10 por eso no sigue porque no cumple la segunda sentencia
        if (n2 < n3){
            if (n1 < n3){
                min = n2;
                med = n1;
                may = n3;

        }
        }
        }
    if (n2 < n1){
        if (n2 > n3){
            if (n1 > n3){
                min = n3;
                med = n2;
                may = n1;
            }
        }
    }
    if (n2 < n1){
        if (n2 < n3){
            if (n1 > n3){
                min = n2;
                med = n3;
                may = n1;

        }
        }
        }
    if (n3 < n1){
        if (n3 < n2){
            if (n1 < n2){
                min = n3;
                med = n1;
                may = n2;

        }
        }
        }
    if (n3 < n1){
        if (n3 < n2){
            if (n2 > n1){
                min = n3;
                med = n2;
                may = n1;

        }
        }
        }







    printf("Menor %d\nMedio %d\nMayor%d\n", min, med, may);
}
