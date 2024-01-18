#include <stdio.h>


int main()
{
    int base, exponente, resultado=0, incremento=base;

    printf("ingrese un numero de base: \n");
    scanf("%d", &base);
    printf("ingrese un numero de exponenete: \n");
    scanf("%d", &exponente);

    for (int i=1; i <= exponente; i++)
   {
       for(int j=1; j <= base; j++)
       {
           base += base ;

       }
       resultado = base;

   }
   //base = resultado;
    printf("%d", resultado);


    return 0;
}
