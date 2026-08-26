// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/08/2026

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numerofinal=1,n1=0;


        cout <<"Ingrese un valor: "; cin >>n1;
    for (int i=1; i<=n1; i++){

        numerofinal = numerofinal*i;
    }

    cout <<"\nEl resultado final es: "<<numerofinal <<endl;
    system ("pause");
    return 0;
}