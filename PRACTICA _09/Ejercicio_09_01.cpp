// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 13/09/2026 
// Número de ejercicio: 1  

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int Aleatorio(int max, int min);
void rellenarMatri(int matris[100][100], int rows, int cols);
void imprimirMatri(int matris[100][100], int rows, int cols);
void imprimirMatriinvertida(int matris[100][100], int rows, int cols);

int main (){
    srand (time (NULL));
    int matris [100][100];
    int rows,cols;

    cout <<"Ingrese el tamaño de las filas: "; cin>> rows;
    cout <<"Ingrese el tamaño de las columnas: "; cin>> cols;
    rellenarMatri(matris,rows,cols);
    imprimirMatri(matris,rows,cols);
    imprimirMatriinvertida(matris,rows, cols);
    return 0;
}


int Aleatorio(int max, int min){
    return (rand()%(max-min+1)+min);
}

void rellenarMatri(int matris[100][100], int rows, int cols){
    int max,min;
    cout <<"Ingrese el maximo de los numeros: "; cin>> max;
    cout <<"Ingrese el minimo de los numeros: "; cin>> min;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            matris[i][j]=Aleatorio(max, min);
        }
    }
}

void imprimirMatri(int matris[100][100], int rows, int cols){
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout <<matris[i][j]<<"\t";
        }
        cout <<endl;
    }
}

void imprimirMatriinvertida(int matris[100][100], int rows, int cols){
    vector <int> temp1;
    int fila1=0, ultifila=rows-1;

    for (int j=0; j<cols; j++){
        temp1.push_back(matris[fila1][j]);
    }

    for (int j=0; j<cols; j++){
        matris[fila1][j]=matris[ultifila][j];
    }

    for (int j=0; j<cols; j++){
        matris[ultifila][j]=temp1[j];
    }
    cout <<"\n"<<endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout <<matris[i][j]<<"\t";
        }
        cout <<endl;
    }
}