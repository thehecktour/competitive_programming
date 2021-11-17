#include <iostream>
using namespace std;

int main(){

    int valor;

    while(true){
        cin >> valor;

        if(valor == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }else{
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;

}