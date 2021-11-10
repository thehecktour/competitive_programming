#include <vector>
#include <iostream>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, valor, item, add;

       add = 0;

       cout << "Qual tamanho do seu array?" << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Digite o " << i+1 << "º item do seu array: " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              cout << i+1 << "º item do seu array: " << listinha[i] << endl;
       }

       cout << "Qual item você quer buscar no array?" << endl;
       cin >> item;

       for(int i=0; i<tamanho; i++){  
              if(listinha[i] == item){
                     add =1;   
              }
       }

       if(add){
              cout << "O item foi encontrado !" << endl;
       }else{
              cout << "Esse item não foi encontrado no array!" << endl;
       }
       

}