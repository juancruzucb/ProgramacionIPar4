// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 07/09/2026 
// Número de ejercicio: 2 

#include <iostream>

using namespace std;

int ModificarValores(int n1, int &n2){
    n2= n2+10;
    return n1*2;
}

int main (){
    int n1, n2;

    cout <<"Ingrese el valor por valor: ";cin >>n1;
    cout <<"Ingrese el valor por referencia: ";cin >>n2;

    cout <<"\nValor por Valor es: "<< ModificarValores(n1,n2)<<endl;
    cout <<"Valor por Referencia es: "<<n2<<endl;


    return 0;

}