#include<stdio.h>


struct producto{
	char nombre[10];
	float precio;
	int cantidad;
};


int menu()
{	
	int opcion = 0;
	printf("\t\tMenu de opciones \n\n");
	printf("\t\t1) Ver inventario de productos \n");
	printf("\t\t2) Cargar producto \n");
	printf("\t\t3) Borrar producto cargado\n");
	printf("\t\t4) Salir del programa\n");
	printf("\t**Ingrese su opcion>> ");

	scanf("%d",&opcion);

	return opcion;
}


// fucion reemplazar un producto para qe o lo tenga que ahcer en dos pasos

//funcion modificar el precio solamente, o la cantidad, o sea un atributo solo != nombre

//funcion avisar cuando quedan x elementos en inventario, por ejeplo menos de 5


void ver_inventario(struct producto* puntero_producto, int contador_producto)
{
	printf("Ver inventario\n");
	int i = 0;
	while(i < contador_producto)
	{	
		printf("Inventario N %3d|Nombre %s Precio %.2f$ Cantidad %d 	\n",
		i,
		puntero_producto[i].nombre,
		puntero_producto[i].precio, 
		puntero_producto[i].cantidad);
		i++;
	}
}
int agregar_producto(struct producto* puntero_producto, int contador_producto)
{	
	/*Necesitamos sumar el puntero*/
	for (int i = 0; i < contador_producto; i++)
	{
		puntero_producto++;
	}
	printf("Cargar producto\n");
	printf("Ingress la informacion del producto: \n");
	printf("Nombre: ");
	scanf("%s", puntero_producto -> nombre);
    printf("Precio: ");
    scanf("%f", &puntero_producto -> precio);
    printf("Cantidad: ");
    scanf("%d", &puntero_producto -> cantidad);
    contador_producto = contador_producto + 1;
    //printf("%d", contador_producto);
	return contador_producto;
}
void remove_producto(struct producto* puntero_producto, int* contador_producto, int subindice)
{
    if (subindice < 0 || subindice >= *contador_producto)
    {
        printf("El número de inventario ingresado no es válido.\n");
        return;
    }

    // dezplaza los productos hasta una posciion valida
    for (int i = subindice; i < *contador_producto - 1; i++)
    {
        puntero_producto[i] = puntero_producto[i + 1];
    }

    (*contador_producto)--;
    
    printf("El producto en el inventario %d ha sido eliminado con éxito.\n", subindice);
}

int main()
{	
	int opcion;
	struct producto prod[100];
	int contador_producto = 0;
	int subindice = 0;

	do
    {	
    	//system("clear");
		
		opcion = menu();
		//menu();
		getchar();
		
	if (opcion == 1)
	{
		ver_inventario(prod, contador_producto);
		
	}
	else if(opcion == 2)
	{
		contador_producto = agregar_producto(&prod[0], contador_producto);
		printf("Usted ingreso..");
		//printf("%s %.2f$ %d \n", prod[0].nombre,prod[0].precio, prod[0].cantidad);
		//printf("%s %.2f$ %d \n", prod[1].nombre,prod[1].precio, prod[1].cantidad);
		//contador_producto++;
		printf("\033[H\033[J");
	}
	else if(opcion == 3) //struct producto* puntero_producto, int* contador_producto, int subindice
	{
		printf("Ingrese el numero de producto que desea borrar*NO RECUPERABLE*");
		scanf("%d", &subindice);
		remove_producto(prod, &contador_producto, subindice);
	}
	else
	{
		printf("Gracias por utilizar AGUSOFT\n");
	}
		
			
	}while (opcion != 4);
	
}




