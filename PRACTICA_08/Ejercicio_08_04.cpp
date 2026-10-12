// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void censurar(string &mensaje, vector <string> prohibidas);

int main(){

    string mensaje;
    vector <string> prohibidas;
    prohibidas.push_back("manco");
    prohibidas.push_back("tonto");
    prohibidas.push_back("noob");

    cout <<"Chat: ";
    getline(cin, mensaje);
    censurar(mensaje, prohibidas);

    cout <<"\nJugador1: "<<mensaje<<endl;

    return 0;
}

void censurar(string &mensaje, vector <string> prohibidas){

    for (int i=0; i<prohibidas.size(); i++){
        for (int j=0; j<mensaje.size(); j++){

            if (mensaje.substr(j, prohibidas[i].size())==prohibidas[i]){
                mensaje.replace(j, prohibidas[i].size(), "***");
            }

        }
    }
}