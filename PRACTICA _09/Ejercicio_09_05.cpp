// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 13/09/2026 
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void comprar(int matris[5][5]);
void imprimirMatri(int matris[5][5]);
void estadisticas (int matris [5][5]);

int main (){
    int matris [5][5]={0};
    int opciones;

    do {
        cout <<"\nSALA VIP CINE"<<endl;
        cout <<"Menu de opciones: "<<endl;
        cout <<"\n1. Mostrar la sala"<<endl;
        cout <<"2. Comprar entradas"<<endl;
        cout <<"3. Estadisticas"<<endl; 
        cout <<"0. Salir"<<endl; 
        cout <<"\nSELECCIONAR OPCION: "; cin >>opciones  ;
        
        switch (opciones){
        case 1:
            cout <<"\n\t---ASIENTOS---"<<endl;
            imprimirMatri(matris);
            system ("pause");
            break;
        
        case 2:
            cout <<"\n\t---COMPRAR ENTRADAS---"<<endl;
            comprar(matris);
            system ("pause");
            break;

        case 3:
            cout <<"\n\t---ESTADISTICAS---"<<endl;
            estadisticas(matris);
            system ("pause");
            break;
        case 0:
            cout <<"Gracias vuelva pronto!!!"<<endl;
            break;

        default:
            cout <<"INVALIDO!!!"<<endl;
            break;
        }
    }while (opciones!=0);
    
    return 0;
}



void imprimirMatri(int matris[5][5]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (matris[i][j]<=0){
                cout <<"L\t";
            }
            else {
                cout <<"O\t";
            }
        }
        cout <<endl;
    }
}

void comprar(int matris[5][5]){
    int fila, columna;
    imprimirMatri(matris);
    cout <<"Fila del asiento: "; cin >>fila;
    cout <<"Lugar del asiento: "; cin >>columna;

    if (matris[fila-1][columna-1]==1){
        cout <<"Asiento no disponible"<<endl;
    }
    else {
        matris [fila-1][columna-1]=1;
        cout <<"Reserva exitosa!!!"<<endl;
    }
}

void estadisticas (int matris [5][5]){
    double libre=0,ocupado=0;

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (matris[i][j]==0){
                libre++;
            }
            else {
                ocupado++;
            }
        }
    }

    cout <<"Asientos libres: "<<((libre/25)*100)<<"%"<<endl;
    cout <<"Asientos Ocupados: "<<((ocupado/25)*100)<<"%"<<endl;
}
