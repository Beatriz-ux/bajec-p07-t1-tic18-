#include <iostream>
using namespace std;
int main(void)
{
    int altura;
    char letra=65;
    cout << "Digite a altura da arvore: ";
    cin >> altura;
    for(int i = 0; i < altura; i++){
        for(int j = 0; j < (i+1); j++){
            cout<<letra;
            letra++;
            if(letra == 91){
                letra = 65;
            }
        }
        cout<<endl;
    }
    return 0;
}