#include <iostream>
#include <vector>
using namespace std;

int main(){
       vector<int> listinha;
       cout  << "Digite o tamanho da sua lista encadeada: " << endl;
       int size;
       cin >> size;

       for(int i=0; i<size; i++){
              cout << "Digite o " << i+1 << "º item da sua lista: " << endl;
              int item;
              cin >> item;

              listinha.push_back(item);
       }


       for(int i=0; i<size; i++){
              cout << listinha[i] << endl;
       }
}