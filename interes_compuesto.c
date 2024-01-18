/*Calcular interes compuestao*/

#include<stdio.h>
#include<math.h>
int main ()
{
    int year;
    double amount, principal = 1000, rate = .05;

    printf("the character (%c) has the value %d. \n", 'a', 'a');

    printf("%4s%21s\n", "Year", "Amount of deposit");


    for (year = 1; year <= 10; year++)
    {
        amount = principal * pow(1+rate, year);
        printf("%4d%21.2f\n", year, amount);
    }

    return 0;
}
