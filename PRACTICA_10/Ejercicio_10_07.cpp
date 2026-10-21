// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 14/10/2026 
// Número de ejercicio: 1 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int Aleatorio(int max, int min);
void llenarmatri(int matris [5][3]);
void imprimirtodo(int matris[5][3], vector <float> promedio, vector <string> nombres); 
void promedios (vector <float> &promedio, int matris [5][3]);
void ordenar(vector<string> &nombres, int matris[5][3], vector<float> &promedio);

int main (){
    srand(time(NULL));
    vector <string> estudiantes = {"Juan", "Pablo", "Nani", "Maria", "Ines"};
    int notas [5][3];
    vector <float> promedio;

    llenarmatri(notas);
    promedios (promedio, notas);
    cout <<"NOTAS SIN ORDENNAR"<<endl;
    imprimirtodo(notas, promedio, estudiantes);
    ordenar(estudiantes, notas, promedio);
    cout <<"NOTAS ORDENADA"<<endl;
    imprimirtodo(notas, promedio, estudiantes);



    return 0;
}

int Aleatorio(int max, int min){
    return rand()%(max-min+1)+min;
}

void llenarmatri(int matris [5][3]){
    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++){
            matris[i][j]=Aleatorio(100,1);
        }
    }
}

void imprimirtodo(int matris[5][3], vector <float> promedio, vector <string> nombres){
    cout <<"Nombre\tNota1\tNota2\tNota3\tPromedio: "<<endl;
    for (int i=0; i<5; i++){
        cout <<nombres[i];
        for (int j=0; j<3; j++){
            cout <<"\t "<<matris[i][j];
        }
        cout <<"\t"<<promedio[i]<<endl;
    }

}
void promedios (vector <float> &promedio, int matris [5][3]){
    float sumatotal=0;
        for (int j=0; j<5; j++){
            for (int k=0; k<3; k++){
                sumatotal=sumatotal + matris[j][k];
            }
            promedio.push_back(sumatotal/3);
            sumatotal=0;
        }
}


void ordenar(vector<string> &nombres, int matris[5][3], vector<float> &promedio){
    string aux;
    int auxv[3];
    float auxp;

    for(int i = 0; i < nombres.size() - 1; i++){
        for(int j = 0; j < nombres.size() - 1 - i; j++){

            if(nombres[j] > nombres[j + 1]){
                // Intercambiar nombres
                aux = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = aux;

                // Intercambiar las tres notas
                for(int l = 0; l < 3; l++){
                    auxv[l] = matris[j][l];
                    matris[j][l] = matris[j + 1][l];
                    matris[j + 1][l] = auxv[l];
                }

                // Intercambiar promedios
                auxp = promedio[j];
                promedio[j] = promedio[j + 1];
                promedio[j + 1] = auxp;
            }
        }
    }
}





