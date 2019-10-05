#include<stdio.h>
int main(){
	int v;

	printf("  <<<<<<<<Menú Venta>>>>>>>>>>\n\n\n\n\n");

	printf("1. Vender\n");
	printf("2. Cerrar seción\n\n\n");
	printf("Escoge una opcion: ");
	scanf("%d",&v);

	switch(v){
		case 1: //va la funcion ventaArticulo, la cual ya genera un ticket 
		printf("Articulo vendido");
		break;
		default: printf("Seción cerrada");

	}
	return 0;
}
