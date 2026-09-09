// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 08/09/2026 
// Número de ejercicio: 8

#include <iostream>
#include <ctime>

using namespace std;

int numeroaleatorio(int max, int min);
int factorial (int numero);
int main (){
    srand(time(0));

    int numero = numeroaleatorio(10,1);
    cout<<"Numero aleatorio: "<<numero<<endl;

    cout <<"Factorial de "<<numero<<": "<<factorial(numero);

    return 0;
}

int numeroaleatorio(int max, int min){
    return (rand()%(max-min+1)+min);
}

int factorial (int numero){
    int multitotal=1;
    for (int i=1; i <=numero; i++){
        multitotal = multitotal*i;
    }
     
    return multitotal;
}