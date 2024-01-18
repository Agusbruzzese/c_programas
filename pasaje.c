/*pasaje de unidades

de fahrenhei a grados

Conversión de Litros a Galones: Implementa una función que convierta un volumen en litros a su equivalente en galones.

Conversión de Millas a Kilómetros: Diseña una función que convierta una distancia en millas a su equivalente en kilómetros.*/
float centigrados_a_gradosf(float centigrados);
float gradosf_a_centigrados(float fahrenheit);
double litro_galon(double litro);
double galon_litro(double galon);
double milla_kilometro(double milla);
double kilometro_milla(double kilometro);

int main()
{
    int eleccion;
    int resultado = 0;
    int centigrados;
    int fahrenheit;
    int galon = 0;
    int litro = 0;
    int milla = 0;
    int kilometro = 0;

    printf("Ingrese: \n1)Para convertir grados centigrados a grados farenheit\n2)para convertir farenheit a grados\n");
    printf("3)Para convertir grados litros a galones\n4)para convertir galones a litros\n");
    printf("4)Para convertir millas a kilometros\n6)para convertir kilometros a millas\n>> ");
    scanf("%d", &eleccion);
    switch(eleccion)
    {
        case 1:
            printf("Ingrese los grados centigrados: ");
            scanf("%f", &centigrados);
            resultado = centigrados_a_gradosf(centigrados);
            printf("%.2f *F\n", resultado);
            break;
        case 2:
            printf("Ingrese los grados fahrenheit: ");
            scanf("%f", &fahrenheit);
            resultado = gradosf_a_centigrados(fahrenheit);
            printf("%.2f *C\n", resultado);
            break;
        case 3:
            printf("Ingrese los litros: ");
            scanf("%lf", &litro);
            resultado = litro_galon(litro);
            printf("%.2f galones\n", resultado);
            break;
        case 4:
            printf("Ingrese los galones: ");
            scanf("%lf", &galon);
            resultado = galon_litro(galon);
            printf("%.2f litros\n", resultado);
            break;
        case 5:
            printf("Ingrese las millas: ");
            scanf("%lf", &milla);
            resultado = milla_kilometro(milla);
            printf("%.2f km\n", resultado);
            break;
        case 6:
            printf("Ingrese los kilómetros: ");
            scanf("%lf", &kilometro);
            resultado = kilometro_milla(kilometro);
            printf("%.2f millas\n", resultado);
            break;
        default:
            printf("Opción no válida\n");
            break;

    }
}




// Esta funcion convierte gradis centigrados a grados Fahrenheit, mediante una operacion
float centigrados_a_gradosf(float centigrados)
{
    float fahrenheit = (centigrados * 9 / 5) + 32;
    return fahrenheit;
}

float gradosf_a_centigrados(float fahrenheit)
{
    float centigrados = (fahrenheit - 32) * 5 / 9;
    return centigrados;
}

double litro_galon(double litro)
{
    litro = litro * 0.264;
    return litro;
}
double galon_litro(double galon)
{
    galon = galon * 4.546;
    return galon;
}
double milla_kilometro(double milla)
{
    milla = milla * 1.6;
    return milla;
}
double kilometro_milla(double kilometro)
{
    kilometro = kilometro * 0.62;
    return kilometro;
}
