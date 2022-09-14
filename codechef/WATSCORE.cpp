#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    unordered_map<int,int> mapinha;

    int k;

    cin >> k;

    while(k--){
        int f;
        cin >> f;

        mapinha.clear();

        while(f--){
            int a,b;

            cin >> a >> b;

            if(mapinha.count(a)){
                mapinha[a] = max(mapinha[a],b);
            }else{
                mapinha[a] = b;
            }
        }
        
        int contador = 0;
        for(auto i:mapinha){
            if(i.first <= 8){
                contador+=i.second;
            }
        }

        cout << contador << endl;
    }

    
    return 0;   
}