// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int numerousuario, numerorandom, intentos=0;
    srand(time(NULL));
    numerorandom = 1 + rand()%(100);

    do{
        cout <<"\nIngrese un numero entre 1-100: "; cin >>numerousuario;

        if (numerousuario < numerorandom){
            cout <<"Ese numero es menor";
        }
        if (numerousuario > numerorandom){
            cout <<"Ese numero es mayor";
        }
        intentos++;

    }
    while (numerousuario != numerorandom);

    cout <<"\nCorrecto!!! El numero era "<<numerorandom<<endl;
    cout <<"Numero de intentos: "<<intentos<<endl;
    
    system ("pause");
    return 0;

    



}