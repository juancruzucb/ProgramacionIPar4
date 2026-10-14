// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 13/09/2026 
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int Aleatorio(int max, int min);
void rellenarMatri(int matris[100][100], int rows, int cols);
void imprimirMatri(int matris[100][100], int rows, int cols);
void buscarPuntoSilla(int matris[100][100], int rows, int cols);

int main(){
    srand(time(NULL));

    int matris[100][100];
    int rows, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> rows;

    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    rellenarMatri(matris, rows, cols);
    imprimirMatri(matris, rows, cols);
    buscarPuntoSilla(matris, rows, cols);

    return 0;
}

int Aleatorio(int max, int min){
    return rand() % (max-min+1)+min;
}

void rellenarMatri(int matris[100][100], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matris[i][j] = Aleatorio(10, 1);
        }
    }
}

void imprimirMatri(int matris[100][100], int rows, int cols){
    for (int i = 0;i<rows;i++){
        for (int j = 0; j < cols; j++){
            cout << matris[i][j] << "\t";
        }
        cout << endl;
    }
}

void buscarPuntoSilla(int matris[100][100], int rows, int cols){
    int menor, mayor;
    bool encontrado = false;

    for (int i = 0; i< rows; i++){
        menor = matris[i][0];
        for (int j = 1; j < cols; j++){
            if (matris[i][j]< menor){
                menor = matris[i][j];
            }
        }
        for (int j=0; j < cols; j++){
            if (matris[i][j]==menor){
                mayor=matris[0][j];

                for (int k=1; k<rows; k++){
                    if (matris[k][j] > mayor){
                        mayor=matris[k][j];
                    }
                }
                if (matris[i][j]==mayor){
                    cout << "\nPunto de silla encontrado." << endl;
                    cout << "Valor: " << matris[i][j] << endl;
                    cout << "Fila: " << i << endl;
                    cout << "Columna: " << j << endl;
                    encontrado = true;
                }
            }
        }
    }
    if (encontrado == false){
        cout << "\nNo se encontro ningun punto de silla." << endl;
    }
}