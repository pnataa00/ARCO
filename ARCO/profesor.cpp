//Autor: Diego Machado Gallardo
//codigo referenciado de la opcion1 del moodle
#include "profesor.h"
#include <iostream>
Profesor::Profesor(std::string nombre, std::string apellidos, std::string dni) : Persona (nombre,apellidos,dni){

}

//Metodo que anyade a un alunno a la lista
void Profesor::anyadirAlumno(Alumno alumno){
    listaAlumnos.push_back(alumno);

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

    if(listaAlumnos[index].notas.size()==1){
            return listaAlumnos[index].notas.at(0);
        }else if(listaAlumnos[index].notas.size()==2){
            return (listaAlumnos[index].notas.at(0)+listaAlumnos[index].notas.at(1))/2;
        }else if(listaAlumnos[index].notas.size()==3){
            return (listaAlumnos[index].notas.at(0)+listaAlumnos[index].notas.at(1)+listaAlumnos[index].notas.at(2))/3;
        }else{
            return 0;
        }
    }

//Metodo que imprime el listado de alumnos con sus datos y sus notas medias
//El formato de los cout referenciado de una practica de años pasados 
void Profesor::imprimirListaAlumnos(){
    
    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "|                            CALIFICANDO                             |" << std::endl;
    std::cout << "---------------------------------------------------------------------- " << std::endl << std::endl;
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
            if(listaAlumnos[i].notas.size()==3){
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



