#include<stdio.h>
int main(){
	int a;

	printf("  <<<<<<<<Menú Admin>>>>>>>>>>\n\n\n\n\n");

	printf("1. Alta departamento\n");
	printf("2. Baja departamento\n");
	printf("3. Agregar articulo\n");
	printf("4. Eliminar articulo\n");
	printf("5. Modificar informacion empleado\n");
	printf("6. Agregar empleado\n");
	printf("7. Eliminar empleado\n");
	printf("8. Cerrar seción\n\n\n");
	printf("Escoge una opcion: ");
	scanf("%d",&a);

	switch(a){
		case 1: 
		printf("Listo.\n Departamento dado de alta\n");
		break;
		case 2:
		printf("Listo.\n Departamento dado de baja\ns");
		case 3:
		printf("Articulo agregado\n");
		case 4:
		printf("Articulo eliminado\n");
		case 5:
		printf("Informacion modificada correctamente\n");
		case 6:
		printf("Empleado agregado\n");
		case 7:
		printf("Empleado eliminado\n");
		default: printf("Seción cerrada");

	}
	return 0;
}
