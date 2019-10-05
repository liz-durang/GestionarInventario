#include<stdio.h>
int main(){
	int s;

	printf("  <<<<<<<<Menú Surtir>>>>>>>>>>\n\n\n\n\n");

	printf("1. Surtir producto\n");
	printf("2. Cerrar seción\n\n\n");
	printf("Escoge una opcion: ");
	scanf("%d",&s);

	switch(s){
		case 1: //va la funcion surtirArticulos 
		printf("Articulo sustituido");
		break;
		default: printf("Seción cerrada");

	}
	return 0;
}
