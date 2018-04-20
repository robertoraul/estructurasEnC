#include <stdio.h>
#include "funciones.h"

EAlumno cargarAlumno(){

    EAlumno alumno;

    printf("Ingrese un legajo :");
    scanf("%d",&alumno.legajo);
    printf("Ingrese nota 1 :");
    scanf("%d",&alumno.notaUno);
    printf("Ingrese nota 2 :");
    scanf("%d", &alumno.notaDos);
    printf("Ingrese estado :");
    scanf("%d", &alumno.estado);
    printf("Ingrese nombre :");
    gets(alumno.nombre);

    return alumno;

}

int buscarLugarLibre(EAlumno listado[5], int tamanio){

}


void mostrarAlumno(EAlumno alumno){

    printf("\n El legajo del alumno es : %d", alumno.legajo);
    printf("\n La nota 1 es :%d", alumno.notaUno);
    printf("\n La nota dos es :%d", alumno.notaDos);
    printf("\n El estado del alumno es :%d", alumno.estado);
    printf("\nEl nombre es : %s", alumno.)
}
