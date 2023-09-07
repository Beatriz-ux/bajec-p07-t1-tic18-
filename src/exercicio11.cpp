#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int n, n1, soma, digitos;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    n1 = n;
    soma = 0;
    digitos = 0;

    while(n1 > 0){
        n1 /= 10;
        digitos++;
    }

    n1 = n;

    while(n1 > 0){
        soma += pow(n1 % 10, digitos);
        n1 /= 10;
    }

    if(soma == n)
        cout << n << " e um numero armstrong." << endl;
    else
        cout << n << " nao e um numero armstrong." << endl;

    return 0;
}