#include <iostream>

using namespace std;

int main(void){
    int n;
    int soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            soma += i;
        }
    }

    if(soma == n)
        cout << "O numero " << n << " e perfeito." << endl;
    else
        cout << "O numero " << n << " nao e perfeito." << endl;

    return 0;
}