#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool plagio(string oracionA, string oracionB);

int main(){

    string oracionA, oracionB;
    bool resultado;
    cout <<"Ingrese la oracion A: "; getline(cin, oracionA);

    cout <<"Ingrese la oracion B: "; getline(cin, oracionB);

    resultado = plagio(oracionA, oracionB);

    if (resultado==1){
        cout <<"\nAlerta de plagio: Verdadero"<<endl;
    }
    else{
        cout <<"\nAlerta de plagio: Falso"<<endl;
    }

    return 0;
}

bool plagio(string oracionA, string oracionB){

    vector <string> palabrasA;
    vector <string> palabrasB;

    string palabra="";
    int coincidencias=0;

    for (int i=0;i<oracionA.size();i++){
        if (oracionA[i]!=' '){
            palabra=palabra+oracionA[i];
        }
        else{
            if (palabra!=""){
                palabrasA.push_back(palabra);
            }
            palabra="";
        }
    }

    if (palabra!=""){
        palabrasA.push_back(palabra);
    }

    palabra="";

    for (int i=0;i<oracionB.size();i++){
        if (oracionB[i]!=' '){
            palabra=palabra+oracionB[i];
        }
        else{
            if (palabra!=""){
                palabrasB.push_back(palabra);
            }
            palabra="";
        }
    }

    if (palabra!=""){
        palabrasB.push_back(palabra);
    }

    for (int i=0;i<palabrasA.size();i++){
        for (int j=0; j<palabrasB.size();j++){
            if (palabrasA[i]==palabrasB[j]){
                coincidencias++;
                break;
            }
        }
    }
    if (coincidencias>3){
        return true;
    }
    else{
        return false;
    }
}