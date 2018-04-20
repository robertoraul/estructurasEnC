#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
typedef struct{

int legajo;
int estado;
}Alumno;


Alumno pedirAlumno(void);
void mostrarAlumno(Alumno );
int buscarLugarLibre(Alumno[],int);
int buscarIndiceDelAlumno(Alumno listado[],int legajo,int cantidad);
int insertarAlumnoEnLaLista(Alumno[]);
void mostrarListado(Alumno listado[],int cantidad);
float calcularPromedio(int ,int);
void ordenarPorPromedio(Alumno[],int cantidad);

int main()
{
    Alumno aluDelMain;
    aluDelMain= pedirAlumno();
    mostrarAlumno(aluDelMain);

    int i;
    Alumno listadoDelMain[TAMANIO];
    for(i=0;i<TAMANIO;i++)
    {
        listadoDelMain[i].estado=0;
    }

    ordenarPorPromedio(listadoDelMain,TAMANIO);
    mostrarListado(listadoDelMain,TAMANIO);

    return 0;
}

void ordenarPorPromedio(Alumno listado[],int cantidad)
{
     int i;
    for(i=0;i<cantidad;i++)
    {
        listado[i].legajo=i*9;
    }

}
void mostrarListado(Alumno listado[],int cantidad)
{
     int i;
    for(i=0;i<cantidad;i++)
    {
       mostrarAlumno( listado[i]);
    }
}
Alumno pedirAlumno(void)
{
    Alumno aluRetorno;
    aluRetorno.legajo=666;
    //pido todos los datos
    return aluRetorno;

}
void mostrarAlumno(Alumno aluAux )
{
    printf("\nel legajo es : %d",aluAux.legajo );
    printf("el estado es : %d",aluAux.estado );
}
int buscarLugarLibre(Alumno listado[],int tamanio)
{
    int indice=-1;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listado[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}


