#include <iostream>
using namespace std;

int main(){

       int numeroCarteira, numeroMultas;
       double valorMulta, soma;
       
       soma =0;

       while(true){
              cout << "Digite o valor da sua carteira de motorista, por favor: " << endl;
              cin >> numeroCarteira;
              if (numeroCarteira<1 || numeroCarteira>4327){
                     cout << "O número da sua carteira de motorista está inválido. Tente novamente!" << endl;
              }else{
                     break;
              }
       }
       
       
       cout << "Quantas multas você já recebeu? " << endl;
       cin >> numeroMultas;

       for(int i=0; i<numeroMultas; i++){
              cout << "Qual valor da " << i+1 <<"º multa em reais?" << endl;
              cin >> valorMulta;
              soma+=valorMulta;
       }

       cout << "O valor total arrecadado pelo Estado com esse indíviduo foi de R$ " << soma << " reais!" << endl;
       cout << "O numero da sua carteira de motorista é: " << numeroCarteira << endl;

}