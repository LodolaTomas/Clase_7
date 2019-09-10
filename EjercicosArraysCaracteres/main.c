#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char nombre[15];//14 digitos \0
    char apellido[15];// 14 digitos \0
    char apellidoNombre[31];// 28 digitos + ", "+ el \0

    pedirString("Ingrese su Nombre:",nombre,14);
    pedirString("Ingrese su Apellido:",apellido,14);

    unirApellidoNombre(nombre,apellido,apellidoNombre);

    printf("%s",apellidoNombre);





    return 0;
}
