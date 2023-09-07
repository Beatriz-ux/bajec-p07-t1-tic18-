#include <iostream>

using namespace std;

int main(void){

    int n, advinha;

    n = rand() % 100 + 1;

    cout << "Adivinhe o numero: ";
    cin >> advinha;

    while(advinha != n){
        if(advinha > n){
            cout << "Muito alto!\nTente novamente: ";
            cin >> advinha;
        }else{
            cout << "Muito baixo!\nTente novamente: ";
            cin >> advinha;
        }
    }

    return 0;
}