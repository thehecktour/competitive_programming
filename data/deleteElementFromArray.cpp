#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, item, valor;

       cout << "Qual tamanho do seu array? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o valor do " << i+1 << "º item do seu array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       cout << "Qual elemento você quer deletar? " << endl;
       cin >> item;

       for(int i=0; i<tamanho; i++){
              if(listinha[i] == item){
                     for(int j=i; j<(tamanho-1); j++){
                            listinha[j] = listinha[j+1];
                     }      
                     i--;
                     tamanho--;
              }
       }

       for(int i=0; i<tamanho; i++){
              cout << "Novo array é: " << i+1 << "º item: " << listinha[i] << endl;
       }

}