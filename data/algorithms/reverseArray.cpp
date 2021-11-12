#include <iostream>
#include <vector>
using namespace std;

int main(){

       int tamanho;
       vector<int> listinha;
       vector<int> listinhaDois;
       int itens;
       int inicio, fim, auxiliar;

       cout << "Qual tamanho do seu array? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o item " << i+1 << "º do seu array, bb:" << "\t";
              cin >> itens;
              listinha.push_back(itens);       
       }

       inicio = 0;
       fim = tamanho-1;

       while(inicio< fim){
              auxiliar = listinha[inicio];
              listinha[inicio] = listinha[fim];
              listinha[fim] = auxiliar;
              inicio++, fim--;
       }
       
       for(int i=0; i<tamanho; i++){
              cout << "Valor " << i+1 << "º do seu array:" << "\t";
              cout << listinha[i] << endl;
       }

}