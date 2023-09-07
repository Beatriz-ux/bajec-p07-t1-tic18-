#include<iostream>

int main()
{
    int matr;
    float n1, n2, n3;
    for(bool check = 1; check == 1;)
    {
        std::cout << "Digite a matricula do aluno: ";
        std::cin >> matr;        
        std::cout << "Digite a primeira nota: ";
        std::cin >> n1;
        std::cout << "Digite a segunda nota: ";
        std::cin >> n2;
        std::cout << "Digite a terceira nota: ";
        std::cin >> n3;

        std::cout << "MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA" << std::endl;
        std::cout << "===========================================================" << std::endl;
        std::cout << matr << "\t" << n1 << "\t" << n2 << "\t" << n2 << "\t" << (n1 + n2 + n3) / 3 << std::endl;
        

        std::cout << "Deseja continuar? (sim = 1, nao = 0): ";
        std::cin >> check;
    }

    std::cout << "Operacao finalizada." << std::endl;

    return 0;    
}