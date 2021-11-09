#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;      
       int tamanho, valor, par, impar;

       cout <<"Qual tamanho do seu array? " << endl;
       cin >> tamanho;

       for(int i=0; i<tamanho; i++){
              cout << "Adicione o item " << i+1 << "º do seu array : " << endl;
              cin >> valor;
              listinha.push_back(valor);
       }

       for(int i=0; i<tamanho; i++){
              if(i%2!=0){
                     cout << "Os valores pares desse array são: " << listinha[i] << " " << endl;
              }else{
                     cout << "Os valores impares desse array são: " << listinha[i] << " "; 
              }
       }
}