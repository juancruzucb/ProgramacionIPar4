// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 3
#include <iostream>
#include <vector>

using namespace std;

int suma(vector<int> calificaciones);
double promedio(vector<int> calificaciones);
void calculardesviacion(vector<int> calificaciones, vector<double>& desviacion, double promedio);
double varianza(vector<double> desviacion);

int main(){

    int n;

    vector<int> calificaciones;
    vector<double> desviacion;

    cout << "Ingrese la cantidad de calificaciones: "; cin >> n;

    for(int i=0; i < n; i++){
        int calificacion;
        cout << "Ingrese la calificacion: ";
        cin >> calificacion;

        calificaciones.push_back(calificacion);
    }

    int total = suma(calificaciones);
    double prom = promedio(calificaciones);

    calculardesviacion(calificaciones, desviacion, prom);

    double var = varianza(desviacion);

    cout << "\nSUMA TOTAL: " << total << endl;
    cout << "PROMEDIO: " << prom << endl;

    cout << "\nCALIFICACION\tDESVIACION" << endl;

    for(int i = 0; i < n; i++){

        cout << calificaciones[i] << "\t\t"
             << desviacion[i] << endl;
    }

    cout << "\nVARIANZA: " << var << endl;

    return 0;
}

int suma(vector<int> calificaciones){
    int total = 0;

    for(int i = 0; i < calificaciones.size(); i++){
        total = total + calificaciones[i];
    }

    return total;
}

double promedio(vector<int> calificaciones){
    int total = suma(calificaciones);
    return (double)total / calificaciones.size();
}

void calculardesviacion(vector<int> calificaciones, vector<double>& desviacion, double promedio){
    for(int i = 0; i < calificaciones.size(); i++){

        desviacion.push_back(calificaciones[i] - promedio);
    }
}

double varianza(vector<double> desviacion){

    double total = 0;
    for(int i = 0; i < desviacion.size(); i++){

        total = total + desviacion[i] * desviacion[i];
    }
    return total / desviacion.size();
}