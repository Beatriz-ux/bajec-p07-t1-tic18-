#include<iostream>
#include<cmath>

int main()
{
    int n, mid_n, Qcasa = 0;
    float perf = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;
    mid_n = n;

    while(mid_n != 0)
    {
        mid_n = mid_n / 10;
        Qcasa++;
    }

    mid_n = n;
    while(mid_n != 0)
    {
        perf += pow((mid_n % 10), Qcasa);
        mid_n = mid_n / 10;
    }

    std::cout << (n == perf ? "O numero e narcisista": "O numero nao e narcisista") << std::endl; 
    
    return 0;
}