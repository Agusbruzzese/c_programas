#include <stdio.h>

int SimpleMulti(int x, int y) {
    int product = 0; // resultado de la multiplicaci�n

    for (int i = 0; i < y; i++) {
        product += x;
    }

    // La multiplicaci�n es la adici�n repetida de x, repetida y veces
    // La soluci�n inicial con un bucle while parece correcta

    return product;
}

int ExpOperation(int x, int exponent) {
    int result = 1;

    if (exponent == 0) {
        return result; // cualquier cosa elevada a 0 es 1
    } else {
        for (int i = 0; i < exponent; i++) {
            result = SimpleMulti(result, x);
            // recorrer el exponente, multiplicar el resultado por el n�mero inicial, x
            // por ejemplo, 2^1 = 2, 2^2 = resultado de 2^1 x 2, 2^3 = resultado de 2^2 x 2
        }
    }

    return result;
}

int main() {
    printf("%d\n", ExpOperation(2, 5)); // Imprimir� 8 (2^3)
    return 0;
}
