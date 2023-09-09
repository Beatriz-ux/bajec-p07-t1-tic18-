#include <iostream>
using namespace std;
int main(void)
{
    int num, invert=0 , aux;
    cout << "Digite um numero: ";
    cin >> num;
    aux=num;
    //14541
    do{
        invert = invert * 10 + aux % 10;
        aux = aux / 10;
    }while(aux != 0);

    if (num == invert)
        cout << "O numero " << num << " eh palindromo" << endl;
    else
        cout << "O numero " << num << " nao eh palindromo" << endl;
    
    return 0;
}