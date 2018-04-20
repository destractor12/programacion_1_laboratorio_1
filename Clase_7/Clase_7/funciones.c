#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void pedirDatos(int legajos[],char nombres[][30],int nota1[],int nota2[])
 {
     int i;
     for( i=0;i<3;i++)
    {
        printf("\nIngrese su legajo:");
        scanf("%d", &legajos[i]);
        fflush(stdin);

        printf("\nIngrese su nombre:");
        gets(nombres[i]);
        fflush(stdin);

        printf("\nIngrese su nota:");
        scanf("%d", &nota1[i]);
        fflush(stdin);

        printf("\nIngrese su segunda nota:");
        scanf("%d", &nota2[i]);
        fflush(stdin);

    }

 }


  float calcularPromedio(int nota1, int nota2)
{
   float promedio;

   promedio = (float)(nota1+nota2)/2;

   return promedio;
}


  void Mostrarinfo(int legajo[], char nombres[][30], int nota1[], int nota2[], float promedio[])
{
            int i;
            for( i=0;i<3;i++)
            {
                printf("\nEl legajo del alumno es: %d",legajo[i]);

                printf("\n");

                printf("\nEl nombre del alumno es: %s",nombres[i]);

                printf("\nLa primer nota del alumno es: %d",nota1[i]);

                printf("\nLa segunda nota  del alumno es: %d",nota2[i]);

                promedio[i]=calcularPromedio(nota1,nota2);

                printf("\nEl promedio del alumno es: %.2f",promedio[i]);
            }


}

void
    {

        int i;
        int j;
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3-1;j++)
            if()
        }
    }

    int buscarInt(int enteros[],int tam,int cual)
    {
        int index=-1;
        int i;

        for(i=0, i<tam, i++)
        {
            if(enteros[i]==cual)
            {
                index=i;
                break
            }
        }
        return index;
    }
