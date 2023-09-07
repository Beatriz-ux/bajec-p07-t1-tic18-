#include <iostream>
using namespace std;
int main(void)
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    num == 0 ? cout << "" << endl : cout << "1 eh divisor de " << num << endl;
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            cout << i << " eh divisor de " << num << endl;
        }
    }
    cout << num << " eh divisor de " << num << endl;
    return 0;
}