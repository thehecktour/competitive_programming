#include <iostream>
using namespace std;

int main(){

    int g, somador;

    cin >> g;

    while(g--){
        int a,b;

        cin >> a >> b;

        somador = 0;

        for(int i=a; i<a+b; i++){
            if(i%2!=0){
                somador +=i;
            }
        }
        cout << somador << endl;
    }
//essa questão ta errada

}