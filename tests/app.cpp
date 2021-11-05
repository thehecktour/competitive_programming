#include <iostream>

using namespace std;

int main(){

       int tamanho;
       int numero;

       int* vetor = new int[tamanho];

       while(true){
              cout << "Informe o tamanho do vetor: " << endl;
              cin >> tamanho;

              for(int i=0; i<tamanho; i++){
                     cout << "Digite os valores " << i+1 << " do vetor" << endl;
                     cin >> vetor[i];
              }

              for(int i=0; i<tamanho; i++){
                     cout << vetor[i] << " ";
              }

              cout << endl;

              cout << "Você deseja imprimir outro vetor? " << endl;
              cout << "1-Sim, 2-Nao, OutroNumero- Nao" << endl;
              cin >> numero;

              if(numero==1){

                     cout << "Informe o tamanho do vetor: " << endl;
                     cin >> tamanho;

                     for(int i=0; i<tamanho; i++){
                            cout << "Digite os valores " << i+1 << " do vetor" << endl;
                            cin >> vetor[i];
                     }

                     for(int i=0; i<tamanho; i++){
                            cout << vetor[i] << " ";
                     }
              }else{
                     break;
              }
              
       }
       



}