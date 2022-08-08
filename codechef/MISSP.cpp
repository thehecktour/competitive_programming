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
        int f;
        mapinha.clear();
        cin >> f;
        while(f--){
            int a;
            cin >> a;
            mapinha[a]++;
        }
        
        for(auto i:mapinha){
            if(i.second%2!=0){
                cout << i.first << endl;
                break;
            }
        }
    }

    return 0;   
}