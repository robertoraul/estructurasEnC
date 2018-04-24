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
    fflush(stdin);
    gets(alumno.nombre);

    return alumno;

}

int buscarLugarLibre(EAlumno listado[], int tamanio){

    int indice = -1;

    for(int i = 0; i < tamanio; i++){
        if(listado[i].estado == 0){
            indice = i;
            break;
        }
    }
    return indice;

}


void mostrarAlumno(EAlumno alumno){

    printf("\n El legajo del alumno es : %d", alumno.legajo);
    printf("\n La nota 1 es :%d", alumno.notaUno);
    printf("\n La nota 2 es :%d", alumno.notaDos);
    printf("\n El estado del alumno es :%d", alumno.estado);
    printf("\n El nombre es : %s", alumno.nombre);
}

void mostrarListado(EAlumno listado[],int cantidad){

    for(int i = 0; i < cantidad; i++){
       mostrarAlumno( listado[i]);
    }
}

void ordenarPorPromedio(EAlumno listado[],int cantidad){

    EAlumno alumnoaux;

    for(int i = 0; i < cantidad -1; i++){
        for(int j = i+1; j < cantidad; j++){
            if(listado[i].promedio < listado[j].promedio){
                alumnoaux = listado[i];
                listado[i] = listado[j];
                listado[j] = alumnoaux;
            }
        }
    }
}

float calcularPromedio(int nota1, int nota2){
    float promedio;
    promedio = (float)(nota1+nota2)/2;

    return promedio;
}
