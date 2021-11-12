#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int array[], int item, int comeco, int final){

       

}

int main(){

       vector<int> listinha;
       int tamanho, valor, item, auxiliar;

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



}