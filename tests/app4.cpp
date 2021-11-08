#include <iostream>
#include <vector>

using namespace std;

int main(){

       vector<int> listinha;
       int tamanho,valor, auxiliar, inicio, final, resultado;

       cout << "Qual tamanho do seu vetor? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o item da " << i+1 << "º posição do seu vetor: " << "\t";
              cin >> valor;
              listinha.push_back(valor);
       } 

       for(int i=0; i<tamanho; i++){
              cout << "Os valores do seu vetor são: " << listinha[i] << endl;
       }

       int a,b;
       resultado = 0;
       a = listinha[0];
       b = listinha[1];

       for(int i=0; i<listinha.size(); i++){
              for(int j=i+1; j<listinha.size(); j++){
                     if(listinha[i]*listinha[j]>a*b){
                            a=listinha[i], b=listinha[j];
                            resultado = a*b;
                            cout << "O resultado é " << resultado << endl;
                     }
              }
       }
}