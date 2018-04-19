#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int legajos[3];
    char nombres[3][30];
    int nota1[3];
    int nota2[3];
    float promedio[3];
    int i;



    for( i=0;i<3;i++)
    {
        printf("\nIngrese su legajo:");
        scanf("%d", legajos[i]);
        fflush(stdin);

        printf("\nIngrese su nombre:");
        gets(nombres[i]);
        fflush(stdin);

        printf("\nIngrese su nota:");
        scanf("%d", nota1[i]);

        printf("\nIngrese su segunda nota:");
        scanf("%d", nota2[i]);

    }
   promedio=calcularPromedio(nota1,nota2);

   Mostrarinfo(legajos, nombres, nota1,nota2,promedio);
    return 0;
}
