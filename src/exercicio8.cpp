#include <iostream>

using namespace std;

int main(){
    int altura;
    int i, j;

    cout << "Digite altura: ";
    cin >> altura;

    cout << "a)\n";
    for(i=0; i<altura; i++){
        for (j=0; j<altura; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nb)\n";
    for(i=1; i<=altura; i++){
        for (j=0; j<i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "\nc)\n";
    for(i=1; i<=altura; i++){
        cout << "* ";
        for (j=2; j<altura; j++){
            if(i == 1 || i == altura)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << "* \n";
    }

    return 0;
}