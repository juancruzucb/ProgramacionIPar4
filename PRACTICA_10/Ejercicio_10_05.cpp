// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;
void ordenar (string &palabra);
int main (){
    string palabra;
    cout <<"Ingrese su palabra: "; getline(cin,palabra);
    cout <<"Palabra original: "<<palabra<<endl;
    ordenar (palabra);
    cout <<"Palabra ordenada: "<<palabra<<endl;





    return 0;
}


void ordenar (string &palabra){
    char aux;

    for (int i=0; i<palabra.size()-1;i++){
        for (int j=0 ; j<palabra.size()-i-1; j++){
            if (palabra[j]>palabra[j+1]){
                aux=palabra[j];
                palabra[j]=palabra[j+1];
                palabra[j+1]=aux;
            }

        }
    }
}