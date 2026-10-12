// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int aleatorio(int max , int min);
void mostrarnombres(vector <string> nombres, vector <string> apellidos, vector <int> edades);

int main (){
    vector <string> nombres = {"Alejandro", "Camila", "Mateo", "Valentina", "Sebastián", "Daniela", "Nicolás", "Gabriela", "Leonardo", "Mariana"};
    vector <string> apellidos = {"Fernández", "Rodríguez", "Vargas", "Mendoza", "Morales", "Castillo", "Herrera", "Rojas", "Salazar", "Paredes"};
    vector <int> edades = {21, 19, 24, 18, 27, 22, 31, 20, 25, 29};
    int cantidad;
    srand(time(NULL));

    cout <<"Numero de personas: "; cin >>cantidad;

    for (int i=1; i<=cantidad; i++) {
    mostrarnombres(nombres, apellidos, edades);
    }
    return 0;
}


int aleatorio(int max , int min){
    return (rand()%(max-min+1)+min);
}

void mostrarnombres(vector <string> nombres1, vector <string> apellidos1, vector <int> edades1){
    cout <<"Nombre Completo: "<< nombres1[aleatorio(nombres1.size()-1,0)]<<" "<<apellidos1[aleatorio(apellidos1.size()-1,0)]<<"\tEdad: "<<edades1[aleatorio(edades1.size()-1,0)]<<endl;
}





