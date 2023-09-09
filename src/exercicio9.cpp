#include <iostream>

using namespace std;

int main(){
    int num, i, soma = 0;

    cout << "Digite um inteiro: ";
    cin >> num;

    num = abs(num);
    for (i=1;i<=num/2;i++){
        if(num%i == 0)
            soma+=i; 
    }

    if (soma==num)
        cout << num << " eh um numero perfeito.\n";
    else
        cout << num << " nao eh um numero perfeito.\n";

    return 0;
}