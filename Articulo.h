
#ifndef _ARTICULO_H_
#define _ARTICULO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct articulo
{
	char nombre[20];
	float precioCompra;
    float precioventa;
	int stock;

}Articulo;

FILE* InventarioArch();  

Articulo CrearArticulo (char nombre[20],float precioCompra, float precioVenta, int stock); //auxAgregarArticulo

FILE* Generarticket (); //auxVentaArticulo AreaVentas
void VentaArticulo ( Articulo* articulo, int cantidad);  //areaVentas

void SurtirArticulo (Articulo* this, int stock); //areaCompras

int CantidadEnInventario ();

//void ArticuloAarchivo (Articulo* articulo); 

#endif  // _ARTICULO_H_