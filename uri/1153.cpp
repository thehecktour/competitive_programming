#include <iostream>
using namespace std;

int main(){

    int valor;
    int multiplicando;

    multiplicando = 1;

    cin >> valor;

    for(int i=1; i<=valor; i++){
        multiplicando = multiplicando*i;
    }

    cout << multiplicando << endl;

}