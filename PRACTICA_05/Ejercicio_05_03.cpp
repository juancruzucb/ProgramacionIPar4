// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri.
// Fecha creación: 07/09/2026 
// Número de ejercicio: 3

#include <iostream>

using namespace std;

float CalcularPrecioTotal (int precio, int &impuesto);

int main (){
    int precio, impuesto1;

    cout<<"Ingrese el valor del producto: "; cin >>precio;
    cout<<"Ingrese el impuesto por aplicar, si es desconocido ingrese 0: "; cin >>impuesto1;
    
    cout<<"\nValor Final del producto: "<<CalcularPrecioTotal (precio,impuesto1)<<endl;
    cout<<"Precio Incial: "<<precio<<endl;
    cout<<"Impuesto Aplicado: "<<impuesto1<<"%"<<endl;

}

float CalcularPrecioTotal (int precio, int &impuesto){
    if (impuesto <=0){
        impuesto=13;
    }
    return precio + (precio*(impuesto/100.0));
}