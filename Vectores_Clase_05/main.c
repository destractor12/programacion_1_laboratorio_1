#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void MostrarVector(int[],int);
void modificarvalor(int[]);
int BuscarMaximo(int[], int)

int main()
{
    int vector[TAM]
    int i;
    int edad;
    int mayor

     for(i=0,i<TAM,i++)
    {
        vector[i]=0;
    }

     for(i=0,i<TAM,i++)
    {

        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }


    for(i=0,i<TAM,i++)
    {

        printf("%d -- %d\n",i,vector[i]);

    }

    MostrarVector(vector, TAM);

    modificarvalor()

    return 0;
}

    void MostrarVector(int vec[], int tamanio)
    {
        int i;
        for(i=0;i<tamanio;i++)
        {
            printf("%d -- %d\n",i, vec[i]);
        }
    }


    int BuscarMaximo(int vec[],int tam)
    {
        int maximo;
        int i;
        int flag=0

        for(i=0; i<tam; i++)
        {
            if(flag==0 || vec[i]>maximo)
            {
                maximo=vec[i];
                flag=1;
            }
        }


    }
