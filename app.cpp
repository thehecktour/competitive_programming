#include <iostream>
#include <vector>
#include <map>
using namespace std;

int BinarySearch(int tamanho, int askedNumber, vector<int> vetor){
       int first = 0;
       int last = tamanho-1;

       while (first <= last){
              int middle = (first+last)/2;
              if(askedNumber<vetor[middle]){
                     last = middle - 1;
              }else if(askedNumber>vetor[middle]){
                     first = middle+1;
              }else{
                     return middle;
              }
       }return -1;
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
              for(int j=0; j<i; j++){
                     int auxiliar;
                     if(listinha[i] < listinha[j]){
                            auxiliar = listinha[i];
                            listinha[i] = listinha[j];
                            listinha[j] = auxiliar;
                     } 
              }
       }

       for(int i=0; i<tamanho; i++){
              cout << "O " << i+1 << "º item do seu array ORDER: " << listinha[i] << endl;
       }

       int itemQueQueroBuscar;

       cout << "Qual item você está buscando?" << endl;
       cin >> itemQueQueroBuscar;


       cout << BinarySearch(tamanho, itemQueQueroBuscar, listinha) << endl;
}