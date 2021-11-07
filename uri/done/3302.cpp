#include <iostream>
using namespace std;

int main(){

       int a, resposta;

       cin >> a;

       for(int i=0; i<a; i++){
              cin >> resposta;
              cout << "resposta " << i+1 <<  ": " << resposta << endl;
       }

}