// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;
float area(float base, float altura);
int main (){
    float base, altura;
    cout <<"CALCULAR EL AREA DE UN TRIANGULO"<<endl; 
    cout <<"\nIngrese el tamaño de la base: "; cin >> base;
    cout <<"Ingrese el tamaño de la altura: "; cin >> altura;
    cout <<"\nEl area del triangulo es de "<<area(base,altura)<<endl;
    return 0;
    
}

float area(float base, float altura){
    return (base*altura)/2;
}