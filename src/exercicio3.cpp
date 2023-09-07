#include<iostream>

int main()
{
    int n;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;
    std::cout << "Sao divisores de " << n << ": " << std::endl;
    
    if(n > 0)
        std::cout << 1 << std::endl;

    for(int i = 2; i <= n/2; i++)
        n % i == 0 ? (std::cout << i << std::endl) : (std::cout << ""); 

    if(n > 1)
        std::cout << n << std::endl;


    return 0;    
}