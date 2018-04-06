#include <stdio.h>
#include <stdlib.h>


int factorial(int);

int main()
{
    int numero=5;
    int factor;

    factor=factorial(numero);

    printf("El factor es: %d", factor);

    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero == 0)
    {
        respuesta = 1;
    }
    else
    {
          respuesta = numero * factorial(numero-1);
    }
    return respuesta;
}
