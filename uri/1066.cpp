#include <iostream>
using namespace std;

int main(){

    int valor;
    int positivo, par, negativo, impar;

    positivo = 0;
    par = 0;
    negativo = 0;
    impar = 0;

    for(int i=0; i<5; i++){
        cin >> valor;
        if(valor>0){
            positivo+=1;
        }

        if(valor<0){
            negativo +=1;
        }

        if(valor%2==0){
            par+=1;
        }else{
            impar+=1;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

}