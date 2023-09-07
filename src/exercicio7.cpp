#include <iostream>

int main(void)
{
    int h;
    char ch = 65;
    std::cout << "Digite a altura: ";
    std::cin >> h;

    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << ch;
            ch += 1;
            if(ch == 91) ch = 97;
            if(ch == 123) ch = 48;
            if(ch == 58)
            {
                j = h + 1;
                i = h + 1;
                std::cout << std::endl << "Os caracteres alfanumericos acabaram." << std::endl;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}