// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int numeroaleatorio(int max, int min);

int main (){
    vector <int> vector1;
    vector <int> vector2;
    vector <int> vector3;
    int n;
    srand(time(NULL));

    cout <<"Ingrese el tamaño de los vectores: "; cin >>n;

    for (int i = 0; i <n; i++){
        vector1.push_back(numeroaleatorio(100,0));
        vector2.push_back(numeroaleatorio(100,0));
    }
    
    for (int i=0; i<n; i++){
        vector3.push_back(vector1[i]*vector2[i]);
    }

    for (int i=0; i<n ; i++){
        cout <<vector1[i]<<" * "<<vector2[i]<<" = " <<vector3[i]<<endl;

    }

    return 0;
}


int numeroaleatorio(int max, int min){

    return rand() % (max - min + 1) + min;
}


