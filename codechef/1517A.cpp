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
        ll f;
        cin >> f;
        if(f<2050 || (f%2050!=0)){ 
            cout << -1 << endl;
        }else if(f==2050){
            cout << 1 << endl;
        }else if(f>2050){
            ll soma = 0;
            ll numero = f/2050;
            while(numero>0){
                ll e = numero%10;
                soma+=e;
                numero = numero/10;
            }
            cout << soma << endl;
        }
    }
    return 0;   
}