// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 13/09/2026 
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

void rellenarMatri(int matris[100][100], int rows, int cols);
void imprimirMatri(int matris[100][100], int rows, int cols);

int main (){
    srand (time (NULL));
    int matris [100][100];
    int rows,cols;

    cout <<"Ingrese el tamaño de las filas: "; cin>> rows;
    cout <<"Ingrese el tamaño de las columnas: "; cin>> cols;
    rellenarMatri(matris,rows,cols);
    imprimirMatri(matris,rows,cols);
    return 0;
}


int Aleatorio(int max, int min){
    return (rand()%(max-min+1)+min);
}

void rellenarMatri(int matris[100][100], int rows, int cols){
    int k=1;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            matris[i][j]=k;
            k++;
        }
        k=k-3;
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