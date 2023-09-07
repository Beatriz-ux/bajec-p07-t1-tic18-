#include <iostream>

using namespace std;

int main(void){

    int matricula;
    bool continuar = true;
    float nota1, nota2, nota3, media;

    while(continuar){
        cout << "Digite a matricula do aluno: ";
        cin >> matricula;
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        cout << "Digite a terceira nota: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA" << endl;
        cout << "==============================================" << endl;
        cout << matricula << "\t\t" << nota1 << "\t" << nota2 << "\t" << nota3 << "\t" << media << endl;
        cout << endl;

        cout << "Deseja continuar? (1 - Sim, 0 - Nao): ";
        cin >> continuar;
    }

    return 0;
}