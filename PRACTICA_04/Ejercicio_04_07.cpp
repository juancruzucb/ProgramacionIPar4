// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

float distancia (float velocidad, float tiempo);

int main(){
    float velociad, tiempo;

    cout<<"Ingrese la velocidad promedio del objeto: "; cin >>velociad;
    cout<<"Ingrese el tiempo del objeto: "; cin >>tiempo;

    cout <<"La distancia recorrida por el objeto es: "<<distancia(velociad, tiempo)<<" m"<<endl;

    return 0;
}

float distancia (float velocidad, float tiempo){
    return velocidad*tiempo;




}