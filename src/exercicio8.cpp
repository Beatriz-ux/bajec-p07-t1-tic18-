#include <iostream>

int main(void)
{
    int h;
    std::cout << "Digite a altura: ";
    std::cin >> h;

    std::cout << "a:" << std::endl;
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= h; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "b:" << std::endl;
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "c:" << std::endl;
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= h; j++)
        {
            std::cout << ((j == 1 || j == h || i == h || i == 1) ? "* ": "  ");
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}