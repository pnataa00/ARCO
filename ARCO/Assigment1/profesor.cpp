//Autor: Diego Machado Gallardo
//codigo referenciado de la opcion1 del moodle
#include "profesor.h"
Profesor::Profesor(std::string nombre, std::string apellidos, std::string dni) : Persona (nombre,apellidos,dni){

}

//Metodo que anyade a un alunno a la lista
void Profesor::anyadirAlumno(Alumno alumno){
    this->listaAlumnos.push_back(alumno);

}

//Metodos que asignan 1,2 y 3 notas respectivamente
void Profesor::asignarNotas(int index, float notaAlumno){
    listaAlumnos[index].setNota(notaAlumno);
}

void Profesor::asignarNotas(int index, float notaAlumno,float notaAlumno2){
    listaAlumnos[index].setNota(notaAlumno);
    listaAlumnos[index].setNota(notaAlumno2);

}

void Profesor::asignarNotas(int index, float notaAlumno, float notaAlumno2, float notaAlumno3){
    listaAlumnos[index].setNota(notaAlumno);
    listaAlumnos[index].setNota(notaAlumno2);
    listaAlumnos[index].setNota(notaAlumno3);
}

float Profesor::notaMedia(int index){
	int i, sum = 0;
	for(i = 0; i < listaAlumnos[index].getNumNotas(); i++){
		sum = sum + listaAlumnos[index].getNota(i);	
	}
	return sum/listaAlumnos[index].getNumNotas();	
}

//Metodo que imprime el listado de alumnos con sus datos y sus notas medias
//El formato de los cout referenciado de una practica de años pasados 
void Profesor::imprimirListaAlumnos(){
    
    std::cout << "Listado de alumnos, con sus nombres, apellidos, DNIs y notas medias:" << std::endl << std::endl;

    //Recorremos la lista para imprimir alumno por alumno
    for(int i=0; i<listaAlumnos.size(); i++)
   {
        std::cout << i+1 << ".- " << listaAlumnos[i].getNombre() << " " << listaAlumnos[i].getApellidos() << " con DNI " << listaAlumnos[i].getDni() << " y nota media " << notaMedia(i) << std::endl;
    }
}

//Metodo que imprime el alumno con mejor nota de los que tienen 3
//Metodo referenciado de la opcion1 del moodle 
void Profesor::imprimirMejorNota(){
        std::string nombre;
        std::string apellidos;
        std::string dni;
        int mejorNota = 0;
        int i;
        for(i=0; i<listaAlumnos.size(); i++){
            if(listaAlumnos[i].getNumNotas()==3){
                if(notaMedia(i)>mejorNota){
                    mejorNota = notaMedia(i);
                    nombre = listaAlumnos[i].getNombre();
                    apellidos = listaAlumnos[i].getApellidos();
                    dni = listaAlumnos[i].getDni();
                }
            }
        }

        std::cout << "\nAlumno con mejor nota media: \n";
        std::cout << nombre << std::endl;
        std::cout << apellidos << std::endl;
        std::cout << dni << std::endl;
        std::cout << "Nota media: " << mejorNota << std::endl;
    }
float Profesor::notaAlumno(int a, int n){
	return listaAlumnos[a].getNota(n);
}
