// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero1, numero2;

    cout <<"Ingrese el valor 1: "; cin >>numero1;
    cout <<"Ingrese el valor 2: "; cin >>numero2;
    if (numero1==numero2){
        cout <<"No existe incremento ni decremento"<<endl;
    }

    else if (numero1>numero2){
        while (numero1>=numero2){
        cout <<numero1<<" - ";
        numero1-=1;
        }
    }
    
    else {
        while (numero1<=numero2){
        cout <<numero1<<" - ";
        numero1++;
        }
    }
    
    return 0;

}