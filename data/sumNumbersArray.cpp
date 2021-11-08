#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, soma;

       soma = 0;

       cout << "Digite o tamanho do seu array: " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o valor do item na posição " << i << "º do seu array: " << endl;
              cin >> valor;
              soma += valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              cout << "Os valores do seu array de acordo com a posição são: Posição " << i+1 << "º - Valor : " << listinha[i] << endl;
               
       }

       cout << "Soma dos valores do seu array é igual a : " << soma << endl;

}