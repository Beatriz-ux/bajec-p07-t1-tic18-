#include <iostream>
using namespace std;
int main(void)
{
    srand(time(NULL));
    int num = rand() % 100 + 1, chute = 0, acertou = 0, tentativas = 0;

    while (acertou == 0)
    {
        cout << "Adivinhe um numero de 1 e 100: ";
        cin >> chute;
        if (chute == num)
        {
            cout << "Parabens, voce acertou!" << endl;
            acertou = 1;
        }
        else if (chute > num)
        {
            cout << "O numero eh menor que " << chute << endl;
        }
        else
        {
            cout << "O numero eh maior que " << chute << endl;
        }
        tentativas++;
        if (tentativas == 7)
        {
            cout << "Dica: Tente utilizar o metodo de busca binaria!!" << endl;
        }
    }

    return 0;
}