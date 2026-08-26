// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/08/2026

#include <iostream>
using namespace std;

int main (){
    int suma=0,cuadrados;

        for (int i=1; i<=10 ;i++){
        cuadrados = i*i;
        suma +=cuadrados;
        }
        cout <<"El resultado final es el: "<<suma <<endl;
    return 0;
}