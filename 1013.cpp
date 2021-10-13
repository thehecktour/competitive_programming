#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int a,b,c, abBiggest;

    cin >> a >> b >> c;

    abBiggest = (a+b+abs(a-b))/2;

    if (abBiggest > c){
        cout << abBiggest << " eh o maior" << endl;
    }else if(abBiggest < c){
        cout << c << " eh o maior" << endl;
    }

}