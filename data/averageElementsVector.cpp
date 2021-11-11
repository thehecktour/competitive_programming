#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, soma, valor;
       double media;

       cout << "Qual tamanho do seu vetor? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º item do seu vetor: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0;i<tamanho;i++){
              soma+=listinha[i];
       }

       media = (soma/tamanho);
       cout << "A media dos valores desse vetor é: " << media << endl;

}