// Materia: Programación I, Paralelo 4
// Autor: Juan de León Cruz Cuayauri
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 01/09/2026

#include <iostream>
using namespace std;

float promedio(float n1, float n2, float n3);
float calcularnotafinal(float promedio, float examen);
bool notavalida(float nota);
bool puededarexamen(float n1, float n2, float n3);

int main(){

    int N;
    int aprobados = 0, reprobados = 0;
    float sumat = 0;


    float parcial1, parcial2, parcial3, examen;

    float prom, final;

    cout << "Ingrese la cantidad de estudiantes: "; cin >> N;

    for(int i = 1; i <= N; i++){

        do{

            cout << "\nESTUDIANTE " << i << endl;

            cout << "Ingrese la nota del parcial 1: "; cin >> parcial1;

            cout << "Ingrese la nota del parcial 2: "; cin >> parcial2;
            cout << "Ingrese la nota del parcial 3: "; cin >> parcial3;

            if(notavalida(parcial1) == false || notavalida(parcial2) == false || notavalida(parcial3) == false){

                cout << "ERROR! Las notas deben estar entre 0 y 100" << endl;
            }

        }while(notavalida(parcial1) == false || notavalida(parcial2) == false || notavalida(parcial3) == false);

        if(puededarexamen(parcial1, parcial2, parcial3) == true){

            do{
                cout << "Ingrese nota examen final: "; cin >> examen;
                if(notavalida(examen) == false){
                    cout << "ERROR: La nota debe estar entre 0 y 100." << endl;
                }
            }while(notavalida(examen) == false);


            prom = promedio(parcial1, parcial2, parcial3);

            final = calcularnotafinal(prom, examen);


            cout << "\n---RESULTADOS---" <<endl;

            cout << "Parcial 1: " << parcial1 <<endl;
            cout << "Parcial 2: " << parcial2 << endl;
            cout << "Parcial 3: " << parcial3 <<endl;
            cout << "Examen final: " << examen <<endl;
            cout << "Nota final: " << final <<endl;

            if(final >= 51){
                cout << "ESTADO: APROBADO" << endl;
                aprobados++;

            }
            else{
                cout << "ESTADO: REPROBADO" << endl;
                reprobados++;
            }
            sumat += final;

        }
        
        else{

            cout << "\nEl estudiante NO puede dar el examen final" << endl;
            cout << "ESTADO: REPROBADO" << endl;
            reprobados++;

            cout << "\n---RESULTADOS---" <<endl;

            cout << "Parcial 1: " << parcial1 <<endl;
            cout << "Parcial 2: " << parcial2 << endl;
            cout << "Parcial 3: " << parcial3 <<endl;
            cout << "Examen final: Nota insuficiente"<<endl;
            cout << "Nota final: Nota insuficiente "<<endl;

            
        }
    }



    cout <<"\n====RESULTADOS GENERALES====" <<endl;

    cout <<"\nAlumnos aprobados: " << aprobados << endl;
    cout <<"Alumnos reprobados: " << reprobados << endl;
    cout <<"Porcentaje aprobados: "<< (aprobados * 100.0) / N << "%" << endl;

    cout << "Porcentaje reprobados: "<< (reprobados * 100.0) / N << "%" << endl;
    cout <<"Promedio de notas finales: "<< sumat / N << endl;

    return 0;
}


float promedio(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}


float calcularnotafinal(float promedio, float examen){
    return (promedio * 0.5) + (examen * 0.5);
}


bool notavalida(float nota){
    if(nota >= 0 && nota <= 100){
        return true;
    }
    else{
        return false;
    }
}


bool puededarexamen(float n1, float n2, float n3){

    if(n1 >= 60 && n2 >= 60 && n3 >= 60){
        return true;
    }
    else{
        return false;
    }
}
