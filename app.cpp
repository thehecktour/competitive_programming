#include <iostream>
#include <vector>
#include <map>
using namespace std;

int buscaBinaria(vector<int> vetor, int item, int tamanho){
       int primeiro = 0;
       int final = tamanho -1;
       char palavra = 3;
       while(primeiro <= final){
              int meio = (primeiro+final)/2;
              if(item < vetor[meio]){
                     final = meio -1;
              }else if(item > vetor[meio]){
                     primeiro = meio +1;
              }else{
                     return meio;
              }
       } return palavra;
}

int main(){

       vector<int> listinha;
       int tamanho, valor, auxiliar, primeiro, ultimo;

       cout << "Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º item do seu array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              cout << "O " << i+1 << "º item do seu array é: " << listinha[i] << endl;
       }
       
       for(int i=0; i<tamanho; i++){
              for(int j=0; j<(tamanho-1); j++){
                     if(listinha[i] < listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     }
              }
       }

       int itemQueQueroBuscar;

       cout << "Qual item você está buscando?" << endl;
       cin >> itemQueQueroBuscar;


       cout << buscaBinaria(listinha, itemQueQueroBuscar, tamanho) << endl;
}