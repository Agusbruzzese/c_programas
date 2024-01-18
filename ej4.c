/*4. Mayor de Tres Números
Diseña una función que tome tres números enteros como argumentos y devuelva el mayor de ellos.*/

int comparar_numeros(int numero1, int numero2, int numero3);

int main ()
{
    int numero1;
    int numero2;
    int numero3;
    int mayor;

    printf("ingrese un numero: ");
    scanf("%d", &numero1);
    printf("ingrese otro numero: ");
    scanf("%d", &numero2);
    printf("ingrese un ultimo numero: ");
    scanf("%d", &numero3);


    mayor = comparar_numeros(numero1, numero2, numero3);
    printf("El mayor es %d", mayor);

}

int comparar_numeros(int numero1, int numero2, int numero3)
{
    int mayor;
    if (numero1>numero2)
    {
        if (numero1>numero3)
        mayor = numero1;
        else if(numero3>numero1)
        {
            mayor = numero3;
        }
    }
    else if(numero2>numero1)
    {
        if (numero2>numero3)
        {
            mayor = numero2;
        }
        else if(numero3>numero2)
        {
            mayor = numero3;
        }
        mayor = numero2;
    }
    else if(numero3>numero1)
    {
        if (numero3>numero1)
        {
            mayor = numero3;
        }
        else if(numero2>numero3)
        {
            mayor = numero2;
        }

    }
    return mayor;
}


