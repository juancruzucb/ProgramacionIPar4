// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/08/2026

#include <iostream>
using namespace std;

int main (){
    int n1=0;
    do{
        cout <<"Ingrese un numero del 1 al 10: "; cin >>n1;
    }
    while (n1<1 || n1>10);

        for (int i=1; i<=10 ;i++){
        cout <<n1<<" * "<<i<<" = "<<n1*i<<endl;
        }

    return 0;
}
