#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    int n_rand = 1 + (rand() % 100);
    int n = 0;

    //std::cout << n_rand << std::endl;

    std::cout << "Adivinhe qual e numero escolhido entre 1 e 100: ";
    std::cin >> n;

    

    while(n != n_rand)
    {
        std::cout << (n > n_rand ? "Seu palpite e maior. " : "Seu palpite e menor. ");
        std::cout << "Adivinhe novamente: ";
        std::cin >> n;
    }

    std::cout << "Parabens, seu palpite esta correto!" << std::endl;


    return 0;    
}