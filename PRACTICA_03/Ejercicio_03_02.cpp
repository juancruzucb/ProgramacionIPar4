// Materia: Programación I, Paralelo 4
// Autor: Juan de Leon Cruz Cuyauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2026

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
    int cantidad, numerorand, sumatotal=0, sumapares=0, sumaimpares=0, sumaprimos=0;
    int primo=0;
    srand(time(NULL));

    cout <<"Ingrese la cantidad de numeros aleatorios: "; cin >>cantidad;

    for (int i=1; i<=cantidad; i++){
        numerorand = 1+rand()%100;
        sumatotal+=numerorand;

        if (numerorand%2==0){
            sumapares+=numerorand;
        }

        if (numerorand%2!=0){
            sumaimpares+=numerorand;
        }

        for (int j=1;j<=numerorand;j++){
            if(numerorand%1==0){
                primo++;
            }
            if (primo==2){
                sumaprimos+=numerorand;
            }
        }
        cout <<numerorand<<endl;

    }
    cout <<"\nSuma total de los numeros: "<<sumatotal<<endl;
    cout <<"Suma total de los pares: "<<sumapares<<endl;
    cout <<"Suma total de los impares: "<<sumaimpares<<endl;
    cout <<"Suma total de los primos: "<<sumaprimos<<endl;
    return 0;
}