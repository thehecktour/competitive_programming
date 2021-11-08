#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, auxiliar;

       cout << "Qual é o tamanho do seu array? " << "\t";
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Qual valor da posição " << i+1 << "º?" << "\t";
              cin >> valor;
              listinha.push_back(valor);
       }


       for(int i=0; i<tamanho; i++){
              for(int k=i+1; k<tamanho; k++){
                     if(listinha[k]<listinha[i]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[k];
                            listinha[k] = auxiliar;
                     }
              }
       }
       
       for(int i=0; i<tamanho; i++){
              cout << listinha[i] << " ";
       }

       cout << endl;
}