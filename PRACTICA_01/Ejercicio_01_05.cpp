// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){

    int dia;
    cout <<"Ingrese un numero entre el 1 y el 7: "; cin >>dia;

    switch (dia)
    {
    case 1:
        cout<<"Lunes"<<endl;
        break;

    case 2:
        cout<<"Martes"<<endl;
        break;
        
    case 3:
        cout<<"Miercoles"<<endl;
        break;

    case 4:
        cout<<"Jueves"<<endl;
        break;

    case 5:
        cout<<"Viernes"<<endl;
        break;

    case 6:
        cout<<"Sabado"<<endl;
        break;

    case 7:
        cout<<"Domingo"<<endl;
        break;
    
    default:
        cout<<"Error!!!"<<endl;
        break;
    }

    return 0;
}