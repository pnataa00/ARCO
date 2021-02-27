/* Autor : Javier Prádanos
 *
 * Esta basado en las opciones 1 y 2 pero no copiado integramente
 *
 */

#include "alumno.h"

// Constructor con parámetros
Alumno::Alumno(std::string nombre, std::string apellidos, std::string dni) : Persona (nombre, apellidos, dni) {
}

// Metodo para insertar notas
void Alumno::setNota(int nota) {
    notas.push_back(nota);
}

// Metodo para devolver notas
int Alumno::getNota(int pos) {
    return notas.at(pos);
}

// Metodo que devuelve el número de notas
int Alumno::getNumNotas() {
    return notas.size();
}

// Metodo que devuelve la nota media
float Alumno::getNotaMedia() {
    int i, sum = 0;
    for(i = 0; i < getNumNotas(); i++) {
        sum = sum + getNota(i);
    }
    return sum / getNumNotas();
}
