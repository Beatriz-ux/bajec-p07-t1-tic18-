#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int num, chute, max=100;
    srand(time(NULL));

    num = 1 + (rand()%max);


    do{
        cout << "Digite um chute entre 1 e " << max << ": ";
        cin >> chute;
        if(chute==num)
            cout << num << " eh o numero\n";
        else if(chute > num)
            cout << chute << " esta muito alto\n";
        else
            cout << chute << " esta muito baixo\n";
    }while(num!=chute);


    return 0;
}