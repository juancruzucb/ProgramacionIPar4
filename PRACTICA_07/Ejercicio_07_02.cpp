// Materia: Programación I, Paralelo 4 
// Autor: Juan de León Cruz Cuyauri
// Fecha creación: 29/09/2026 
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
void imprimir (vector<double> voltios);

int main (){
    vector <double> voltios(9);
    cout <<"Ingresar los voltios: "; 
    for (int i=0; i<voltios.size();i++ ){
        cout <<"Ingresar el voltaje "<<i+1<<": "; cin >> voltios[i];
    }
    imprimir(voltios);
    

}

void imprimir (vector<double> voltios){
    int k=0;
    for (int j=1; j<=3; j++){
        cout<<"\n";
        for (int i=1;i<=3;i++){ 
            cout <<voltios[k]<<" ";
            k++;
        }
    }
}