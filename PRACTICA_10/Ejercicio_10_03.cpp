// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
float Aleatorio(int max, int min){
    float decimal = rand() % (99-0+1)+0;
    float entero = rand() % (max-min+1)+min;
    float numero= (entero)+((decimal)/100);
    if (numero >max){
        numero = max;
    }

    return numero;
}
void llenar(vector <float> &tiempos1, vector <float> &tiempos2 );
void ordenar(vector <float> &tiempos);
void imprimir(vector<float> tiempos1, vector<float> tiempos2);;

int main (){
    srand(time(0));
    vector <float> tiempos1;
    vector <float> tiempos2;
    llenar(tiempos1, tiempos2);
    ordenar(tiempos2);
    imprimir(tiempos1, tiempos2);
}

void llenar(vector <float> &tiempos1, vector <float> &tiempos2 ){
    int n;
    float numero;
    cout <<"Ingrese el numero de corredores: "; cin >> n;
    for (int i=0; i<n; i++){
        numero=Aleatorio(20,10);
        tiempos1.push_back(numero);
        tiempos2.push_back(numero);
    }
}

void ordenar(vector <float> &tiempos){
    float aux;
    int j;
    for (int i =1 ; i<tiempos.size(); i++){

        aux = tiempos[i];
        j=i-1;

        while(j>=0&&tiempos[j]>aux){
            tiempos[j+1]=tiempos[j];
            j=j-1;
        }
        tiempos [j+1]=aux;

    }
}

void imprimir(vector<float> tiempos1, vector<float> tiempos2){
    cout <<"Tiempos Antes: "<<endl;
    for(int i=0; i<tiempos1.size(); i++){
        cout << tiempos1[i] << " segundos" << endl;
    }
    cout <<"Tiempos ordenados: "<<endl;
    for(int i=0; i<tiempos1.size(); i++){
        cout << tiempos2[i] << " segundos" << endl;
    }
}

