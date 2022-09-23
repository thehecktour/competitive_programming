#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    vector<int> l;
    cin >> k;

    while(k--){
        int f;
        cin >> f;

        l.clear();
        int aux = 1;

        while(f>0){
            int e = f%10;
            e = e*aux;
            if(e!=0){
                l.pb(e);
            }
            f = f/10;
            aux = aux*10;
        }

        cout << l.size() << endl;
        sort(l.begin(), l.end());
        
        for(auto i:l){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;   
}