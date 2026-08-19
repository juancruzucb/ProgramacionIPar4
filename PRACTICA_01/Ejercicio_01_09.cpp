// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;

int main() {
    int N, d;

    cout << "Ingrese un numero positivo: "; cin >> N;

    while (N > 0) {
        d = N % 10;  

        cout << "\n";

        for (int i = 1; i <= d; i++) {
            for (int j = 1; j <= d; j++) {
                cout << "o";
            }
            cout << endl;
        }

        N = N / 10;  
    }

    return 0;
}