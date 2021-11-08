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

       int inicio, final, auxiliar;

       inicio = 0;
       final = tamanho-1;

       while(inicio < final){
              auxiliar = g1[inicio];
              g1[inicio] = g1[final];
              g1[final] = auxiliar;
              inicio++, final--;
       }

       for(int i=0; i<tamanho; i++){
              cout << "Os valores do seu array são: " << g1[i] << endl;
       }

}