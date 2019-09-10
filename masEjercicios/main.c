#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3


int main()
{

    //int legajos_alumnos[T];
    //char nombres_alumnos[T][20];//[T] cantidad igual al de legajos// [20] Tamaño de caracteres en ese lugar
    int i,j;
    int auxInt;
    char auxSring[20];

    ///HARCODEO DATOS

    int legajos_alumnos[T]={3,1,2};
    char nombres_alumnos[T][20]={"Tomas","Luca","Flopy"};

    /*
    for(i=0;i<T;i++)
    {
        printf("ingrese legajo:");
        scanf("%d",&legajos_alumnos[i]);

        printf("ingrese nombre:");
        fflush(stdin);
        gets(nombres_alumnos[i]);//[i] para saber en q posicion
    }
    */

    for(i=0;i<T;i++)
    {
        printf("%d\t%s\n",legajos_alumnos[i],nombres_alumnos[i]);
    }


    for(i=0;i<T-1;i++)//-1
    {
        for(j=i+1;j<T;j++)//+1
        {
            if(legajos_alumnos[i]>legajos_alumnos[j])
            {
                auxInt=legajos_alumnos[i];
                legajos_alumnos[i]=legajos_alumnos[j];
                legajos_alumnos[j]=auxInt;

                strcpy(auxSring,nombres_alumnos[i]);
                strcpy(nombres_alumnos[i],nombres_alumnos[j]);
                strcpy(nombres_alumnos[j],auxSring);


            }//> menor a mayor
        }
    }

    printf("\nODENAMIENTO\n\n");

    for(i=0;i<T;i++)
    {
        printf("%d\t%s\n",legajos_alumnos[i],nombres_alumnos[i]);
    }


    return 0;
}
