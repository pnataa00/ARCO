// Autor : Javier Prádanos 

#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <iostream>
#include <vector>
#include <string>

class Alumno : public Persona {
    public:
    	// Constructor con parámetros
    	Alumno(std::string n, std::string a, std::string dni);
    	
    	// Constructor vacio
    	Alumno();
    	
    	// Metodo para insertar notas
    	void setNota(int nota);
    	
    	// Metodo para devolver notas
    	int getNota(int pos);
    	
    	// Metodo que devuelve el número de notas
    	int getNumNotas(); 
    	
    	// Metodo que devuelve la nota media
    	float getNotaMedia();   
    private:
    	std::vector<int> notas;	
};
#endif 
