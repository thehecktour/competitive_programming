#include <iostream>
#include <vector>
using namespace std;

int main(){

       vector<int> listinha;
       int tamanho, numero, firstNum, secondNum, currentProd;

       numero = -1001;

       cin >> tamanho;

       for (int i = 0; i < tamanho ; i++) {
              int firstNum = listinha[i];
              int secondNum = listinha[i+1];
              int currentProd = firstNum * secondNum;
        
        // Check if current product is biggest:
              if (currentProd > numero) {
              numero = currentProd;
              }     
       }

       cout << currentProd << endl;
}