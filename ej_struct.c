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

void opcion_1(struct producto* puntero_producto, int contador_producto)
{
	printf("Ver inventario\n");
	int i = 0;
	while(i < contador_producto)
	{	
		printf("Inventario N %d|Nombre %s Precio %.2f$ Cantidad %d 	\n",
		contador_producto,
		puntero_producto[i].nombre,
		puntero_producto[i].precio, 
		puntero_producto[i].cantidad);
		i++;
	}
}
int opcion_2(struct producto* puntero_producto, int contador_producto)
{	
	printf("Cargar producto\n");
	printf("Ingress la informacion del producto: \n");
	printf("Nombre: ");
	scanf("%s", puntero_producto -> nombre);
    printf("Precio: ");
    scanf("%f", &puntero_producto -> precio);
    printf("Cantidad: ");
    scanf("%d", &puntero_producto -> cantidad);
    contador_producto++;
    //printf("%d", contador_producto);
	return contador_producto;
}
void opcion_3()
{
	printf("Borrar producto\n");
}

int main()
{	
	int opcion;
	struct producto prod[100];
	int contador_producto = 0;

	do
    {	
    	//system("clear");
		
		opcion = menu();
		//menu();
		//system("PAUSE");
		
		if (opcion == 1)
	{
		opcion_1(prod, contador_producto);
		
	}
	else if(opcion == 2)
	{
		contador_producto = opcion_2(prod, contador_producto) + 1;
		printf("%s %.2f$ %d \n", prod[contador_producto].nombre,prod[contador_producto].precio, prod[contador_producto].cantidad);
		//contador_producto++;
	}
	else if(opcion == 3)
	{
		opcion_3();
	}
	else
	{
		printf("Gracias por utilizar AGUSOFT\n");
	}
		
			
	}while (opcion != 4);
	
}




