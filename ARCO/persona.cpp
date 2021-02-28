#include "persona.h"
Persona::Persona(){

}
Persona::Persona(std::string nombre,std::string apellidos,std::string dni){
	nombre=nombre;
	apellidos=apellidos;
	dni=dni;
    }
std::string Persona :: getNombre()
{
    return nombre;
}
void Persona :: setNombre(std::string nombre)
{
    nombre = nombre;
}
std::string Persona :: getApellidos()
{
    return apellidos;
}
void Persona :: setApellidos(std::string apellidos)
{
    apellidos = apellidos;
}
std::string Persona :: getDni()
{
    return dni;
}
void Persona :: setDni(std::string dni)
{

   dni= dni;
}
