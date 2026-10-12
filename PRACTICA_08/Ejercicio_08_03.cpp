// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool verificar(string tarjeta);

int main(){
    string tarjeta;
    bool valida;

    cout <<"Ingrese la tarjeta: "; getline(cin, tarjeta);

    valida = verificar(tarjeta);

    if (valida==1){
        cout <<"\nLa tarjeta es VALIDA!!!"<<endl;
    }
    else{
        cout <<"\nLa tarjeta NO es valida!!!"<<endl;
    }



    return 0;
}

bool verificar(string tarjeta){
    vector <int> numeros;
    int suma=0;

    if (tarjeta.size()!=16){
        return 0;
    }

    for (int i=0;i<16;i++){
        if (tarjeta[i]<'0' || tarjeta[i]>'9'){
            return 0;
        }
        numeros.push_back(tarjeta[i]-'0');
    }
    for (int i=14; i>=0; i=i-2){
        numeros[i]=numeros[i]*2;

        if (numeros[i]>  9){
            numeros[i]=numeros[i]-9;
        }
    }

    for (int i=0;i<16; i++){
        suma=suma+numeros[i];
    }

    if (suma%10==0){
        return 1;
    }
    
    else{


        return 0;
    }



}