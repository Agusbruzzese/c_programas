/*ejemplo arreglos pagina 207*/

#include<stdio.h>

int main()
{
    int n[] = {11,12,13,15,11,2,34,5,6,7};
    int  i;

    for (i = 0; i <= 9; i++)
    {
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i <= 9; i++)
    {
        printf("%7d%13d\n", i, n[1+i]);
    }
    return 0;
}
