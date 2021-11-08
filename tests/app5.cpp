#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valores;
       int inicio, fim, auxiliar;

       cout << "Qual tamanho do seu array? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o item " << i+1 << "º do seu array: " << "\t";
              cin >> valores;
              listinha.push_back(valores);
       }

       inicio = 0;
       fim = tamanho-1;

       while(inicio<fim){
              auxiliar = listinha[inicio];
              listinha[inicio] = listinha[fim];
              listinha[fim] = auxiliar;
              inicio++, fim--;
       }

       for(auto i=listinha.begin(); i!= listinha.end(); i++){
              cout << *i << endl;
       }
}