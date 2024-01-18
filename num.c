#include <stdio.h>

int main() {
    int numero1, numero2, suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;

    printf("La suma de %d y %d es: %d\n", numero1, numero2, suma);

    return 0;
}
