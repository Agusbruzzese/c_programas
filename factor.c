/*Factorial*/



#include<stdio.h>

long factorial(int num);

main(){
    int num;

    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%d", &num);

    long fac = factorial(num);
    printf("%d", fac);

}

long factorial(int num)
{
    int i;
    int fac=1;
    int sfac = 1;

    while (num > 0)
    {

        fac = fac * num;
        num--;

    }
    return fac;
}
