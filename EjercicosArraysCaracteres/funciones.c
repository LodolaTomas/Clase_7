#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <ctype.h>

void pedirString(char* menssage,char* lettlers,int len)
{
    char auxString[100];
    printf("%s",menssage);
    fflush(stdin);
    scanf("%s",auxString);
    while(strlen(auxString)>len)
    {
        printf("ERROR, Re%s",menssage);
        fflush(stdin);
        scanf("%s",auxString);
    }
    strcpy(lettlers,auxString);
}
void unirApellidoNombre(char* nombre,char* apellido,char* apellidoNombre)
{
    int i;
    int len;

    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);


    strlwr(apellidoNombre);

    apellidoNombre[0]=toupper(apellidoNombre[0]);

    len=strlen(apellidoNombre);

    for(i=0;i<len;i++)
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }
    }


}
