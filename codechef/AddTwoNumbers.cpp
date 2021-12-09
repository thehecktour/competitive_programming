#include <iostream>
using namespace std;

int main(){

    int b;
    int a,c;
    int g, somador;

    somador = 0;
    cin >> b;
    
    while(true){
        cin >> a >> c;
        g = a +c;
        somador+=1;
        cout << g << endl;
        if(somador==b){
            break;
        }
    }
}