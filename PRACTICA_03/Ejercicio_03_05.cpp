// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int numero, numerorandom, contador=0;
    srand(time(NULL));
    numerorandom = 1 + rand()%(100);

    do{
        cout <<"\nIngrese un numero entre 1-100: "; cin >>numero;

        if (numero < numerorandom){
            cout <<"Ese numero es menor";
        }
        if (numero > numerorandom){
            cout <<"Ese numero es mayor";
        }
        contador++;

    }
    while (numero != numerorandom);

    cout <<"\nAdivinaste! El numero era "<<numerorandom<<endl;
    cout <<"Lo hiciste en "<<contador<< " intentos"<<endl;
    
    system ("pause");
    return 0;

}