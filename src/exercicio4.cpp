#include <iostream>

using namespace std;

int main(void){
    for(int i = 2; i <= 100; i++){
        int j = 2;
        while(j < i){
            if(i % j == 0){
                break;
            }
            j++;
        }
        if(j == i){
            cout << i << " ";
        }
    }

    return 0;
}