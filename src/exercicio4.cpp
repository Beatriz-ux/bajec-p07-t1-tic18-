#include<iostream>

int main()
{
    int n = 100;

    std::cout << "Sao numeros primos: " << std::endl;
    std::cout << 1 << std::endl << 2 << std::endl;
    
    for(int i = 3; i <= n; i+=2)
    {
        bool check = 1;
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                check = 0;
                j = i + 1;
            }
        }

        if(check)
            std::cout << i << std::endl;
    }
    return 0;    
}