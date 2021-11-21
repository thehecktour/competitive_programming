#include <iostream>
using namespace std;

int main(){

    int valor, soma;

    soma = 0;

    for(int i=0; i<5; i++){

        cin >> valor;

        if(valor%2==0){
            soma+=1;
        }

    }

    cout << soma << " valores pares" << endl;

}