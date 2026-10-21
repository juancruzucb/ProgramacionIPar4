// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int Aleatorio(int max, int min){
    return rand() % (max-min+1)+min;
}

void llenar(vector <string> nombres, vector <string> apellidos, vector <string> &nombrecompleto);
void mostrar (vector <string> nombrecompleto);
void ordenar (vector <string> &nombrecompleto);

int main (){
    srand (time(NULL));
     vector <string> nombres = {"Pedro", "Sebastian",  "Catalina",  "Luis", "Alejandro","Alesandro", "Rosalia", "Richard", "Ignacio", "Marco"};
     vector <string> apellidos = {"Cruz", "Yanez", "Tejada" , "Estrada", "Torres", "Flores", "Rodriguez", "Gutierrez", "Lopez", "Aleman"};
     vector <string> nombrecompleto;
    llenar(nombres, apellidos,  nombrecompleto);
    cout<<"Nombres sin ordenar: "<<endl;
    mostrar (nombrecompleto);
    ordenar (nombrecompleto);
    cout<<"Nombres ordenados alfabeticamente: "<<endl;
    mostrar (nombrecompleto);

    return 0;
}

void llenar(vector <string> nombres, vector <string> apellidos, vector <string> &nombrecompleto){
    int n;
    cout <<"Ingrese la cantidad de nombres que desee: "; cin >>n;

    for (int i=0;i<n;i++){
        nombrecompleto.push_back(nombres[Aleatorio(9,0)]+' '+nombres[Aleatorio(9,0)]+' '+apellidos[Aleatorio(9,0)]+' '+apellidos[Aleatorio(9,0)]);
    }
}

void mostrar (vector <string> nombrecompleto){
    for (int i=0;i<nombrecompleto.size();i++){
        cout<<i+1<<". "<<nombrecompleto[i]<<endl;
    }
}

void ordenar (vector <string> &nombrecompleto){
    int nombre=1;
    string aux;
    for (int i=0; i<nombrecompleto.size()-1; i++){
        for (int j=0; j<nombrecompleto.size()-i-1; j++){
            if (nombrecompleto[j]>nombrecompleto[j+1]){
                aux = nombrecompleto[j];
                nombrecompleto[j] = nombrecompleto[j+1];
                nombrecompleto[j+1] = aux;
            }
        }

    }

}