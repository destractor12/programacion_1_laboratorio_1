#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
    char email[30];

}eAlumno;

//void mostrar(int legajo, char nombre[], float promedio)

void mostrarunAlumno(eAlumno unAlumno);

int main()
{
    eAlumno clase[T];
    eAlumno miAlumno;
    int i;

    for(i=0;i<T;i++)
    {
    printf("ingrese legajo: ");
    scanf("%d", &clase[i].legajo);
    printf("Ingrese nombre:");
    fflush(stdin);
    gets(clase[i].nombre);
    fflush(stdin);
    printf("Ingrese promedio:");
    scanf("%f",&clase[i].promedio);
    }

    for(i=0;i<T;i++)
    {
        mostrarunAlumno(clase[i]);
    }

    //miAlumno=otroAlumno;





    return 0;
}



void mostrarunAlumno(eAlumno unAlumno)
{
    printf("%d %s %.2f\n", unAlumno.legajo, unAlumno.nombre, unAlumno.promedio);

}
