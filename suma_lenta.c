/*Suma lenta*/

#include<stdio.h>

main()
{
    int num1;
    int num2;
    int res=0;
    int cont=0;

    printf("ingrese un numero: \n");
    scanf("%d", &num1);
    printf("ingrese otro numero: \n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        while (num2>=0)
        {
            res = num1+cont;
            cont++;
            num2--;
        }
    }
    else if (num2 > num1)
    {
        while (num1>=0)
        {
            res = num2+cont;
            cont++;
            num1--;
        }
    }

    printf("%d", res);

}
