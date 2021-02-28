#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona{
    private:
        std::string nombre,apellidos,dni;
        
    public:
    Persona();
    Persona(std::string nombre,std::string apellidos,std::string dni);
    void setNombre(std::string nombre);
	void setApellidos(std::string apellido);
	void setDni(std::string dni);
	std::string getNombre();
	std::string getApellidos();
	std::string getDni();
};
#endif