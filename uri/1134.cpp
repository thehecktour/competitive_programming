#include <iostream>
using namespace std;

int main(){

    int alcool, gasolina,diesel;

    int n;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while(true){
        
        cin >> n;

        if(n==1){
            alcool+=1;
        }else if(n==2){
            gasolina+=1;
        }else if(n==3){
            diesel+=1;
        }else if(n==4){
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

}