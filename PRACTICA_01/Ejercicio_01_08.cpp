// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){
    int numero=0;
    cout <<"Ingrese un numero entre 0 y 100: "; cin >>numero;
    while (numero <0 || numero > 100){
        cout <<"\nERROR!!! Valor invalido"<<endl;
        cout <<"Ingrese un numero entre 0 y 100: "; cin >>numero;
    }
    cout <<"\nNota registrada correctamente"<<endl;
    
    return 0;



}