// Materia: Programación I, Paralelo 4 
// Autor: Juan de Leon Cruz Cuyauri
// Fecha creación: 30/09/2026 

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
bool seguro(string contraseña);

int main(){
    string contraseña;
    bool seguridad=0; 
    cout <<"Ingrese Contraseña: "; getline(cin,contraseña);
    seguridad = seguro(contraseña);
    if (seguridad==1){
        cout <<"Su contraseña es SEGURA!!!"<<endl;
    }
    else{
        cout <<"Su contraseña NO es SEGURA!!!"<<endl;
    }



    return 0;

}


bool seguro(string contraseña){
    bool verificado=1;
    bool mayuscula=0;
    bool minuscula=0;
    bool numero=0;
    bool caracter=0;
    
    for (int i=0; i<contraseña.size()&& verificado==1; i++){
        if ((contraseña [i]>=32&&contraseña [i]<=47)||(contraseña [i]>=58&&contraseña [i]<=64)||(contraseña [i]>=91&&contraseña [i]<=96)||(contraseña [i]>=123&&contraseña [i]<=126)){
            caracter=1;
        }
        else if (contraseña [i]>=48&&contraseña [i]<=57){
            numero=1;
        }

        else if (contraseña [i]>='A'&&contraseña [i]<='Z'){
            mayuscula=1;
        }
        else if (contraseña [i]>='a'&&contraseña [i]<='z'){
            minuscula=1;
        }
        else{
            verificado =0;
        }
    }
    if (verificado==1 && caracter == 1&& mayuscula == 1&& minuscula == 1 && numero==1 && contraseña.size()>=8){
        return 1;
    }
    
    else {
        return 0;
    }
}

