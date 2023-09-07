#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int matc, i; 
    float notas[3], media=0;
    char continuar = 1;

    cout << fixed << setprecision(2);
    do{
        cout << "Digite matricula do aluno: ";
        cin >> matc;

        for(i=0; i<3; i++){
            cout << "Nota" << i+1 << " = ";
            cin >> notas[i];
            media+=notas[i];
        }

        cout << "\nMATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA\n";
        cout << "===========================================\n";
        cout << setw(8)<< matc << "\t" << notas[0] << "\t" << notas[1] << "\t" << notas[2] << "\t" << media/3 << "\n\n";  
        media = 0;

        cout << "Deseja cadastrar outro aluno (S/N)? ";
        cin >> continuar;
        continuar = (tolower(continuar) == 's')? 1 : 0;
    }while(continuar);


    return 0;
}