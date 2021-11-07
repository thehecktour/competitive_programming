#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int inicio, auxiliar, fim, valor;
       int tamanho;

       cout << "Qual é o tamanho do seu vetor, bb? " << "\t";
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o valor do " << i+1 << "º item do vetor! " << "\t";
              cin >> valor;
              listinha.push_back(valor);
       }

       inicio = 0;
       fim = tamanho-1;
       while(inicio<fim){
              auxiliar = listinha[inicio];
              listinha[inicio] = listinha[fim];
              listinha[fim] = auxiliar;
              inicio++, fim--;
       }

       for(int i=0; i<tamanho; i++){
              cout << "Valor posição " << i+1 << "º do seu array: " << "\t";
              cout << listinha[i] << endl;
       }

}