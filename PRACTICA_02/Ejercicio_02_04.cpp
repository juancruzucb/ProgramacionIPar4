// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/08/2026

#include <iostream>
using namespace std;

int main (){
    int sumafinal=0,n1=0;

        cout <<"Ingrese un valor: "; cin >>n1;
    for (int i=1; i<=n1; i++){

        sumafinal +=i;
    }

    cout <<"\nEl resultado final es: "<<sumafinal <<endl;
    return 0;
}