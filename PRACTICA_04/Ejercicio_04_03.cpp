// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

float volumen(int radio, int altura);

int main (){
    int radio,altura;
    cout<<"VOLUMEN DE UN CILINDRO"<<endl;
    cout<<"Ingrese el radio del cilindro: "; cin>>radio;
    cout<<"Ingrese la altura del cilindro: "; cin>>altura;
    cout<<"\nEl volumen del cilindro es: "<<volumen(radio,altura)<<endl;
    
    return 0;
}

float volumen(int radio, int altura){
    const float pi = 3.1416;
    return pi*radio*radio*altura;



}