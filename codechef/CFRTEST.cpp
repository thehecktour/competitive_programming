#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    int k;
    map<int,int> mapinha;
    cin >> k;

    while(k--){
        int a;

        cin >> a; 
        mapinha.clear();  

        while(a--){
            int f;
            cin >> f;
            mapinha[f]++;
        }

        int contador = 0;

        for(auto i:mapinha){
            if(i.first){
                contador++;
            }
        }

        cout << contador << endl;

        
    }

    return 0;   
}