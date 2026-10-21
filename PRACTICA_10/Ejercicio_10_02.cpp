// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 2 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int Aleatorio(int max, int min){
    return rand() % (max-min+1)+min;
}
void llenarranking(vector <int> &puntuacion);
void ordenar(vector<int> &puntuacion);
void mostrarpodio(vector <int> puntuacion);

int main(){
    srand(time(NULL));
    vector <int> puntuacion;
    llenarranking(puntuacion);
    ordenar(puntuacion);
    mostrarpodio(puntuacion);

}

void llenarranking(vector <int> &puntuacion){
    int n;
    cout <<"Ingrese la cantidad de puntaciones: "; cin >>n;
    for (int i=0; i<n; i++){
        puntuacion.push_back(Aleatorio(100,1));
    }
    cout <<"Puntuaciones: "<<endl;
    for (int i=0; i<n; i++){
        cout <<puntuacion[i]<<endl;
    }
}

void ordenar(vector <int> &puntuacion) {
    int aux;
    cout <<"Ordenado: "<<endl;

    for (int i = 0; i < puntuacion.size() - 1; i++) {
        for (int j = 0; j < puntuacion.size() - 1 - i; j++) {
            if (puntuacion[j] < puntuacion[j + 1]) {
                aux = puntuacion[j];
                puntuacion[j] = puntuacion[j + 1];
                puntuacion[j + 1] = aux;
            }
        }
    }

    for (int i=0; i<puntuacion.size(); i++){
        cout <<" "<<puntuacion[i]<<endl;
    }
}

void mostrarpodio(vector <int> puntucion){
    cout <<"RANKING DE LOS 3 MEJORES"<<endl;
    for (int i=0 ; i<3; i++){
        cout<<i+1<<". "<<puntucion[i]<<endl;
    }

}