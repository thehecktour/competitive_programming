#include <iostream>
#include <vector>

using namespace std;

int main(){

       vector<int> listinha;
       int valor, numeros, auxiliar, maior, menor;

       valor = 0;
       maior = 0;

       while(true){
              cout << "Digite um numero positivo, por favor: " << endl;
              cin >> numeros;
              if(numeros >0){
                     valor+=1;
                     listinha.push_back(numeros);
              }else if(numeros == 0){
                     cout << "O código acabou! Obrigado!" << endl;
                     break;
              }else if(numeros <0){
                     cout << "Desculpe, mas esses valores (zero e negativos) não entrarão nos cálculos." << endl;
              }
       }


       for(int i=0; i<valor; i++){
              for(int j=0; j<i; j++){
                     if(listinha[i] < listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     }
              }
       }

       for(int i=0; i<valor; i++){
              if(listinha[i] > maior){
                     maior = listinha[i];
              }
       }

       menor = listinha[0];
       
       cout << "O MAIOR número positivo que você recebeu foi "<< maior << "! Parabéns!" << endl;
       cout << "O MENOR número positivo que você recebeu foi " << menor << "! Parabéns!" << endl;
}