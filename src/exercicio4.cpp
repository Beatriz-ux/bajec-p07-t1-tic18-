#include <iostream>

using namespace std;

int main(){
    int num, i;
    int max = 100;
    bool primo = 1;

    cout << "Numeros primos entre 1 e " << max << ": \n";
    for(num=2; num<=max; num++){
        for(i=2; i<=num/2;i++){
            if (i!=num && num%i == 0){
                primo = false;
                break;
            }
        }
        if(primo)
            cout << num << " ";
        primo = 1;
    }
    cout << endl;

    return 0;
}