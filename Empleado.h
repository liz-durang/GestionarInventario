#ifndef _EMPLEADO_H_
#define _EMPLEADO_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct empleado
{
	char nombre[20];
	char usuario[20];
    char contrasenia[20];
	char area[20]; 
    int sueldo;

} Empleado;	



Empleado CrearEmpleado ( char nombre[20], char usuario[20], char contrasenia[20], char area[20], int sueldo); //AreaAdmin
//void InsertarEmpleado
void ModificarInfoEmpleados (Empleado this); //AreaAdmin
void Departamentos (); 

//void EliminarDepartamentos (); 
 
//void EliminarEmpleado (); 

//void GastoSueldo (); 




#endif // _EMPLEADO_H_