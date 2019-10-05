#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Empleado.h"

typedef Empleado Item; 

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

void InsertarEmpleado(Lista *lista, Item val); //AreaAdmin

bool Buscar (Lista *lista, Item buscado); 

void EliminarEmpleado(Lista *lista, Item val); //AreaAdmin

void Mostrar (Lista lista); 

void GastoSueldo (Lista lista); 
