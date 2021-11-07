#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valores;
       int maior;

       maior = 0;

       cout << "Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º valor do array, bb!" << endl;
              cin >> valores;
              listinha.push_back(valores);
       }

       for(auto i=listinha.begin(); i!= listinha.end(); i++){
              maior = listinha[0];
              if(*i>maior){
                     maior = *i;
              }
       }

       cout << "O maior valor do array é: " << maior << endl;
}