#include <iostream>
using namespace std;

int main(){


       //Inicializo as variaveis que vou precisar.

       int numeroCarteira, numeroMultas;
       double valorMulta, soma;
       
       //Variavel recebe 0 pois no C++, caso eu incremente uma variavel sem colocar ela como valor ZERO, buga tudo.
       soma =0;

       //Looping para pegar as informações de carteira do motorista e validar;
       while(true){
              cout << "Digite o valor da sua carteira de motorista, por favor: " << endl;
              cin >> numeroCarteira;
              if (numeroCarteira<1 || numeroCarteira>4327){
                     cout << "O número da sua carteira de motorista está inválido. Tente novamente!" << endl;
              }else{
                     break;
              }
       }
       
       //Aqui acho que é obvio
       cout << "Quantas multas você já recebeu? " << endl;
       cin >> numeroMultas;


       //Uso um looping para pedir os valores da multas
       for(int i=0; i<numeroMultas; i++){
              cout << "Qual valor da " << i+1 <<"º multa em reais?" << endl;
              cin >> valorMulta;
              soma+=valorMulta;
       }

       //Retorno os resultados
       cout << "O valor total arrecadado pelo Estado com esse indíviduo foi de R$ " << soma << " reais!" << endl;
       cout << "O numero da sua carteira de motorista é: " << numeroCarteira << endl;

}