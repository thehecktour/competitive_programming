#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor;

       cout << "Qual tamanho do seu array? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º valor do seu array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       int auxiliar, resultado, maior1, maior2;

       for(int i=0; i<tamanho; i++){
              for(int j=0; j<i; j++){
                     if(listinha[i] > listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     }
              }
       }

       for(int i=0; i<tamanho; i++){
              cout << "Valores do seu array na posição " << i << "º é: " << listinha[i] << endl;
       }

       resultado = listinha[0] + listinha[1];
       maior1 = listinha[0];
       maior2 = listinha[1];

       cout << "O resultado da soma dos 2 maiores numeros do array é : " << resultado << endl;
       cout << "Maior item do array é: " << maior1 << endl;
       cout << "Segundo maior item do array é: " << maior2 << endl;
}