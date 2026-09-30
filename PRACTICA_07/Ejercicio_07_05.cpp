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
void imprimir(vector <int> vector1,vector <int> vector2,vector <int> vector3);

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
    
    for (int i=0; i<vector1.size() ; i++){
        vector3.push_back(vector1[i]);
    }
    for (int i=0; i<vector2.size() ; i++){
        vector3.push_back(vector2[i]);
    }
    
    imprimir (vector1, vector2, vector3);
    return 0;
}


int numeroaleatorio(int max, int min){
    return rand() % (max - min + 1) + min;
}

void imprimir(vector <int> vector1,vector <int> vector2,vector <int> vector3){
    cout <<"\nVector 1: [ ";
    for (int i=0; i<vector1.size() ; i++){
        cout <<vector1[i]<<", ";
    }
    cout <<"]"<<endl;

    cout <<"Vector 2: [ ";
    for (int i=0; i<vector2.size() ; i++){
        cout <<vector2[i]<<", ";
    }
    cout <<"]"<<endl;

    cout <<"\nVector 3: [ ";
    for (int i=0; i<vector3.size() ; i++){
        cout <<vector3[i]<<", ";
    }
    cout <<"]"<<endl;
}
