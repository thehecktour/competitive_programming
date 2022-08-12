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
        int a;
        cin >> a;
        vector<int> l;

        l.clear();
        while(a--){
            int f;
            cin >> f;
            l.pb(f);
        }
        int contador = 0;
        for(int i=0; i<l.size(); i++){
            if(l[i]>=1000){
                contador++;
            }
        }
        cout << contador << endl;
    }
    return 0;   
}