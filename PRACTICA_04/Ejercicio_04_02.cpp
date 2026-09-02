// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

int numeromayor(int n1, int n2, int n3);

int main (){
    int n1, n2, n3;
    cout <<"NUMERO MAYOR"<<endl;
    cout <<"Ingrese el primer numero: "; cin >>n1;
    cout <<"Ingrese el segundo numero: "; cin >>n2;
    cout <<"Ingrese el tercer numero: "; cin >>n3;
    cout <<"\nEl numero Mayor es: "<<numeromayor(n1,n2,n3); 
    return 0;
}

int numeromayor(int n1, int n2, int n3){
    int mayor = n1;

    if (n2 > mayor){
        mayor = n2;
    }
    else if (n3 > mayor){
        mayor = n3;
    }

    return mayor;
}