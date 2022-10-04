#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    ll k;
    cin >> k;

    vector<int> l;

    while(k--){
        ll a,b;

        cin >> a;
        l.pb(a);
        
    }

    int tamanho = l.size();

    sort(l.begin(), l.end());

    cout << l[l.size()-((tamanho/2)+1)] << endl;


    return 0;   
}