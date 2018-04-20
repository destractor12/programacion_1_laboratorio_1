#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"
#define TAM 2

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {

            }
            return index;
}



float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}


void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    printf("%5s %20s %5s %s20 %s\n","legajo","nombre","nota 1","nota 2","promedio");
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}


int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<TAM;i++)
    {
        if(legajos[i]==tam)
            {
                index=i;
                break;
            }
    }

    return index;
}

