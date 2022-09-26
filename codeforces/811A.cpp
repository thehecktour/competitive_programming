#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    int a,b;

    cin >> a >> b;

    int contador = 1;

    while(true){

        if(a<0 || b<0){
            break;
        }
        if(contador%2!=0){
            a = a-contador;
        }else{
            b = b-contador;
        }
        contador++;
    }

    if(a<0){
        cout << "Vladik" << endl;
    }else{
        cout << "Valera" << endl;
    }
    
    return 0;   
}