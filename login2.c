#include <stdio.h>
#include <string.h>

int sign_In(char usuario[30], char con[30]){
    FILE *p;
    char usuario2[30], con2[30];

    p= fopen("users.txt", "r"); //el formato de este archivo debe tener formato: Usuario: hola Contraseña: 123


    fscanf(p,"Usuario: %s Contraseña: %s",usuario2,con2);

    if( (strcmp(usuario,usuario2)==0) && (strcmp(con,con2)==0) )
        printf("\nBienvenido!!!");
    else
        printf("\nUsuario o contraseña incorrecta!\n\n");

    printf("\n\n");

    fclose(p);
    return 0;
}

int main(){
    char usuario[30], pass[30];

    printf("\nUsuario:");
    scanf("%s",usuario);
    printf("\nContraseña:");
    scanf("%s",pass);

    sign_In(usuario, pass);

}