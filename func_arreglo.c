/*funciones y arreglos, un solo corazon*/

#include<stdio.h>

#define SIZE 5

void modifyArray(int [], int);
void modifyElement(int);

int main()
{
    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Effects of passing entire array cell "
           "by reference:\n\nThe values of the "
           "original array are: \n");
    for (i = 0; i <= SIZE - 1;i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");

    modifyArray(a, SIZE);
    printf("the values of the modified array are:\n");

    for (i = 0; i <= SIZE - 1; i++)
    {
        printf("%3d",a[i]);
    }

    printf("\n\nEffects of passing array element call "
               "by value:\nThe calue of a[3] is %d\n", a[3]);
    modifyElement(a[3]);
    printf("The value of a[3] is %d\n", a[3]);

    return 0;
}

void modifyArray(int b[], int size)
{
    int j;

    for (j = 0; j <= size - 1; j++)
    {
        b[j] *= 2;
    }
}

void modifyElement(int e)
{
    {
        printf("Value in modifyElement is %d\n", e *= 2);
    }
}

