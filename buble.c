/*Algoritmo de ordenamiento, el mas gande va al fondo de la lista*/

/*Bubble sort*/

#include<stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = {2,6,8,10,89,45,37,12};

    puts("Data items in original order");

    //imprime array original
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    //***********************************//
    // Bubble sort
    //loop to control number of passes
    for(int pass = 1; pass < SIZE; ++pass)
    {
        //loop to control number of comparissions per pass
        for(size_t i = 0;i < SIZE - 1; ++i)
        {
        //compare adjacent elements and swap them it first
        //element is greater than second element
            if(a[i] > a[i + 1])
            {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }

        }
    }
    puts("\nData items in ascendig order");
    //imprime el array ordenado
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}
