#include <iostream>
#include <vector>
using namespace std;

int main(){
       int valor;
       int tamanho;
       vector<int> g1;

       cout << "Qual tamanho do seu vetor? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Adicione os valores no vetor!" << endl;
              cout << "Digite o " << i+1 << "º valor, por favor!"<< endl;
              cin >> valor;
              g1.push_back(valor);
       }

       for(auto i=g1.begin(); i!=g1.end(); i++){
              cout << "Os valores do seu vetor são: " << *i << endl;
       }

}