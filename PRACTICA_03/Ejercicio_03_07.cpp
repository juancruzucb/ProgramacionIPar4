// Materia: Programación I, Paralelo 4
// Autor: Juan de Leon Cruz Cuyauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/08/2026}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numero, sumatotal=0;
    cout <<"Ingrese su numero: "; cin >>numero;

    for (int i=1; i<numero; i++){

        if (numero%i==0){
            sumatotal=sumatotal+i;
        }
    }

    cout <<"Suma total: "<<sumatotal<<endl; 

    if (sumatotal==numero){
        cout<<"\nEl numero "<<numero<<" es PERFECTOO!!"<<endl;
    }

    else {
        cout<<"\nEl numero "<<numero<<" NO es PERFECTOO!!"<<endl;
    }

    
    system ("pause");

    return 0;
}