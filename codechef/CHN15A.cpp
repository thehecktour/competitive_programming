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
        vector<int> l;
        l.clear();
        cin >> a >> b;

        while(a--){
            int f;
            cin >> f;
            l.push_back(f+=b);
        }
        int contador = 0;
        for(int i=0; i<l.size(); i++){
            if(l[i]%7==0){
                contador++;
            }
        }

        cout << contador << endl;
    }
    return 0;   
}