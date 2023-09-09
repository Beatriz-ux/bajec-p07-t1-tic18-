#include <iostream>

using namespace std;

int main(){
    int num, i;

    cout << "Digite um inteiro: ";
    cin >> num;

    cout << num << " eh divisivel por: ";
    num = abs(num);
    for (i=1;i<=num/2;i++){
        if(num%i == 0)
            cout << i << " "; 
    }
    cout << num << endl;

    return 0;
}