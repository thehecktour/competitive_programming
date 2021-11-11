#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, auxiliar, inicio, final, item;

       cout << "Digite o tamanho do seu array: " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º item do array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }


       cout << "Qual item você quer deletar no seu vetor? " << endl;
       cin >> item;

       for(int i=0; i<tamanho; i++){
              if(listinha[i] == item){
                     listinha[i] = listinha[i+1];
                     i--;
                     tamanho--;
              }
       }

       // for(int i=0; i<tamanho; i++){
       //        for(int j=0; j<tamanho; j++){
       //               if(listinha[i] < listinha[j]){
       //                      auxiliar = listinha[i];
       //                      listinha[i] = listinha[j];
       //                      listinha[j] = auxiliar;
       //               }
       //        }
       // }

       // inicio = 0;
       // final = tamanho-1;

       // while(inicio<final){
       //        auxiliar = listinha[inicio];
       //        listinha[inicio] = listinha[final];
       //        listinha[final] = auxiliar;
       //        inicio++, final--;
       // }

       for(int i=0; i<tamanho; i++){
              cout << "O " << i+1 << "º item do seu array: " << listinha[i] << endl;
       }

}