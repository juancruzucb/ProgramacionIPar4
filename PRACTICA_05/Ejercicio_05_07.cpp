// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 08/09/2026 
// Número de ejercicio: 7

#include <iostream>
#include <ctime>


using namespace std;
int caracruz(int max, int min);
void contador (int contador, int &cara, int &cruz);
void porcentajes(int cara, int cruz, float &porcentajecara, float &porcentajecruz , int intentos);

int main (){
    srand(time(NULL));
    int intentos, cara=0, cruz=0;
    float porcentajecara, porcentajecruz;

    cout <<"Ingrese el numero de tiros: "; cin >>intentos;

    for (int i=1; i<=intentos; i++){
        contador (caracruz(2,1), cara, cruz);
        }

    porcentajes(cara, cruz, porcentajecara, porcentajecruz ,intentos);

    cout <<"Porcentaje de caras: "<<porcentajecara<<"%"<<endl;
    cout <<"Porcentaje de cruz: "<<porcentajecruz<<"%"<<endl;

    return 0;

}

int caracruz(int max, int min){
    return (rand()%(max-min+1)+min);
}
void contador (int contador, int &cara, int &cruz){

    if (contador==1){
        cara++;
    }
    else{
        cruz++;
    }

}

void porcentajes(int cara, int cruz, float &porcentajecara, float &porcentajecruz , int intentos){
    porcentajecara = (cara * 100.0) / intentos;
    porcentajecruz = (cruz * 100.0) / intentos;


}
