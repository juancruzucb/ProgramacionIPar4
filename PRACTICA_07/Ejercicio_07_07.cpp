// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 7

#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector <int> vector1(100);

    int i=0;
    int n=1;

    while (i < vector1.size() && n > 0){
        cout <<"Introduzca un valor: "; cin >> n;
        if(n > 0){
            vector1[i] = n;
            i++;
        }
    }

    cout <<"Elementos del vector1: "<<endl;

    for (int j=0; j < i; j++){

        cout <<" "<<vector1[j]<<", ";
    }


    return 0;
}