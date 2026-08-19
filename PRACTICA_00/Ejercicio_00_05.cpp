// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){

    float x,y,aux;
    cout <<"Ingrese valor de x: "; cin >>x;
    cout <<"Ingrese valor de y: "; cin >>y;
    
    aux=x;
    x=y;
    y=aux;


    cout <<"\nEl nuevo valor de x es: "<<x<<endl;
    cout <<"El nuevo valor de y es: " <<y<<endl;
    return 0;
}