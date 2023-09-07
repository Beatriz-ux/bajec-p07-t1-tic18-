#include <iostream>

using namespace std;

int main(void){
    int n, n2, n3;

    cout << "Digite um numero: ";
    cin >> n;

    n2 = n;
    n3 = 0;

    while(n2 > 0){
        n3 = n3*10 + n2%10;
        n2 = n2/10;
    }

    if(n == n3)
        cout << "O numero " << n << " eh palindromo." << endl;
    else
        cout << "O numero " << n << " nao eh palindromo." << endl;

    return 0;
}