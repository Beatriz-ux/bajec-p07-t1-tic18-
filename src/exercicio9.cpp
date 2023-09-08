#include <iostream>
using namespace std;
int main(void)
{
    int num,divisores;
    cout << "Digite um numero: ";
    cin >> num;
    num == 0 ? divisores = 0 : divisores = 1;
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            divisores+=i;
        }
    }
    (divisores==num) ? cout << num << " eh perfeito" << endl : cout << num << " nao eh perfeito" << endl;
    return 0;
}