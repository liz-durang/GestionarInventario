
#include "Articulo.h"
#include "listaArt.h"

FILE* InventarioArch()
{
    FILE *inventario;

	inventario = fopen ("inventario.txt","r+"); //abre el fichero para lectura y escritura, debe existir

	if (inventario == NULL)
	{
		printf("\nError de apretura\n");
	}
	else 
	{
        fputs ("\n\n\t\t*******INVENTARIO******", inventario );
        fputs ("\n\n\n***** Nombre", inventario );
        fputs ("********* Precio Compra ",inventario );
        fputs ("******* Precio Venta ", inventario );
        fputs ("******* Stock \n" , inventario);

	}

	return inventario;
}

Articulo CrearArticulo ( char nombre[20],float precioCompra, float precioVenta, int stock)
{
    Articulo articulo ; 
    strcpy(articulo.nombre, nombre );
    articulo.precioCompra = precioCompra; 
    articulo.precioventa = precioVenta; 
    articulo.stock = stock;
    return articulo;    
} 


FILE* Generarticket ()
{
    FILE *ticket;

	ticket = fopen ("ticket.txt","r+"); //en el mismo directorio del prgrama

	if (ticket == NULL)
	{
		printf("\nError de apretura\n");
	}
	else 
	{
		fputs ("\n\n\t*******TICKET******", ticket );
        fputs ("\n\n\n***** Producto ", ticket );
        fputs ("******* Precio ",ticket );
        fputs ("******* Cantidad ******\n" , ticket);
	}

	return ticket;
}

void VentaArticulo ( Articulo* articulo, int cantidad)
{
		if (articulo->stock > cantidad)
		{
			FILE* ticket = Generarticket(); 
			fputs (articulo->nombre, ticket ); 
			fputs("               ", ticket); 
			fprintf (ticket, " %0.2f", articulo->precioventa);
			fputs ("     ", ticket); 
			fprintf (ticket, "      %d", cantidad);
			articulo->stock = articulo->stock - cantidad; 
		}
		else
		{
			printf ("No hay suficientes productos para vender"); 
		}
		
    //ArticuloAarchivo (&articulo); 
}

void SurtirArticulo (Articulo* this, int stock)
{
    this->stock = this->stock + stock; 
}

/*void ArticuloAarchivo (Articulo* articulo)
{
	FILE* inv = InventarioArch (); 


            fputs("            ", inv); 
        	fputs (articulo->nombre, inv); 
            fputs("               ", inv);
            fprintf (inv, "%0.2f", articulo->precioCompra);
            fputs("               ", inv);
            fprintf (inv, " %0.2f", articulo->precioventa);
            fputs("               ", inv);
            fprintf (inv, " %d\n", articulo->stock);
            
}*/

