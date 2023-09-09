#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int num, separa=0 , aux, dig=0;
    cout << "Digite um numero: ";
    cin >> num;
    aux=num;
    while(aux != 0)
    {
        dig++;
        aux = aux / 10;
    }
    aux=num;
    while(aux != 0)
    {
        separa = pow((aux % 10),dig) + separa;
        aux = aux / 10;
    }

    (separa == num) ? cout << "O numero " << num << " eh um numero de Armstrong" : cout << "O numero " << num << " nao eh um numero de Armstrong";

    
    
    return 0;
}