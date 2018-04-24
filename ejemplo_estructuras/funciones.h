#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    int legajo;
    int notaUno;
    int notaDos;
    float promedio;
    char nombre[50];
    int estado;
}EAlumno;

EAlumno cargarAlumno(void);
void mostrarAlumno(EAlumno);
int buscarLugarLibre(EAlumno[],int);
int buscarIndiceDelAlumno(EAlumno listado[],int legajo,int cantidad);
int insertarAlumnoEnLaLista(EAlumno[]);
void mostrarListado(EAlumno listado[],int cantidad);
float calcularPromedio(int ,int);
void ordenarPorPromedio(EAlumno[],int cantidad);

#endif // FUNCIONES_H_INCLUDED
