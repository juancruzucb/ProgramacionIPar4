// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 09/09/2026

#include <iostream>
using namespace std;

void intercambiar (int &num1, int &num2);
int main (){
    int num1=10, num2=15;
    
    cout<<"El  valor de num 1: "<<num1<<endl;
    cout<<"El  valor de num 2: "<<num2<<endl;
    intercambiar (num1, num2);
    cout<<"El  nuevo valor de num 1: "<<num1<<endl;
    cout<<"El  nuevo valor de num 2: "<<num2<<endl;

    return 0;
}

void intercambiar (int &num1, int &num2){
    int aux;

    aux = num1;
    num1=num2;
    num2=aux;

}