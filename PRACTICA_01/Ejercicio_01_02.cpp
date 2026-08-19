// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri 
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main (){
    float precio,preciofinal=0;
    cout << "Ingrese el precio del producto: "; cin >>precio;
    preciofinal = precio+precio*0.13;
    cout << "\nEl precio final del producto es: "<<preciofinal<<"Bs."<<endl;

    return 0;
}