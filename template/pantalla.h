#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
typedef struct
{
    char nombre[50];
    char direccion[50];
    float precio;
    char tipo[50];
    //los dos siguientes siempre deben estar en un (ABM)
    int idPantalla;
    int isEmpty;//auxiliar banderaLugarLibre
}Pantalla;
#endif // PANTALLA_H_INCLUDED


int pantalla_init(Pantalla* array,int limite);
int pantalla_mostrar(Pantalla* array,int limite);
int pantalla_mostrarDebug(Pantalla* array,int limite);
int pantalla_alta(Pantalla* array,int limite);
int pantalla_baja(Pantalla* array,int limite, int id);
int pantalla_modificacion(Pantalla* array,int limite, int id);
int pantalla_ordenar(Pantalla* array,int limite, int orden);
int buscarLugarLibre(Pantalla* array,int limite);
int proximoId();


