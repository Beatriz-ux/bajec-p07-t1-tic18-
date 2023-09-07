#include <iostream>

using namespace std;

int main(void){
    char ch = 'A';
    int h;

    cout << "Digite a altura do padrao: ";
    cin >> h;

    for(int i = 0; i <= h; i++){
        for(int j = 0; j < i; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}