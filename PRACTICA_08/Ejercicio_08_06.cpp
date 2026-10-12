// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 


#include <iostream>
#include <string>

using namespace std;

string corregir(string texto);
int main(){
    string texto;
    cout <<"Ingrese el texto: "; getline(cin, texto);
    texto = corregir(texto);

    cout <<"\nTexto corregido: "<<texto<<endl;
    return 0;
}

string corregir(string texto){

    string resultado="";

    for (int i=0; i<texto.size(); i++){
        if (texto[i]!=' '){
            resultado=resultado+texto[i];
        }
    }

    return resultado;
}