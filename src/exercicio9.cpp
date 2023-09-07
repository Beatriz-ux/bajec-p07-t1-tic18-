#include<iostream>

int main()
{
    int n, perf = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;
    
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            //std::cout << i << std::endl;
            perf += i; 
        }
    }

    std::cout << ((perf == n && perf > 0) ? "O numero e perfeito": "O numero nao e perfeito") << std::endl;

    return 0;    
}