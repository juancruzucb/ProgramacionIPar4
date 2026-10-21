// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 20/10/2026 
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
double Aleatorio(int max, int min);
void llenar(vector <double> &precios);
void ordenas (vector <double> &precios);
void imprimir(vector<double> precios);
void barato (vector <double> precios);
void Caro (vector <double> precios);
void mediana (vector <double> precios);

int main (){
    srand(time (0));

    vector <double> precios;
    llenar(precios);
    for(int i=0; i<precios.size(); i++){
        cout << precios[i] << " Bs" << endl;
    }
    ordenas (precios);
    imprimir(precios);
    barato (precios);
    Caro (precios);
    mediana (precios);
    return 0;
}

double Aleatorio(int max, int min){
    float decimal = rand() % (99-0+1)+0;
    float entero = rand() % (max-min+1)+min;
    float numero= (entero)+((decimal)/100);
    if (numero >max){
        numero = max;
    }

    return numero;
}


void llenar(vector <double> &precios){
    int n;
    float numero;
    cout <<"Ingrese el numero de productos: "; cin >> n;
    for (int i=0; i<n; i++){
        precios.push_back(Aleatorio(100,0));
    }
}


void ordenas (vector <double> &precios){
    double aux;
    int menor;

    for (int i=0 ; i<precios.size();i++){
        menor = i;
        for(int j= i+1; j<precios.size(); j++){
            if (precios[j]<precios[menor]){
                menor = j;
            }
        }
    aux=precios[i];
    precios[i]=precios[menor];
    precios[menor]=aux;

    }
}

void imprimir(vector<double> precios){
    cout <<"Productos Ahora: "<<endl;
    for(int i=0; i<precios.size(); i++){
        cout << precios[i] << " Bs" << endl;
    }
}

void barato (vector <double> precios){
    cout <<"El producto mas barato es: "<<precios[0]<<" Bs"<<endl;
}
void Caro (vector <double> precios){
    cout <<"El producto mas caro es: "<<precios[precios.size()-1]<<" Bs"<<endl;
}


void mediana (vector <double> precios){
    int n = precios.size();
    if (n%2==1){
        cout <<"La mediana es: "<<precios[n/2]<<endl;
    }
    else {
        cout <<"La mediana es: "<<(precios[n/2]+precios[(n/2)-1])/2.00<<endl;
    }
}



