#include <iostream>
using namespace std;
int main(void)
{
    int fib;
    int a = 0, b = 1, c = 0, qtd = 0;
    cout << "Digite a quantidade de numeros para a sequencia de Fibonacci: " << endl;
    cin >> fib;
    while (qtd < fib)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
        qtd++;

    }

    return 0;
}