#include <iostream>
#include <vector>
using namespace std;


int binarySearch(int array[], int esquerda, int meio, int direita, int item){
       esquerda = 0;
       direita = meio -1;
       while (esquerda <= direita){
              meio = (esquerda + direita) / 2;
              if(item == array[meio]){
                     return (meio);
              }else if(item >array[meio]){
                     esquerda = meio+1;
              }else{
                     esquerda = meio-1;
              }
       }
       return -1;
}

int main(){

       vector<int> listinha;
       int tamanho, valor, item, auxiliar;
       int primeiro, ultimo, meio, numero;

       cout << "Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout <<  "Digite o " << i+1 << "º item do array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              for(int j=0; j<tamanho; j++){
                     if(listinha[i] < listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     }
              }
      }

       for(int i=0; i<tamanho; i++){
              cout << "Valor do " << i+1 << "* item do array - " << listinha[i] << endl;
       }
}