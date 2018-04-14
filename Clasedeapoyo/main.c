#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Productos.h"
#define T 5


int buscarLibre(int[],int);
/** \brief muestra los productos de la lista
 *
 * \param int[] ids
 * \param char[][50] descripcion
 * \param int[] stock
 * \param float[] precio unitario
 * \param int cantidad de elementos de la lista
 * \return void
 *
 */
void mostrarProductos(int[], char[][50],int[],float[],int);

int main()
{
    int idProducto[T]={};
    char descripcion[T][50];
    int stock[T];
    float preciounitario[T];
    int opcion;
    int posicion;
    char seguir;
    int i;

     do
     {
        printf("1- cargar\n");
        printf("2- mostrar\n");
        printf("3- ordenar\n");
        printf("9- salir\n");
        scanf("%d",opcion);

            switch(opcion)
            {

            case 1:
            printf("CARGO\n");

            posicion= buscarLibre(idProducto, T);
                    if(posicion!=-1)
                    {


                    /*do
                    {
                    printf("Ingrese la posicion: ");
                    scanf("%d",&posicion);*/
                    printf("Ingrese ID: ");
                    scanf("%d",&idProducto[posicion]);
                    printf("Ingrese descripcion: ");
                    fflush(stdin);
                    scanf("%[^\n]",descripcion[posicion]);
                    printf("Ingrese stock: ");
                    scanf("%d",&stock[posicion]);

                    printf("Ingrese precio unitario: ");
                    }

                    else
                    {
                        printf("No hay espacio");
                    }



            // }while(seguir=='s');

                break;

                case 2:
                    printf("MOSTRAR\n");

                    mostrarProductos(idProducto,descripcion,stock,preciounitario,T);
                break;

                case 3:

                break;

                case 4:

                break;
                }


    return 0;
}while(seguir!='4');


}

