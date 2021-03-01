/* Autor : Javier Prádanos
 *
 * Esta basado en las opciones 1 y 2 pero no copiado integramente
 *
 */

#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <vector>

class Alumno : public Persona {
    public:	
  	std::string nombre;
  	std::string apellidos;
  	std::string dni;
  	
        // Constructor con parámetros
        Alumno(std::string nombre, std::string apellidos, std::string dni);

        // Constructor vacio
        Alumno();

        // Metodo para insertar notas
        void setNota(float notaAlumno);

        // Metodo para devolver notas
        float getNota(int pos);

        // Metodo que devuelve el número de notas
        int getNumNotas();
    private:
      	std::vector<int>notas;    
};
#endif
