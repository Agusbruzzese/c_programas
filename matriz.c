/*representacion en matrices*/

// fig06_06.c
// Displaying a bar chart.
#include <stdio.h>
#define SIZE 5

// el prgograma lee un numero y lo representa a traves de una grafica con asteriscos(*)
int main(void)
{
// use initializer list to initialize array n
int n[SIZE] = {19, 3, 15, 7, 11};

printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

// for each element of array n, output a bar of the bar chart
for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%7zu%13d%8s", i, n[i], "");

        for (int j = 1; j <= n[i]; ++j) //este for anidado dibuja las barras
        { // print one bar
            printf("%c", '*');
        }
    puts(""); //puts implirte cadenas y al final \n equivale a printf("\n");
    }
}
