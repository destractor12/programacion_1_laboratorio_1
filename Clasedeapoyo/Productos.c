#include <stdio.h>
#include <conio.h>
#include "Productos.h"

int buscarLibre(int id[], int tam)
{
    int index = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(id[i]==0)
        {
            index=1;
            break;
        }
    }
    return index;
}

void mostrarProductos(int idProductos[],char descripcion[][50],int stock[], float precioUnitario[],int cant)
{
    int i;

    for(i=0; i<cant;i++)
    {
        if(idProductos[i]!=0)
        {
            printf("%5d %20s %5d %.2f\n",idProductos[i],descripcion[i],stock[i],precioUnitario[i]);
        }
    }
}

void ordenarProductos(int idProductos[],char descripcion[][50],int stock[], float precioUnitario[],int cant))
{
    int auxInt;
    float auxFloat;
    char auxString[50];
    int i;
    int j;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(descripcion[i],descripcion[j])>0)
            {
               strcpy(auxString,descripcion[i]);
               strcpy(descripcion[i], descripcion[j]);
               strcpy(descripcion[j], auxString);

               auxInt = idProductos



            }

        }
    }

}
