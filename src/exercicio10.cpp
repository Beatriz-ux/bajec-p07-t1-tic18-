#include <iostream>

using namespace std;

int main(void){

    int n, fib, fib1, fib2;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << "Sequencia de Fibonacci: " << endl;
    
    for(int i = 0; i <= n; i++){
        if(i == 0){
            fib1 = 0;
            fib2 = 0;
        }
        else if(i == 1){
            fib1 = 1;
        }

        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        
        cout << fib << " ";
    }

    cout << endl;

    return 0;
}