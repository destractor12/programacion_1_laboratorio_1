#include <stdlib.h>
#include <stdio.h>

void pedirDatos(int legajos[],char nombres[][30],int nota1[],int nota2[],float promedio[])
 {
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
                printf("El legajo del alumno es: %d",legajo[i]);

                printf("El nombre del alumno es: %s",nombres[i]);

                printf("El legajo del alumno es: %d",nota1[i]);

                printf("El legajo del alumno es: %d",nota2[i]);

                printf("El promedio del alumno es: %.2f",promedio[i]);
            }
       }
