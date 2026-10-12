// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void extraer(string texto, vector <string> &hashtags);

int main(){
    string texto;
    vector <string> hashtags;
    cout <<"Ingrese el texto: "; getline(cin, texto);

    extraer(texto, hashtags);

    cout <<"\nLista de hashtags: ";
    for (int i=0; i<hashtags.size(); i++){
        cout <<hashtags[i];

        if (i<hashtags.size()-1){
            cout <<", ";
        }
    }
    cout <<endl;
    return 0;
}

void extraer(string texto, vector <string> &hashtags){
    string palabra="";
    for (int i=0; i<texto.size(); i++){

        if (texto[i]!=' '){
            palabra=palabra+texto[i];
        }
        else{
            if (palabra[0]=='#'){
                hashtags.push_back(palabra);
            }
            palabra="";
        }
    }
    if (palabra!="" && palabra[0]=='#'){
        hashtags.push_back(palabra);
    }
}