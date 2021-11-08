#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int number;
       int maior, menor;

       maior = 0;
       menor = 0;

       for(int i=0; i<5; i++){
              cout << "Digite o " << i+1 << "º número do sey array, bb: " << endl;
              cin >> number;
              listinha.push_back(number);
       }

       for(int i=0 ; i<5; i++){
              maior = listinha[0];
              menor = listinha[0];
              if(listinha[i]>maior){
                     maior = listinha[i];
              }

              if (listinha[i] < menor){
                     menor = listinha[i];
              }
       }

       cout << "O menor item do seu array é: " << menor << endl;
       cout << "O maior item do seu array é: " << maior << endl;

}