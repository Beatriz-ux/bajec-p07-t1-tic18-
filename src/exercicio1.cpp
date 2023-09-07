#include<iostream>

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        std::cout << i; 
        std::cout << (i % 3 == 0 ? "Fizz" : "");
        std::cout << (i % 5 == 0 ? "Buzz" : "");
        std::cout << std::endl;
    }

    return 0;
}