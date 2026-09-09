// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 08/09/2026 
// Número de ejercicio: 5

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main (){
    int totalsegundos=0, horas, minutos, segundos;
    cout <<"Ingrese el numero total en segundos: "; cin >>totalsegundos;

    calcularTiempo(totalsegundos, horas, minutos,segundos);

    cout <<"\nHoras: "<<horas<<endl;
    cout <<"Minutos: "<<minutos<<endl;
    cout <<"Segundos: "<<segundos<<endl; 
    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
    horas = totalSegundos/3600;
    totalSegundos = totalSegundos%3600;
    minutos= totalSegundos/60;
    segundos= totalSegundos%60;

}
