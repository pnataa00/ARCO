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
void Alumno::setNota(float notaAlumno) {
    notas.push_back(notaAlumno);
}

// Metodo para devolver notas
float Alumno::getNota(int pos) {
    return notas[pos];
}

// Metodo que devuelve el número de notas
int Alumno::getNumNotas() {
    return notas.size();
}
