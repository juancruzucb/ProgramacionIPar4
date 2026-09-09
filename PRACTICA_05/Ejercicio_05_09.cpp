// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 09/09/2026 
// Número de ejercicio: 9

#include <iostream>
#include <ctime>

using namespace std;
int numeroaleatorio (int max, int min);
void contadorprimos(int numerox, int &contador);
int main (){
    srand(time(NULL));

    int numerox, cantidad, contador=0;

    cout <<"Ingrese la cantidad de numeros: "; cin >>cantidad;

    for (int i=1; i<=cantidad; i++){
        numerox=numeroaleatorio(10000,1);
        cout <<"numero "<<i<< ": " <<numerox<<endl;
        contadorprimos(numerox, contador);
    }

    cout <<"Cantidad de numero primos: "<<contador<<endl;
    return 0;
}

int numeroaleatorio (int max, int min){
    return rand()%(max-min+1)+min;
}

void contadorprimos(int numerox, int &contador){
    int divisores=0;

    for (int i=1; i<=numerox; i++){
            if (numerox%i==0){
                divisores++;
            }
        }

        if (divisores == 2){
            contador++;
        }
}
