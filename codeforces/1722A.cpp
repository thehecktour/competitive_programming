#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    map<int,int> mapinha;
    vector<int> l;

    cin >> k;

    while(k--){
        int a;
        string b;
        cin >> a >> b;

        int contador = 0;
        int f = 0;

        mapinha.clear();

        for(int i=0; i<b.length(); i++){
            mapinha[b[i]]++;
            if(b[i]=='T'){
                f++;
            }
        }

        
        for(auto i:mapinha){
            if(i.first=='T' && i.second == 1){
                contador++;
            }else if(i.first=='i' && i.second == 1){
                contador++;
            }else if(i.first=='u' && i.second == 1){
                contador++;
            }else if(i.first=='m' && i.second == 1){
                contador++;
            }else if(i.first=='r' && i.second == 1){
                contador++;
            }
        }

        if(contador==5){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }    

    return 0;   
}