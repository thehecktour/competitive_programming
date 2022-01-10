#include <iostream>
using namespace std;

int main(){

    int g, somador, contador;

    while(true){
        cin >> g;

        contador = 0;
        somador = 0;

        if(g==0){
            break;
        }

        for(int i=g; i<g+10; i++){
            if(i%2==0){
                somador +=i;
                contador+=1;
                if(contador == 5){
                    continue;
                }
            }
        }
        cout << somador << endl;
    }

}