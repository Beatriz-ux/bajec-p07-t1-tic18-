#include <iostream>
using namespace std;
int main(void)
{
    double n1, n2, n3, media;
    long int matricula;
    cout<<fixed;
    cout.precision(1);

    do{
        cout << "Digite a matricula do aluno, caso queira encerrar digite 0: ";
        cin >> matricula;
        if(matricula == 0){
            break;
        }
        cout << "Digite a primeira nota: ";
        cin >> n1;
        cout << "Digite a segunda nota: ";
        cin >> n2;
        cout << "Digite a terceira nota: ";
        cin >> n3;
        media = (n1 + n2 + n3)/3;
        cout << "MATRICULA"<<"\t\tNOTA1"<<"\tNOTA2"<<"\tNOTA3"<<"\tMEDIA"<< endl;
        cout <<"=================================================================="<< endl;
        cout << matricula << "\t\t" << n1 << "\t" << n2 << "\t" << n3 << "\t" << media << endl;

    }while(matricula !=0);
    
    return 0;
}