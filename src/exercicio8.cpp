#include <iostream>

using namespace std;

int main(void){
    int n;

    cout << "Digite o tamanho do padrao: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}