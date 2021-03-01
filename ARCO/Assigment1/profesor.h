//Codigo referenciado de la opcion1 de moodle
//Autor: Diego Machado Gallardo
#ifndef PROFESOR_H
#define PROFESOR_H
#include "persona.h"
#include "alumno.h"
#include <vector>
//Creamos la clase

class Profesor : public Persona {
    public:

        std::string nombre;
        std::string apellidos;
        std::string dni;

        std::vector<Alumno>listaAlumnos;

        Profesor(std::string nombre, std::string apellidos,std::string dni);
        
        void anyadirAlumno (Alumno alumno);
        void asignarNotas (int index,float notaAlumno);
        void asignarNotas (int index,float notaAlumno,float notaAlumno2);
        void asignarNotas (int index,float notaAlumno,float notaAlumno2,float notaAlumno3);
        float notaMedia (int index);
        void imprimirListaAlumnos();
        void imprimirMejorNota();
        float notaAlumno(int a, int n);
};
#endif 
