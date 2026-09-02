// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

bool par(int n1);

int main (){
    int numero;

    cout <<"Ingrese su numero: "; cin >>numero;

    cout <<"\nEl numero es par? "<<par(numero)<<endl;
}

bool par(int n1){
    if (n1%2 ==0){
        return true;
    }
    else  {
        return false;
    }

}