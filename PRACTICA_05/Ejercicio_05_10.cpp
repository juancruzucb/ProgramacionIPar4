// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 09/09/2026 
// Número de ejercicio: 10

#include <iostream>
#include <ctime>

using namespace std;

int numeroaleatorio (int max, int min);
int pares(int numero);
int impares(int numero);
int mayorprimo(int numero, int primomayor);

int main (){
    srand(time(NULL));
    int cantidad, numerox, sumapares=0,sumaimpares=0, primomayor=0;

    cout<<"Ingrese la cantidad de numeros: "; cin >> cantidad;

    for (int i=1; i<=cantidad; i++){
        numerox=numeroaleatorio(1000,1);
        cout <<"Numero "<<i<<": "<<numerox<<endl;
        sumapares= sumapares+pares(numerox);
        sumaimpares= sumaimpares+impares(numerox);
        primomayor= mayorprimo(numerox, primomayor);
    }

    cout <<"\nSuma de los Pares: "<<sumapares<<endl;
    cout <<"Suma de los Impares: "<<sumaimpares<<endl;
    cout <<"Primo mayor: "<<primomayor<<endl;
    return 0;
}


int numeroaleatorio (int max, int min){
    return rand()%(max-min+1)+min;
}

int pares(int numero){

    if (numero%2==0){
        return numero;
    }
    else {
        return 0;
    }
}

int impares(int numero){

    if (numero%2!=0){
        return numero;
    }
    else {
        return 0;
    }
}

int mayorprimo(int numero, int primomayor){
    int divisores=0;
    for (int i=1 ; i <=numero; i++){

        if (numero%i==0){
            divisores++;
        }

        if (divisores==2){
            if (numero>primomayor){
                primomayor=numero;
            }
        
        }
    }

    return primomayor;
}