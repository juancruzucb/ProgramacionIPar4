
#include <iostream>
#include <vector>
#include <string>

using namespace std;
void buscar(vector <string> contactos, string prefijo);

int main(){
    vector <string> contactos;
    string prefijo;

    contactos.push_back("Marcelo");
    contactos.push_back("Maria");
    contactos.push_back("Martin");
    contactos.push_back("Juan");
    contactos.push_back("Marcos");

    cout <<"Ingrese el prefijo: "; getline(cin, prefijo);

    buscar(contactos, prefijo);

    return 0;
}

void buscar(vector <string> contactos, string prefijo){
    string nombre;
    string inicio;
    bool encontrado=0;
    for (int i=0; i<contactos.size(); i++){
        nombre=contactos[i];
        inicio=nombre.substr(0, prefijo.size());

        for (int j=0; j<inicio.size(); j++){
            if (inicio[j]>='A' && inicio[j]<='Z'){
                inicio[j]=inicio[j]+32;
            }
        }
        for (int j=0; j<prefijo.size(); j++){
            if (prefijo[j]>='A' && prefijo[j]<='Z'){
                prefijo[j]=prefijo[j]+32;
            }
        }
        if (inicio==prefijo){
            if (encontrado==1){
                cout <<", ";
            }
            cout <<nombre;
            encontrado=1;
        }
    }
    if (encontrado==0){
        cout <<"No se encontraron contactos.";
    }
    else{
        cout <<endl;
    }
}