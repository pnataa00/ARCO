#include "persona.h"
Persona::Persona(){

}
Persona::Persona(std::string nom,std::string ape,std::string Dni){
	nombre=nom;
	apellidos=ape;
	dni=Dni;
    }
std::string Persona :: getNombre()
{
    return nombre;
}
void Persona :: setNombre(std::string nom)
{
    nombre=nom;
}
std::string Persona :: getApellidos()
{
    return apellidos;
}
void Persona :: setApellidos(std::string ape)
{
    apellidos=ape;
}
std::string Persona :: getDni()
{
    return dni;
}
void Persona :: setDni(std::string Dni)
{

   dni= Dni;
}
