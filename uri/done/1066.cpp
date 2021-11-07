#include <iostream>
using namespace std;

int main(){

       int a;
       int par,impar, positivo, negativo;

       par =0;
       impar = 0;
       positivo = 0;
       negativo = 0;

       for(int i=0; i<5; i++){
              cin >> a;
              if(a%2==0){
                     par+=1;
              }else if(a%2!=0){
                     impar+=1;
              }

              if(a>0){
                     positivo +=1;
              }else if(a<0){
                     negativo +=1;
              }
       }

       cout << par << " valor(es) par(es)" << endl;
       cout << impar << " valor(es) impar(es)" << endl;
       cout << positivo << " valor(es) positivo(s)" << endl;
       cout << negativo << " valor(es) negativo(s)" << endl;

}