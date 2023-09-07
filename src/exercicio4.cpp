#include <iostream>
using namespace std;
int main(void)
{
    bool primo;
    cout << "Numeros primos entre 1 e 100:" << endl;
    cout << "2" << endl;
    for (int i = 3; i <= 100; i++)
    {
        primo = false;
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
               primo=true;
               break;
            }
        }
        !(primo)?cout << i << endl:cout << "";

    }

    return 0;
}