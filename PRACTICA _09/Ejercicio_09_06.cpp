// Materia: Programación I, Paralelo 4
 // Autor: Juan de Leon Cruz Cuyauri
 // Fecha creación: 13/10/2026
 // Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int Aleatorio(int max, int min);
void rellenarMatri(int temperaturas[4][7], int rows, int cols);
void imprimirMatri(int temperaturas[4][7], int rows, int cols);
void mayor(int temperaturas[4][7], int rows, int cols, int &mayor);
void promedio(int temperaturas[4][7], int rows, int cols);
int contarDias(int temperaturas[4][7], int rows, int cols);

int main(){
    srand(time(NULL));

    int temperaturas[4][7];
    int mayorn = 0;

    rellenarMatri(temperaturas, 4, 7);
    cout <<"\nTemperaturas  del mes:\n";
    imprimirMatri(temperaturas, 4, 7);

    mayor(temperaturas, 4, 7, mayorn);
    
    cout <<"\nPromedio de las temperaturs por semana:\n";
    promedio(temperaturas, 4, 7);

    cout <<"\nDias con temperatura mayor a 30 grados: ";
    cout <<contarDias(temperaturas, 4, 7)<<endl;

    return 0;
}

int Aleatorio(int max, int min){
    return (rand()%(max-min+1)+min);
}

void rellenarMatri(int temperaturas[4][7], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            temperaturas[i][j] = Aleatorio(35, 5);
        }
    }
}

void imprimirMatri(int temperaturas[4][7], int rows, int cols){
    for (int i = 0; i < rows; i++){
        cout << "Semana " << i+1 << ": ";

        for (int j = 0; j < cols; j++){
            cout << temperaturas[i][j] << "\t";
        }

        cout << endl;
    }
}
void mayor(int temperaturas[4][7], int rows, int cols, int &mayor){
    int fila = 0, columna = 0;
    mayor = temperaturas[0][0];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (temperaturas[i][j] > mayor){
                mayor = temperaturas[i][j];
                fila=i;
                columna=j;
            }
        }
    }
    cout << "Temperatura maxima: " << mayor << " grados C" << endl;
    cout << "Semana: " << fila+1 << endl;
    cout << "Dia: " << columna+1 << endl;
}


void promedio(int temperaturas[4][7], int rows, int cols){
    int suma= 0;
    float prome;
    for (int i=0; i<rows; i++){
        suma=0;
        for (int j=0; j<cols;j++){
            suma=suma+temperaturas[i][j];
        }
        prome =(float)suma / cols;

        cout <<"Semana "<<i+1<<": "<<prome<<" grados C"<<endl;
    }
}

int contarDias(int temperaturas[4][7], int rows, int cols){
    int contador=0;
    for (int i=0; i<rows;i++){
        for (int j = 0; j < cols; j++){
            if (temperaturas[i][j] > 30){
                contador++;
            }
        }
    }

    return contador;
}