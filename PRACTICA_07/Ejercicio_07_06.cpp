// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 4
#include <iostream>
#include <vector>

using namespace std;

int numeroaleatorio(int max, int min);

int main (){
    vector <int> vector1(5);
    vector <int> vector2(5);
    vector <int> vector3;

    cout <<"\nValores de Vector 1"<<endl;
    for (int i = 0; i <vector1.size(); i++){
        cout <<"Valor "<<i+1<<": "; cin >>vector1[i];
    }


    cout <<"\nValores de Vector 2"<<endl;
    for (int i = 0; i <vector2.size(); i++){
        cout <<"Valor "<<i+1<<": "; cin >>vector2[i];
    }
    
    
    for (int i=0; i<vector2.size(); i++){
        vector3.push_back(vector1[i]+vector2[i]);
    }

    cout <<"\nSumas para Vector3: "<<endl;
    for (int i=0; i<vector3.size(); i++){
        cout <<vector1[i]<<" + "<<vector2[i]<<" = " <<vector3[i]<<endl;
    }

    return 0;
}


int numeroaleatorio(int max, int min){

    return rand() % (max - min + 1) + min;
}


