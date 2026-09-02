// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

float cambio(int bs, float cambio);
int main (){
    int bolivianos;
    float oficial, paralelo;
    cout <<"CONVERSION DE DIVISSAS"<<endl;
    cout <<"Ingrese el monto en Bolivianos: "; cin >> bolivianos;
    cout <<"Ingrese el cambio oficial al dolar: "; cin >> oficial;
    cout <<"Ingrese el cambio paralelo al dolar: "; cin >> paralelo;
    
    cout <<"\nMonto en dolares oficial: "<< cambio(bolivianos,oficial)<<endl;
    cout <<"Monto en dolares paralelo: "<<cambio(bolivianos, paralelo)<<endl;
    return 0;


}

float cambio(int bs, float cambio){
    return bs/cambio;

}
