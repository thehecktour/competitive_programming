#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    vector<vector<int>> accounts = {{1,2,3},{3,2,1}}; 

    int aux = 0, ca = 0;
        
    for(int i=0; i<accounts.size(); i++){
        ca = 0;

        for(int j=0; j<accounts[i].size(); j++){
            ca+=accounts[i][j];
        }
        
        aux = max(aux,ca);
    }
    
    return aux;  
}