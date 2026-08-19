// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri 
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/08/2026

#include <iostream>
using namespace std;
int main (){
    int año=0;
    cout << "Ingrese un año de 4 digitos: "; cin >> año;

    if (año%400 == 0 || año%4 == 0 && año%100!= 0) {
        cout<<"El año "<<año<< " es bisiesto"<<endl;
    } 
    else {
        cout <<"El año " <<año<<" no es bisiesto" <<endl;
    }



    return 0;


}