#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    
    cin >> k;
    
    while(k--){
        int a,b;
        cin >> a >> b;

        if(b>=a){
            cout << 0 << endl;
        }else{
            int contador = 0;
            while(b<a){
                b +=4;
                contador++;
            }

            cout << contador << endl;
            
        }
       
    }

    return 0;   
}