#include <iostream>

using namespace std;

int main(){
    int num, i, countD, digito, aux, pot;
    int soma = 0;

    cout << "Digite um inteiro: ";
    cin >> num;
    num = abs(num);
    aux = num;

    // descobrindo quantidade de digitos
    for(countD = 1; aux/10>0; countD++, aux/=10);

    aux = num;
    while(aux>0){
        digito = aux%10;
        pot = digito;
        aux /= 10;
        for(i=1; i<countD; i++)
            digito *= pot;
        soma += digito;
    }

    if(soma == num)
        cout << num <<" eh um numero armstrong.\n";
    else
        cout << num <<" nao eh um numero armstrong.\n";

}