// Autor : Javier Prádanos 

#include "alumno.h"

// Constructor con parámetros
Alumno::Alumno(std::string nombre, std::string apellidos, std::string dni) : Persona (nombre, apellidos, dni) {
}

// Constructor vacio
Alumno:Alumno();

// Metodo para insertar notas
void Alumno::setNota(int nota) {
    notas.push_back(nota);
}

// Metodo para devolver notas
int Alumno::getNota(int pos) {
    return notas[pos];
}

// Metodo que devuelve el número de notas
int Alumno::getNumNotas() {
    return notas.size();
}

// Metodo que devuelve la nota media
int Alumno::getNotaMedia() {
    int i, sum = 0;
    for(i = 0; i < getNumNotas(); i++) {
    	sum = sum + getNota(i);
    }
    return sum / getNumNotas();
}
