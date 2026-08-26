// Materia: Programación I, Paralelo 4
// Autor: Juan de Leon Cruz Cuyauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2026

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int numero=0;
    do{
        cout <<"Ingrese un numero del 1 al 10: "; cin >>numero;
    }
    while (numero<1 || numero>10);

    for (int i=1; i<=10 ;i++){
        cout <<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
    system ("pause");

    return 0;
}