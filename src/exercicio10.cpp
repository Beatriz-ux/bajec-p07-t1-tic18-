#include <iostream>

using namespace std;

int main(){
    int num, f_, f__, fn, i;
    cout << "Digite um inteiro: ";
    cin >> num;

    num = abs(num);
    // f(0) = 0
    f_ = 0;
    // f(1) = 1
    f__ = 1;

    if(num == 0)
        cout << "F(0) = "<< 0 <<endl;
    else if(num==1)
        cout << "F(1) = "<< 1 <<endl;
    else{ 
        // f(n) =  f(n-1) + f(n-2)
        for(i = 1; i<num; i++){
            fn = f_ + f__;
            f_ = f__;
            f__ = fn;
        }

        cout << "F("<< num << ") = "<< fn <<endl;
    }



}