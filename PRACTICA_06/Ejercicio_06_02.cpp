// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 09/09/2026

#include <iostream>
using namespace std;
void tiempo (int tiemposeg, int &hora, int &min, int &seg);

int main (){
    int tiemposeg, horas, min, seg;
    cout <<"Ingrese el tiempo en segundos: "; cin >>tiemposeg;
    tiempo(tiemposeg, horas, min,seg);

    cout <<"El nuevo tiempo es: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    return 0;
}

void tiempo (int tiemposeg, int &hora, int &min, int &seg){
    hora=tiemposeg/3600;
    tiemposeg= tiemposeg%3600;
    min=tiemposeg/60;
    seg=tiemposeg%60;


}
