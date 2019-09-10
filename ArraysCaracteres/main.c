#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
    Cadena de Caracteres

    var nombre;
    nombre = "JUAN";
    /// C no dispone de un tipo de dato String

        C tiene

    vector de caracteres.

    char palabra[10];//contiene 10 caracteres

    las funciones necesitan saber hasta donde contiene el mensaje
    se creo un caracteres que indique el final de la cadena "\0"

    *****Siempre uno mas para el "\0"

    "\0" finalizacion de cadena

     // scanf necesita la direccion de memoria, [] no corchete

     // siempre q leemos una cadena ponemos el fflush();

     strcpy(palabra,otrapalabra);//recibe 2 parametros,1 vector ,2 constante podria ser una palabra entre comillas
    //                            importa el orden, cual es el dstino del dato y el origen




    //scanf toma el "espacio" y lo incerta en el \0
    //%[^\n]   otra mascara de entrada, lea hasta el \n
    //fgets(palabra,10,stdin);//no toma el espacio// linux//linea de texto desde un archivo
    //                          lee el \n, se podria tomar el largo dentro de una funcion
    //                          palabra[largo-1]='\0';

    //gets(palabra);



    largo = strlen(palabra);//cuenta la cantidad de caracteres y la devuelve, lo que se guardo
    printf("el largo es:%d",largo);



*/

int main()
{
    char palabra[10];
    char otrapalabra[10]="chau";
    int largo;
    int comp;


    printf("Ingrese su palabra:");
    //fgetc(stdin); en Linux
    fflush(stdin);
    scanf("%[^\n]", palabra);

//  comp=strcmp(palabra,otrapalabra);// Devuelve 0 si es la misma palabra sino 1 o -1// discrimina entre mayusculas y minusculas
//  comp=stricmp(palabra,otrapalabra);//Ignora mayusculas de minusculas
//  printf("\nComparar : %d",comp);

    /**
    char letter='p';
    letter=tolower(letter);//devuelve el valor modificado
    */

    /// no acepta una letra un char normal
//  strupr(palabra);//pasa todo a MAYUSCULA //Trabaja por referencia porque no devuelve nada
//  strlwr(palabra);//PASA TODO A minuscula




    printf("%s",palabra);



    return 0;
}
