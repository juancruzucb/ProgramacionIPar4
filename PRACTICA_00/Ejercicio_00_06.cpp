// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){

    float practica, teorica, participacion, notafinal;
    cout <<"Ingrese la nota de Practica: "; cin >>practica;
    cout <<"Ingrese la nota de Teorica: "; cin >>teorica;
    cout <<"Ingrese la nota de Participacion: "; cin >>participacion;

    practica = practica*0.3;
    teorica = teorica*0.6;
    participacion = participacion*0.1;

    notafinal= practica+teorica+participacion;

    cout <<"La nota final del Estudiante es: "<<notafinal<<endl;

    return 0;
}