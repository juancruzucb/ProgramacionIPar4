// Materia: Programación I, Paralelo 4
// Autor: Juan de Leon Cruz Cuyauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2026}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int maximo, sumatotal=0, factorial=1;
    cout <<"Ingrese el valor maximo: "; cin >>maximo;

    for (int i=1; i<=maximo; i++){

    factorial = factorial*i;
    sumatotal += factorial;
    }
    cout <<"\nLa suma total es: "<<sumatotal<<endl;
    system ("pause");
    return 0;
}