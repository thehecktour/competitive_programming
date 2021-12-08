#include <iostream>
#include <vector>

using namespace std;

int main(){

       //Inicializo as variveis e o vetor
       vector<int> listinha;
       int valor, numeros, auxiliar, maior, menor;

       //Incremento com zero
       valor = 0;
       maior = 0;


       //Loping para fazer as verificações que preciso e incrementar meu vetor
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


       //Uso algoritimo de ordenação Bubble sorte para deixar o vetor em ordem Crescente
       for(int i=0; i<valor; i++){
              for(int j=0; j<i; j++){
                     if(listinha[i] < listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     }
              }
       }

       //Corro no vetor para verificar quem é o maior item dele
       for(int i=0; i<valor; i++){
              if(listinha[i] > maior){
                     maior = listinha[i];
              }
       }
       //PEgo o menor item do vetor
       menor = listinha[0];
       
       //Retorno das informações
       cout << "O MAIOR número positivo que você recebeu foi "<< maior << "! Parabéns!" << endl;
       cout << "O MENOR número positivo que você recebeu foi " << menor << "! Parabéns!" << endl;
}