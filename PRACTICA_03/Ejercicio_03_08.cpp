#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
    srand(time (NULL));

    int cantidad, precio, caro=0, barato=10001;
    float suma=0, sumaIVA=0, sumadescuentos=0;
    cout <<"==== LA ESTRELLA ===="<<endl;
    cout <<"Ingrese la cantidad de productos vendidos: "; cin >>cantidad;

    for (int i=1; i<=cantidad; i++){
        precio=(rand()%(10000-10+1)+10);

        suma+=precio;

        sumaIVA += (precio * 0.13);

        if (precio>2500){
            sumadescuentos = sumadescuentos + (precio * 0.05);
        }

        if (precio > caro){
            caro = precio;
        }

        if (precio < barato){
            barato = precio;
        }


        cout <<"Producto "<<i<<": "<<precio<<endl;

    }

    cout <<"\nSuma total de dinero: "<<suma-sumadescuentos<<endl;
    cout <<"Suma total del IVA: "<<sumaIVA<<endl;
    cout <<"Suma total de los descuentos: "<<sumadescuentos<<endl;
    cout <<"Producto mas caro: "<<caro<<endl;
    cout <<"Producto mas barato: "<<barato<<endl;




    return 0;
}