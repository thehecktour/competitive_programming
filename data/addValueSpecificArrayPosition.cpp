#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, novoValor, resposta, posicao;

       cout <<"Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 <<"º item do seu array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho;i++){
              cout << i+1 << "º item do seu array: " << listinha[i] << endl;
       }

       cout << "Você quer adicionar um novo valor no seu array? " << endl;
       cin >> resposta;
       
       if(resposta == 1){   
              cout << "Qual novo valor? " << endl;
              cin >> novoValor;
              cout << "Qual nova posição? " << endl;
              cin >> posicao;
              for(int i=tamanho;i>=posicao;i--){
                     listinha[i+1]=listinha[i];
              }
              listinha[posicao]=novoValor;

              for(int i=0; i<tamanho;i++){
                     cout << i+1 << "º item do seu array: " << listinha[i] << endl;
              }

       }else{
              cout << "Ok, tchau!" << endl;
       }
}