// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuyauri
// Carrera: Ingeniería Mecatronica
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main (){
    int numero=0;
    int digito=0;
    int suma=0;
    int cantidad=0;
    cout <<"Ingrese un numero positivo: "; cin >>numero;
    while (numero !=0){
        digito=numero%10;
        suma=suma+digito;
        numero=numero/10;
        cantidad++;
    }
    cout <<"\nEl numero contiene: "<<cantidad<<" digitos"<<endl;
    cout <<"la suma de sus digitos es: "<<suma<<endl;


}