#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back
 
using namespace std;

int main() {    
    
    string f;
    int resposta, contador = 0;

    cin >> f;
    
    resposta = 0;
    contador = f.length()-1;

    for(int i=0; i<f.length(); i++){
        if(f[i]=='1'){
            resposta+=pow(2,contador);
        }
        contador--;
    }

    cout << resposta << endl;

    return 0;
}