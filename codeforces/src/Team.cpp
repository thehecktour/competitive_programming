#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int numero;
    int a,b,c;
    int pos;
    int result;

    cin >> numero;
    pos =0;

    for (int i=0; i<numero; i++){
        cin >> a >> b >> c;
        result = (a+b+c);
        if (result == 2 || result == 3){
            pos +=1;
        }
    }

    cout << pos << endl;
}