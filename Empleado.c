#include "Empleado.h"


Empleado CrearEmpleado ( char nombre[20], char usuario[20], char contrasenia[20], char area[20], int sueldo) 
{   
    Empleado this; 
    strcpy(this.nombre, nombre );
    strcpy(this.usuario, usuario );
    strcpy(this.contrasenia, contrasenia );
    strcpy(this.area, area );
    this.sueldo = sueldo;
    return this; 
}

void ModificarInfoEmpleados (Empleado this)
{
    
    bool salir = true; 
    do
    {
        printf ("\n\nLos datos de %s son:", this.nombre);
        printf ("\nNombre: %s" ,this.nombre); 
        printf ("\nUsuario: %s" ,this.usuario); 
        printf ("\nContrasenia: %s" ,this.contrasenia); 
        printf ("\nArea: %s" , this.area); 
        printf ("\nSueldo: %d" ,this.sueldo);

        printf ("\n\n¿Que dato deseas modificar?"); 
        printf ("\n1. Nombre"); 
        printf ("\n2. Usuario"); 
        printf ("\n3. Contrasenia"); 
        printf ("\n4. Area"); 
        printf ("\n5. Sueldo"); 
        printf ("\n6. Terminar la modificación"); 
        printf ("\n-->"); 
        int opc; 
        scanf ("%d", &opc); 

        switch (opc)
        {
            case 1:
                printf ("\nModificando Nombre..."); 
                printf ("\nIngrese los nuevos datos"); 
                printf ("\n-->");
                char name[20]; 
                scanf ("%s", name); 

                strcpy(this.nombre, name );
                printf ("\nModificación exitosa"); 
                
                break;

            case 2:
                printf ("\nModificando Usuario..."); 
                printf ("\nIngrese los nuevos datos"); 
                printf ("\n-->");
                char usuario[20]; 
                scanf ("%s", usuario); 

                strcpy(this.usuario, usuario );
                printf ("\nModificación exitosa"); 
                
                break;
            case 3:
                printf ("\nModificando Contrasenia..."); 
                printf ("\nIngrese los nuevos datos"); 
                printf ("\n-->");
                char contrasenia[20]; 
                scanf ("%s", contrasenia); 

                strcpy(this.contrasenia, contrasenia );
                printf ("\nModificación exitosa"); 
                
                break;
            
            case 4:
                printf ("\nModificando Area..."); 
                printf ("\nIngrese los nuevos datos"); 
                printf ("\n-->");
                char area[20]; 
                scanf ("%s", area); 

                strcpy(this.area, area );
                printf ("\nModificación exitosa"); 
                
                break;
            
            case 5:
                printf ("\nModificando Sueldo..."); 
                printf ("\nIngrese los nuevos datos"); 
                printf ("\n-->");
                int sueldo; 
                scanf ("%d", &sueldo); 

                this.sueldo =  sueldo;
                printf ("\nModificación exitosa"); 
                
                break;

            case 6: 
                printf ("\nSaliendo..");
                salir = false; 
                break; 


            default:
                break;
        }        
    }while (salir); 
}

char* AltaDepartamentos ()
{
    char* cadena = malloc(10);
    printf ("\nIngrese el nombre del nuevo departamento"); 
    printf ("\n---> "); 
    scanf ("%s", cadena); 

    return cadena; 
}

void Departamentos ()
{
    char departamentos[][50] = {"Dama", "Caballero", "Bebes"} ; 
    int longitudDelArreglo; 
    bool salir = true; 
    printf ("***DEPARTAMENTOS****"); 
    do
    {
        
        printf ("\n\n¿Que deseas hacer?"); 
        printf ("\n1. Agregar departamentos"); 
        printf ("\n2. Eliminar departamentos"); 
        printf ("\n3. Visualizar departamentos"); 
        printf ("\n4. Salir"); 
        printf ("\n-->"); 

        int opc; 
        scanf ("%d", &opc); 

        switch (opc)
        {
            case 1:
                printf ("\n***Agregar departamentos**");
                printf ("\nNombre del nuevo departamento: "); 
                printf ("\n--> "); 
                char* new [20]; 
                scanf ("%s",new); 
                longitudDelArreglo = sizeof(departamentos) / sizeof(departamentos[0]);
                int aux = longitudDelArreglo + 1; 
                departamentos[aux] = new; 
                
            break; 

            case 2: 

                printf ("\n***Eliminar departamentos**");
                printf ("\nNombre del departamento a eliminar: "); 
                printf ("\n--> "); 
                char news [20]; 
                scanf ("%s",news); 
                longitudDelArreglo = sizeof(departamentos) / sizeof(departamentos[0]);
                for(int i = 0; i < longitudDelArreglo; i++)
                {
                    if (strcmp(departamentos[i], news))
                    {
                       departamentos[i] = '/0'; 
                    }
                 }  

            break; 

            case 3: 

                printf ("\n***Visualizar departamentos**");
                
                printf ("\n\n Los departamentos actuales son: ");
                longitudDelArreglo = sizeof(departamentos) / sizeof(departamentos[0]);
                for(int i = 0; i < longitudDelArreglo; i++)
                {
                    printf(" %s ",departamentos[i]);
                 }  
            break; 

            case 6: 
                printf ("\nSaliendo..");
                salir = false; 
            break; 

            default:
                break; 
        }

    }while (salir); 
}