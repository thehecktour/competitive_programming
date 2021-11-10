#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, item;

       cout << "Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout <<  "Digite o " << i+1 << "º item do array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       cout << "Qual item do seu array você quer apagar? " << endl;
       cin >> item;

       for(int i=0; i<tamanho; i++){
              if(listinha[i] == item){
                     listinha[i] = listinha[i+1];
                     i--;
                     tamanho--;
              }
       }

       for(int i=0; i<tamanho; i++){
              cout << "Seu array é: " << listinha[i] << endl;
       }

}