#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int n,m;
    map<int,int> mapinha;
    
    cin >> n >> m;
    int contador = 0;

    while(n--){
        int f;
        cin >> f;
        mapinha[f] = contador;
        contador++;
    }   

    map<int,int> mapinha2;

    while(m--){
        int e;
        cin >> e;
        if(mapinha.count(e)){
            mapinha2[mapinha[e]] = e;
        }
    }

    vector<int> sss;

    for(auto i:mapinha2){
        if(i.first>=0){
            sss.pb(i.second);
        }
    }

    for(auto i:sss){
        cout << i << " ";
    }

    cout << endl;

    return 0;   
}