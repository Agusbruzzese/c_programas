#include <stdio.h>

int main() {
    double q, x;
    printf("Ingrese el valor de q: ");
    scanf("%lf", &q);
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    double G = (q * x) * 33075 + 534730640;

    if (G <= 1181000000) {
        printf("El valor de G es: %.2lf\n", G);
    } else {
        printf("El valor de G excede el límite máximo.\n");
    }

    return 0;
}
