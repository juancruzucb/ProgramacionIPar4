// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){

    float n1,n2, resultado=0;
    cout <<"Ingrese valor de A: "; cin >>n1;
    cout <<"Ingrese valor de B: "; cin >>n2;

    resultado = (n1/n2) +1;
    cout.precision (3);

    cout <<"El resultado es: "<<resultado<<endl;



    return 0;
}