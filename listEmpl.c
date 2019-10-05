#include "listaEmpl.h"

Lista crearLista(){
	Lista lista;
	lista.head = NULL;
	return lista;
}


void InsertarEmpleado(Lista *lista, Item val) 
{
    
    if(lista->head == NULL)
    {
        Nodo *new_node = (Nodo*)malloc(sizeof(Nodo));
        new_node->valor = val;
        new_node->next = NULL;
        lista->head = new_node;
    }
    else
    {
        
        Nodo *current = lista->head;
		while (current->next != 0) 
        {
       		current = current->next;
 		}
	
    	Nodo *new_node = (Nodo*)malloc(sizeof(Nodo));
        new_node->valor = val;
    	new_node->next = NULL;
 		current->next = new_node;
    }
}

bool Buscar (Lista *lista, Item buscado)
{
    bool bandera = false; 
    Nodo *current = lista->head;

		while (current->next != NULL) 
        {
            
            if (strcmp(current->valor.nombre , buscado.nombre)== 0)
            {
                
                bandera = true; 
            }
          current = current->next;
 		}
    return bandera;     
}

void EliminarEmpleado (Lista *lista, Item val)
{
    Nodo *aux = lista->head;
    Nodo *ant = NULL; 

    if (lista != NULL)
    {
		while (aux->next != NULL) 
        {
            if (strcmp(aux->valor.nombre , val.nombre)== 0)
            {   
                ant->next = aux->next;  
            }
        
        aux = aux->next; 
        
        }
        free (aux); 
    }
    else
    {
        printf ("\nNo elementos en la lista");
    }
    
}

void Mostrar (Lista lista)
{
    
    if(lista.head==NULL)
    {
    	printf("Vacio \n");
    }
    else{
    	Nodo *current = lista.head;
   		while (current != 0) {
        	printf("%s \n",current->valor.nombre);
			current = current->next;
   	 	}
	}
}

int CantidadEnInventario (Lista* lista)
{
    Nodo *current = lista->head;
    int total = 0; 
		while (current) 
        {
          total = total + current->valor.stock;
          current = current->next;
 		}
    return total; 
}

float DineroEnInventario (Lista* lista)
{
    Nodo *current = lista->head;
    float total = 0; 
		while (current) 
        {
          total = total + current->valor.precioventa;
          current = current->next;
 		}
    return total; 
}

void InventarioAarchivo (Lista* lista)
{
    FILE* inv = InventarioArch (); 

    if(lista->head==NULL)
    {
    	printf("Inventario vacio \n");
    }
    else{
    	Nodo *current = lista->head;
   		while (current != 0) 
        {
            fputs("            ", inv); 
        	fputs (current->valor.nombre, inv); 
            fputs("               ", inv);
            fprintf (inv, "%0.2f", current->valor.precioCompra);
            fputs("               ", inv);
            fprintf (inv, " %0.2f", current->valor.precioventa);
            fputs("               ", inv);
            fprintf (inv, " %d\n", current->valor.stock);
            

			current = current->next;
   	 	}
	}
}
