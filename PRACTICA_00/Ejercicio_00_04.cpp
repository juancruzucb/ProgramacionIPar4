// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){

    float A,B,C,D,E,F, resultado=0;
    cout <<"Ingrese valor de A: "; cin >>A;
    cout <<"Ingrese valor de B: "; cin >>B;
    cout <<"Ingrese valor de C: "; cin >>C;
    cout <<"Ingrese valor de D: "; cin >>D;
    cout <<"Ingrese valor de E: "; cin >>E;
    cout <<"Ingrese valor de F: "; cin >>F;


    resultado = (A+(B/C))/(D+(E/F));

    cout.precision (3);

    cout <<"\nEl resultado es: "<<resultado<<endl;
    return 0;
}