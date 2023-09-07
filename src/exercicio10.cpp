#include<iostream>

int main()
{
    int num, f1 = 1, f2 = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> num;

    /*
        Nao sei se entendi muito bem o enunciado da questao,
        entao a fiz das duas formas que havia entendido
    */

    // Se n for a quantidade de numeros da sequencia
    for(int i = 0; i < num; i++)
    {
        std::cout << f1 << " ";
        f1 += f2;
        f2 = f1-f2;
    }

    std::cout << std::endl;

    f1 = 1;
    f2 = 0;

    // Se n for o numero maximo possivel para um numero da sequencia
    for(; f1 < num;)
    {
        std::cout << f1 << " ";
        f1 += f2;
        f2 = f1-f2;
    }
    return 0;    
}