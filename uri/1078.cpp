#include <iostream>
using namespace std;

int main(){

    int valor, resultado;

    cin >> valor;

    for(int i=1; i<=10; i++){
        resultado = valor*i;
        cout << i << " x " << valor << " = " << resultado << endl;
    }

    return 0;
}