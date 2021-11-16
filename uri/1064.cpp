#include <iostream>
using namespace std;

int main(){

    double valor;
    int positivo;
    double soma, media;

    positivo = 0;

    for(int i=0; i<6; i++){
        cin >> valor;
        if(valor>0){
            positivo+=1;
            soma += valor;
        }
    }
    media = (soma/positivo);

    cout << positivo << " valores positivos" << endl;
    cout << media << endl;
    
    return 0;

}