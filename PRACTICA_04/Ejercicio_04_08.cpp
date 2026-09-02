// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

int digito (int n1);
int main(){
    int n1;
    cout <<"Ingrese su Numero: "; cin >>n1;

    cout <<"\nLa cantidad de digitos es: "<<digito(n1)<<endl;
}

int digito (int n1){
    int cantidad=1;
    while (n1/10>0){
        n1=n1/10;
        cantidad++;
    }
    return cantidad;
    

}