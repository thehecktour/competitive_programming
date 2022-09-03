#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    map<string, string> mapinha = {
        {"purple","Power"},
        {"green","Time"},
        {"blue","Space"},
        {"orange","Soul"},
        {"red","Reality"},
        {"yellow","Mind"}
    };

    cin >> k;
    
    int contador = 6;
    vector<string> l;

    while(k--){
        string f;
        cin >> f;
        if(mapinha.find(f)!=mapinha.end()){
            contador--;
            mapinha.erase(f); 
        }
    }

    
    cout << contador << endl;
    
    for(auto i:mapinha){
        cout << i.second << endl;
    }

    return 0;   
}