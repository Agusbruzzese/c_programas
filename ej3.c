/*ej3 comparacion*/

#include <stdio.h>
main()
{
    int num1, num2;
    printf("ingrese 2 numeros y le digo \nla relacion entre ellos \n");
    scanf("%d%d", &num1, &num2);

    if (num1 ==  num2)
        printf("%d is equal to %d\n", num1, num2);
    if (num1 !=  num2)
        printf("%d is not equal to %d\n", num1, num2);
    if (num1 < num2)
        printf("%d is lesser to %d\n", num1, num2);
    if (num1 >  num2)
        printf("%d is greater to %d\n", num1, num2);
    if (num1 <=  num2)
        printf("%d is equal or minor to %d\n", num1, num2);
    if (num1 >=  num2)
        printf("%d is equal or greater to %d\n", num1, num2);

    return 0;

}
