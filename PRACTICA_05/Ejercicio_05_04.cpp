// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 07/09/2026 
// Número de ejercicio: 4

#include <iostream>

using namespace std;

double CalcularArea (double lado);
double CalcularArea (double base, double altura);
float CalcularArea (float radio, float PI);

int main (){
    double base, altura, lado;
    float radio, PI=3.1416;

    cout<<"Ingrese el lado del cuadrado: "; cin >>lado;
    cout<<"Ingrese la altura del rectangulo: "; cin >>altura;
    cout<<"Ingrese la base del rectangulo: "; cin >>base;
    cout<<"Ingrese el radio del circulo: "; cin >>radio;

    cout<<"\n====AREAS==="<<endl;
    cout<<"Area de cuadrado: "<<CalcularArea(lado)<<endl;
    cout<<"Area del rectangulo: "<<CalcularArea(base,altura)<<endl;
    cout<<"Area del circulo: "<<CalcularArea(radio, PI)<<endl;

    return 0;
}

double CalcularArea (double lado){
    return lado*lado;
}

double CalcularArea (double base, double altura){
    return base*altura;
}

float CalcularArea (float radio, float PI){
    return radio*radio*PI;

}