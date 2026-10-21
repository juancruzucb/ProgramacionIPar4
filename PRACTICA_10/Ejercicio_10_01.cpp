// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 1 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int Aleatorio(int max, int min){
    return rand() % (max-min+1)+min;
}

void nombrecompleto(vector <string> nombres, vector <string> apellidos);

int main (){
    srand (time(NULL));
     vector <string> nombres = {"Pedro", "Sebastian",  "Catalina",  "Luis", "Alejandro","Alesandro", "Rosalia", "Richard", "Ignacio", "Marco"};
     vector <string> apellidos = {"Cruz", "Yanez", "Tejada" , "Estrada", "Torres", "Flores", "Rodriguez", "Gutierrez", "Lopez", "Aleman"};
    nombrecompleto(nombres, apellidos);

    return 0;
}

void nombrecompleto(vector <string> nombres, vector <string> apellidos){
    int n;
    cout <<"Ingrese la cantidad de nombres que desee: "; cin >>n;

    for (int i=0;i<n;i++){
        cout <<i+1<<". "<<nombres[Aleatorio(9,0)]<<" "<<nombres[Aleatorio(9,0)]<<" "<<apellidos[Aleatorio(9,0)]<<" "<<apellidos[Aleatorio(9,0)]<<endl;
    }


}