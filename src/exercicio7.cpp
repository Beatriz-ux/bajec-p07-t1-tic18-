#include <iostream>

using namespace std;

int main(){
    char letra = 'A';
    int altura;
    int i, j;

    cout << "Digite altura: ";
    cin >> altura;

    for(i=1; i<=altura; i++){
        for(j=0; j<i; j++){
            cout << letra;
            if(letra == 'Z')
                letra = 'A';
            else
                letra++;
        }
        cout << endl;
    }

    return 0;
}