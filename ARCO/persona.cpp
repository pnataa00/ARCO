#include "persona.h"
persona::persona(){

}
persona::persona(std::string _nombre,std::string _apellidos,std::string _dni){
	nombre=_nombre;
	apellidos=_apellidos;
	dni=_dni;
    }
std::string persona :: getNombre()
{
    return nombre;
}
void persona :: setNombre(std::string _nombre)
{
    nombre = _nombre;
}
std::string persona :: getApellidos()
{
    return apellidos;
}
void persona :: setApellidos(std::string _apellidos)
{
    apellidos = _apellidos;
}
std::string persona :: getDni()
{
    return dni;
}
void persona :: setDni(std::string _dni)
{
   dni= _dni;
}
