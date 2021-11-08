#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha, novaLista;
       int tamanho, valor, igual;

       igual = 0;

       cout << "Digite o tamanho do array: " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite os valores de cada posição. " << i+1 << "º: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              for(int j=0; j<i; j++){
                     if(listinha[i] == listinha[j]){
                            cout << listinha[i] << " ";
                     }
              }
       }

       cout << endl;


}