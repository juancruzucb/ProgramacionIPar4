// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 1 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int numeroaleatorio(int max, int min);
double numeroaleatoriodecimal(int max, int min, int entero);
char caracteres();

void imprimirvoltaje(vector<double> lista);
void imprimirtemperaturas(vector<double> lista);
void imprimiralfanumericos(vector<char> lista);
void imprimiraños(vector<int> lista);
void imprimirvelocidades(vector<double> lista);
void imprimirdistancias(vector<double> lista);


int main(){

    system("cls");

    vector <double> voltajes;
    vector <double> temperaturas;
    vector <char> alfanumericos;
    vector <int> años;
    vector <double> velocidades;
    vector <double> distancias;

    srand(time(0));

    for(int i = 0; i < 100; i++){
        voltajes.push_back(numeroaleatoriodecimal(99, 0, numeroaleatorio(220, 20)));
    }

    for(int i = 0; i < 50; i++){
        temperaturas.push_back(numeroaleatoriodecimal(99, 0, numeroaleatorio(100, 0)));
    }

    for(int i = 0; i < 30; i++){
        alfanumericos.push_back(caracteres());
    }

    for(int i = 0; i < 100; i++){
        años.push_back(numeroaleatorio(2025, 1990));
    }

    for(int i = 0; i < 32; i++){
        velocidades.push_back(numeroaleatoriodecimal(99, 0, numeroaleatorio(300, 10)));
    }

    for(int i = 0; i < 1000; i++){
        distancias.push_back(numeroaleatoriodecimal(99, 0, numeroaleatorio(1000, 1)));
    }

    imprimirvoltaje(voltajes);
    imprimirtemperaturas(temperaturas);
    imprimiralfanumericos(alfanumericos);
    imprimiraños(años);
    imprimirvelocidades(velocidades);
    imprimirdistancias (distancias);

    return 0;
}

int numeroaleatorio(int max, int min){

    return rand() % (max - min + 1) + min;
}

double numeroaleatoriodecimal(int max, int min, int entero){

    return entero + ((rand() % (max - min + 1) + min) / 100.0);
}

char caracteres(){

    int tipo = numeroaleatorio(2, 0);

    if(tipo == 0){
        return 'A' + numeroaleatorio(25, 0);
    }
    else if(tipo == 1){
        return 'a' + numeroaleatorio(25, 0);
    }
    else{
        return '0' + numeroaleatorio(9, 0);
    }
}

void imprimirvoltaje(vector<double> lista){
    cout <<"\nLISTA DE VOLTAJES"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }

}

void imprimirtemperaturas(vector<double> lista){ 
    cout <<"\nLISTA DE TEMPERATURAS"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }
}

void imprimiralfanumericos(vector<char> lista){ 
    cout <<"\nLISTA DE CARACTERES"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }
}


void imprimiraños(vector<int> lista){ 
    cout <<"\nLISTA DE AÑOS"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }
}

void imprimirvelocidades(vector<double> lista){ 
    cout <<"\nLISTA DE VELOCIDADES"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }
}

void imprimirdistancias(vector<double> lista){ 
    cout <<"\nLISTA DE DISTANCIAS"<<endl;
    for (int i=0; i<lista.size(); i++ ){
        cout <<i+1<<". "<<lista[i]<<endl;
    }
}