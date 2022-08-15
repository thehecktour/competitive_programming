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

        ll d = 1;
        
        for(ll i=1; i<=f; i++){
            d*=i;
        }
        
        cout << d << endl;
    }

    return 0;   
}