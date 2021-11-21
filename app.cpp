#include <iostream>
#include <vector>
using namespace std;

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
       
       primeiro = 0;
       ultimo = tamanho-1;

       while(primeiro<ultimo){
              auxiliar = listinha[primeiro];
              listinha[primeiro] = listinha[ultimo];
              listinha[ultimo] = auxiliar;
              primeiro++, ultimo--;
       }

       for(int i=0; i<tamanho; i++){
              cout << "Seu array inverso na posição " << i+1 << " : " << listinha[i] << endl;
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

       for(int i=0; i<tamanho; i++){
              cout << "Seu array ordenado na posição " << i+1 << " : " << listinha[i] << endl;
       }

}