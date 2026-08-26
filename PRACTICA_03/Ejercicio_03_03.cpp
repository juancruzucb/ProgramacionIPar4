// Materia: Programación I, Paralelo 4
// Autor: Juan de Leon Cruz Cuyauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2026

#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
    int maximo,suma=0;
    cout <<"Ingrese el valor maximo: "; cin >>maximo;
    for (int i=1; i<=maximo; i++){
        suma=suma+i;
    }
    cout <<"\nLa suma total es: "<<suma<<endl;
    system ("pause");
    return 0;
}