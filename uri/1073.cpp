#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int valor, resultado;

    cin >> valor;

    for(int i=1; i<=valor; i++){
        if(i%2==0){
            resultado = pow(i,2);
            cout << i << "^" << 2 << " = " << resultado << endl;
        }
    }

}