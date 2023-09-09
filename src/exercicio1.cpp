#include <iostream>

#include <iostream>
using namespace std;
int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
        if (!(i % 3))
        {
            cout << "Fizz";
        }
        if (!(i % 5))
        {
            cout << "Buzz";
        }
        cout << endl;
    }
    return 0;
}
