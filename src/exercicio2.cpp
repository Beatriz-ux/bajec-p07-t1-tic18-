#include<iostream>
#include<cmath>

int main()
{
    int n, mid_n, inv_n = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;
    mid_n = n;

    while(mid_n != 0)
    {
        inv_n = (inv_n * 10 + (mid_n % 10));
        mid_n = mid_n / 10;
        //std::cout << inv_n << std::endl;
    }

    std::cout << "O inverso de " << n << " e " << inv_n << std::endl;
    std::cout << (n == inv_n ? "O numero e um palindromo" : "O numero nao e um palindromo");

    return 0;
}