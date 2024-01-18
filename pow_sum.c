#include <stdio.h>

int SimpleMulti(int x, int y) {
    int product = 0; // resultado de la multiplicación

    for (int i = 0; i < y; i++) {
        product += x;
    }

    // La multiplicación es la adición repetida de x, repetida y veces
    // La solución inicial con un bucle while parece correcta

    return product;
}

int ExpOperation(int x, int exponent) {
    int result = 1;

    if (exponent == 0) {
        return result; // cualquier cosa elevada a 0 es 1
    } else {
        for (int i = 0; i < exponent; i++) {
            result = SimpleMulti(result, x);
            // recorrer el exponente, multiplicar el resultado por el número inicial, x
            // por ejemplo, 2^1 = 2, 2^2 = resultado de 2^1 x 2, 2^3 = resultado de 2^2 x 2
        }
    }

    return result;
}

int main() {
    printf("%d\n", ExpOperation(2, 5)); // Imprimirá 8 (2^3)
    return 0;
}
