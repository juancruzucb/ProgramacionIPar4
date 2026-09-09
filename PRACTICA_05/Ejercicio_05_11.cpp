// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 09/09/2026 
// Número de ejercicio: 8

#include <iostream>
#include <ctime>

using namespace std;
int numeroaleatorio (int max, int min);

int main (){
    srand(time(NULL));
    int niños1, niños2, niños3, cantidad;

    cout<<"Ingrese la cantidad de niños: "; cin >>cantidad;

    niños1= numeroaleatorio(cantidad,0);
    niños2 = numeroaleatorio((cantidad-niños1),0);
    niños3= numeroaleatorio (cantidad-(niños1+niños2),0);

    cout<<"\nNiños de 1 año: "<<niños1<<endl;
    cout<<"Niños de 2 años: "<<niños2<<endl;
    cout<<"Niños de 3 años: "<<niños3<<endl;
    cout <<"\nCantidad de pañales usandos en el dia: "<<(niños1*6)+(niños2*3)+(niños3*2);

    return 0;
}


int numeroaleatorio (int max, int min){
    return rand()%(max-min+1)+min;
}


