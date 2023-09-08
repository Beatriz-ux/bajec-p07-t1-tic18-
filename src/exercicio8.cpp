#include <iostream>
using namespace std;
int main(void)
{
    int altura;
    cout << "Digite a altura: ";
    cin >> altura;

    cout << "a)" << endl;
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "b)" << endl;

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "c)" << endl;
    for (int i = 0; i < altura; i++)
    {
        if (i == 0 || i == altura - 1)
        {
            for (int j = 0; j < altura; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < altura - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}