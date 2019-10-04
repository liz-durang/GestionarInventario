#include <stdio.h>
#include <stdlib.h>

#include "Articulo.h"
#include "Empleado.h"
#include "listaArt.h"


int main(int argc, char const *argv[])
{
    printf ("**A-Shop***");


    Articulo lata = CrearArticulo( "lata" ,14.23, 20.21 ,4); //nombre, precioCompra, precioVenta, Cantidad
    Articulo camisa = CrearArticulo( "camisa" ,14.23, 20.21 ,3); 
    Articulo cama = CrearArticulo( "cama" ,14.23, 20.21 ,3); 

    Lista inventario = crearLista(); 

    InsertarArticulo (&inventario, lata); 
    InsertarArticulo (&inventario, camisa); 
    InsertarArticulo (&inventario, cama); 

    printf ("\nMostrar\n"); 
    Mostrar (inventario); 

    VentaArticulo (&camisa, 4); 





  
}
 