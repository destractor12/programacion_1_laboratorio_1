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

    pedirDatos(legajos,nombres,nota1,nota2);


    Mostrarinfo(legajos, nombres, nota1,nota2,promedio);
    return 0;
}
