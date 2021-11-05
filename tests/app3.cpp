#include <iostream>
#include <vector>
using namespace std;

int main(){
       int valor;
       vector<int> g1;
       int tamanho;

       cout << "Qual tamanho do seu vetor? " << endl;
       cin >> tamanho;

       tamanho = g1.size();

       for(int i=0; i<tamanho; i++){
              cout << "Adicione os valores no vetor!" << endl;
              cout << "Digite o " << i+1 << "º valor, por favor!"<< endl;
              cin >> valor;
              g1.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              cout << "Os valores do seu vetor são: " << g1[i] << endl;
       }

}