#include <iostream>
using namespace std;

int main(){

    int valor;
    int positivo;

    positivo = 0;

    for(int i=0; i<6; i++){
        cin >> valor;
        if(valor>0){
            positivo+=1;
        }
    }

    cout << positivo << " valores positivos" << endl;

    return 0;

}