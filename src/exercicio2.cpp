#include <iostream>

using namespace std;

int main(){
    int numero, i, aux;
    bool pal = 1;

    cout << "Digite um inteiro: ";
    cin >> numero;

    aux = numero;
    for (i = 0; aux>0; i++, aux/=10);
    for (aux = 1, --i; i>0;aux*=10, i--); 

    while(numero>9){
        if (numero%10 != numero/aux){
            pal = false;
            break;
        }else{
            numero/=10;
            aux/=10;
            numero -= (numero/aux)*aux;
            aux/=10;
        }
    }
    cout << ((pal)? "O numero eh palindromo": "O numero nao eh palindromo") << endl;


    return 0;
}