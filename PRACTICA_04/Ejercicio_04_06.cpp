// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

int sumaT(int nmax);

int main (){

    int nmax;
    cout<<"Ingrese su numero maximo: "; cin >> nmax;

    cout<<"\nLa suma total es: "<< sumaT(nmax)<<endl;


    return 0;
}

int sumaT(int nmax){

    int sumat=0, i=1;

    while (sumat<=nmax){
        sumat+=i;
        i++;

    }
    return sumat;
}