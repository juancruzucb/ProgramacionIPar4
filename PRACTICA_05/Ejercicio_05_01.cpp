// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 07/09/2026 
// Número de ejercicio: 11

#include <iostream>

using namespace std;

void intercambio(int &n1, int &n2);
int main (){
    int n1, n2;
    cout <<"Ingrese un primer valor: "; cin >>n1;
    cout <<"Ingrese un sergundo valor: "; cin >>n2;

    cout <<"\nValor de n1: "<<n1<<endl;
    cout <<"Valor de n2: "<<n2<<endl;

    intercambio(n1,n2);

    cout <<"\nNuevo valor de n1 : "<<n1<<endl;
    cout <<"Nuevo valor de n2: "<<n2<<endl;

}

void intercambio (int &n1, int &n2){
    int aux;
    aux=n1;
    n1=n2;
    n2=aux;

}