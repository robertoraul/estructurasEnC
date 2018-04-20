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
modificarAlumno();
borrarAlumno();
void ordenarPorPromedio(EAlumno listado[], int cantidad);

int buscarLugarLibre(EAlumno listado[], int tamanio);
int buscarAlumno(EAlumno listado[5], EAlumno);
int buscarIndiceDeAlumno(EAlumno listado[],int legajo, int cantidad);
int insertarAlumnoEnLaLista(EAlumno[]);
void mostrarListado(EAlumno listado[], int cantidad);
EAlumno pedirAlumno();
int insertarEnListaAlumno(EAlumno ealumno[]);

#endif // FUNCIONES_H_INCLUDED
