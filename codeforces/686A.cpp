#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    ll n,k;

    cin >> n >> k;
    ll criancas = 0;

    while(n--){
        ll f;
        char a;

        cin >> a >> f;

        if(a=='-'){
            if(f<=k){
                k-=f;
            }else{
                criancas++;
            }
        }else if(a=='+'){
            k+=f;
        }

        
    }

    cout << k << " " << criancas << endl;

    return 0;   
}