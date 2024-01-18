/*Potencia lenta*/

// esta funcion efectua la multiplicacion mediante sumas sucesivas
int multiplicacion_sumando (int operador_1, int operador_2);
//esta funcion efectua la operacion de potenciacion, mediante la suma del resultado de la funcion
//"multiplicacion_sumando" con la base ingresada, por ende, las dos operaciones son solamente con sumas
int potencia_lenta(int base, int exponente);

int main()
{
    int base, exponente;
    printf("ingrese la base , y luego el exponente:  \n");
    scanf("%d%d", &base, &exponente);

    printf("El resultado es: %d", potencia_lenta(base, exponente));
}



int multiplicacion_sumando (int operador_1, int operador_2)
{
    int resultado_multiplicar = 0;

    while (operador_2 > 0)
    {
        resultado_multiplicar += operador_1;
        operador_2--;
    }
    return resultado_multiplicar;
}

int potencia_lenta(int base, int exponente)
{
    int potencia = base;

    while (exponente > 1)
    {
        potencia = multiplicacion_sumando(potencia, base);
        exponente--;
    }
    return potencia;
}
