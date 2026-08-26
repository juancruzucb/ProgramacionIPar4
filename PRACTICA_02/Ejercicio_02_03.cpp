// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/08/2026

#include <iostream>
using namespace std;

int main (){
    int sumafinal=0,n1=0;
    do {
        cout <<"Ingrese un valor: "; cin >>n1;
        if (n1>0){
            sumafinal = sumafinal + n1;
        }
    }
    while ((n1<20 || n1>30) && n1!=0);

        cout <<"\nEl resultado final es: "<<sumafinal <<endl;
    return 0;
}