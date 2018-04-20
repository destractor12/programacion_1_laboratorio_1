#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#include "funciones.h"


int main()
{
    int legajo[TAM]= {1,2};//HARDCODEAR
    char nombre[TAM][20]={"Pedro","Jose"};
    int nota1[TAM]={8,10};
    int nota2[TAM]={7,9};
    float promedio[TAM];
    int opcion;
    int index;
    int i;

    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,tam);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:

        mostrarAlumnos(/*??*/);




        break;
        }

    }
    while(opcion!=9);




    return 0;
}

/*int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;
    for(i=0;i<TAM;i++)
    {
        if(legajos[i]==tam)
            {
                index=i;
                break
            }
    }

    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                //Pedir datos
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
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}*/
