#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char nombre[50];
}ePersona;
int main()
{
    ePersona*pPersona;
    pPersona=malloc(sizeof(ePersona));

        if(pPersona!=NULL)
        {
            pPersona -> id=45;
            strcpy(pPersona->nombre,"juan");
            printf("%d--%s",pPersona->id,pPersona->nombre);
        }

    return 0;
}
