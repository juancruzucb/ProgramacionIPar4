// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 08/09/2026 
// Número de ejercicio: 6

#include <iostream>

using namespace std;

void agregarnota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main(){
    int cantidadnotas=0;
    double sumatotal=0,nuevanota;

    do {
        cout<<"Si desea salir ingrese un numero negativo"<<endl;
        cout<<"Ingrese la nota: "; cin >>nuevanota;
        if (nuevanota>0){
            agregarnota(sumatotal, cantidadnotas, nuevanota);

            cout<<"\nNota ingresada: "<<nuevanota<<endl;
            cout<<"Suma total de Notas: "<<sumatotal<<endl;
            cout<<"Cantidad de Notas: "<<cantidadnotas<<endl;
        }
    }while (nuevanota>0);

    cout<<"\nSuma total de Notas: "<<sumatotal<<endl;
    cout<<"Cantidad de Notas: "<<cantidadnotas<<endl;

    return 0;
}

void agregarnota(double &sumaTotal, int &cantidadNotas, double nuevaNota){
    sumaTotal=sumaTotal+nuevaNota;
    cantidadNotas++;
}