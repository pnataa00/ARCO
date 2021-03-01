//Codigo copiado de la opcion 1 y adaptado a nuestros metodos


#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include <iostream>
#include <vector>
#include <string>


void Calificando();

int main(){
    Calificando();
    return 0;
}



void Calificando() {
    std::vector<Profesor> profesores;

    Profesor hector ("Hector", "Herrero", "75896483A");
    profesores.push_back(hector);
    Profesor alvaro("Alvaro", "Trujillo", "77996584X");
    profesores.push_back(alvaro);


    Alumno pedro("Pedro", "Alvarez", "75846312W");
    Alumno maria("Maria", "Vazquez", "77755584N");
    Alumno javier("Javier", "Valbuena", "72826545U");

    Alumno esteban("Esteban", "Dido", "74596854R");
    Alumno enrique("Enrique", "Granados", "75863215E");
    Alumno alfonso("Alfonso", "Lopez", "77105364R");
    Alumno sara("Sara", "Perez", "71459235F");


    profesores[0].anyadirAlumno(pedro); //alumno 0
    profesores[0].anyadirAlumno(sara); //alumno 1
    profesores[0].anyadirAlumno(esteban); //alumno 2

    profesores[1].anyadirAlumno(javier); //alumno 0
    profesores[1].anyadirAlumno(enrique); //alumno 1
    profesores[1].anyadirAlumno(maria); //alumno 2
    profesores[1].anyadirAlumno(alfonso); //alumno 3

    profesores[0].asignarNotas(0, 6);
    profesores[0].asignarNotas(1, 5, 6);
    profesores[0].asignarNotas(2, 10, 8, 10);

    profesores[1].asignarNotas(0, 7);
    profesores[1].asignarNotas(1, 4, 9);
    profesores[1].asignarNotas(2, 6, 10, 7);
    profesores[1].asignarNotas(3, 4, 8, 10);
    
    
    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "|                            CALIFICANDO                             |" << std::endl;
    std::cout << "---------------------------------------------------------------------- " << std::endl << std::endl;


    //Imprimir el listado de alumnos del primer profesor
    std::cout << "  - Profesor -\n";
    std::cout << profesores[0].getNombre() << " ";
    std::cout << profesores[0].getApellidos() << " ";
    std::cout << profesores[0].getDni() << "\n";
    profesores[0].imprimirListaAlumnos();
    //Mostrar el alumno con mejor media del primer profesor
    profesores[0].imprimirMejorNota();

    //Imprimir el listado de alumnos del segundo profesor
    std::cout << "\n  - Profesor -\n";
    std::cout << profesores[1].getNombre() << " ";
    std::cout << profesores[1].getApellidos() << " ";
    std::cout << profesores[1].getDni() << "\n";
    profesores[1].imprimirListaAlumnos();
    //Mostrar el alumno con mejor media del segundo profesor
    profesores[1].imprimirMejorNota();


    //Pedir DNI
    int existe = 0; //0-no, 1-si
    while(!existe) {
        std::cout << "\nPor favor introduzca su DNI:  ";
        std::string DNI;
        std::cin >> DNI;
        std::cout << " \n";

        //Comprobar si existe entre los profesores
        int i, j;
        for (i = 0; i < profesores.size(); i++) {
            //Profesor - datos profesor, su lista de alumnos(datos, notas y media) y mejor alumno
            if (profesores[i].getDni().compare(DNI) == 0) {
                existe = 1;
                std::cout << "  - Profesor -\n";
                std::cout << profesores[i].getNombre() << " ";
                std::cout << profesores[i].getApellidos() << " ";
                std::cout << profesores[i].getDni() << "\n";

                profesores[i].imprimirListaAlumnos();

                profesores[i].imprimirMejorNota();

            } else { //Comprobar si existe entre los alumnos
                for (j = 0; j < profesores[i].listaAlumnos.size(); j++) {
                    //Alumno - datos alumno, notas y media
                    if (profesores[i].listaAlumnos[j].getDni().compare(DNI) == 0) { //==0 son iguales
                        existe = 1;
                        std::cout << "Alumno \n";
                        std::cout << profesores[i].listaAlumnos[j].getNombre() << " ";
                        std::cout << profesores[i].listaAlumnos[j].getApellidos() << " ";
                        std::cout << profesores[i].listaAlumnos[j].getDni() << "\n";
                        std::cout << "Notas: ";
                        int k;
                        for(k=0; k<profesores[i].listaAlumnos[j].notas.size(); k++){
                            std::cout << profesores[i].notaAlumno(j, k) << " ";
                        }
                        std::cout << "\nMedia: " << profesores[i].notaMedia(j) << "\n";
                    }
                }
            }
        }
        //NO existe - alerta y pedir dni again
        if (existe == 0) {
            std::cout << "El DNI introducido no existe \n";
        }
    }
}
