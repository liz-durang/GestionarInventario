
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