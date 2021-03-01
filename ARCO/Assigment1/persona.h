#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <vector>


class Persona{


        
    public:
	std::string nombre,apellidos,dni;
    	Persona();
    	Persona(std::string nom,std::string ape,std::string Dni);
    	void setNombre(std::string nom);
   	void setApellidos(std::string ape);
  	void setDni(std::string Dni);
	std::string getNombre();
	std::string getApellidos();
	std::string getDni();
};
#endif
