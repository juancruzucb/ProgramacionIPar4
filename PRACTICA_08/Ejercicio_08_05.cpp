// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <string>

using namespace std;

void separar(string url);

int main(){

    string url;

    cout <<"Ingrese la URL: "; getline(cin, url);
    separar(url);

    return 0;
}

void separar(string url){

    int posicion1, posicion2;

    posicion1 = url.find("://");
    posicion2 = url.find("/", posicion1+3);

    string protocolo = url.substr(0, posicion1);
    string dominio = url.substr(posicion1+3, posicion2-posicion1-3);
    string ruta = url.substr(posicion2);

    cout <<"\nProtocolo: "<<protocolo<<endl;
    cout <<"Dominio: "<<dominio<<endl;
    cout <<"Ruta: "<<ruta<<endl;
}