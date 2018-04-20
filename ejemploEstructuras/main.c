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
int main()
{
    int i;
    Alumno listadoDelMain[TAMANIO];
    for(i=0;i<TAMANIO;i++)
    {
        listadoDelMain[i].estado=0;
    }
    Alumno aluDelMain;

    aluDelMain= pedirAlumno();

    mostrarAlumno(aluDelMain);


    return 0;
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

    printf("el legajo es : %d",aluAux.legajo );
}
int buscarLugarLibre(Alumno listado[],int tamanio)
{

}
