#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double valor;
    double soma;
    int quantidade;
    double media;

    quantidade = 0;
    soma = 0;

    while(true){
        cin >> valor;
        if(valor <0){
            break;
        }
        soma += valor;
        quantidade +=1;
        
    }

    media = (soma/quantidade);
    cout << fixed << setprecision(2);
    cout << media << endl;

}