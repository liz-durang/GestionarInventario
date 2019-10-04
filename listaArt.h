
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Articulo.h"

typedef Articulo Item; 

typedef struct Nodo
{
	Item valor; 
	struct Nodo* next;
}Nodo;


typedef struct
{
	struct Nodo* head;
}Lista;


Lista crearLista(); 

void InsertarArticulo(Lista *lista, Item val); //AreaAdmin

bool Buscar (Lista *lista, Item buscado); 

void EliminarArticulo (Lista *lista, Item val); //AreaAdmin

void Mostrar (Lista lista); 

int CantidadEnInventario (Lista* lista);

float DineroEnInventario (Lista* lista);

void InventarioAarchivo (Lista* lista); 