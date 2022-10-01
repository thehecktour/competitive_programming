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
        l.pb(f);
    }

    map<int,int> mapinha;
    vector<int> ss;
    reverse(l.begin(), l.end());

    for(int i=0; i<l.size(); i++){
        if(mapinha.count(l[i])){
            continue;
        }else{
            ss.pb(l[i]);
        }

        mapinha[l[i]]++;
    }
    
    reverse(ss.begin(), ss.end());
    cout << ss.size() << endl;
    for(auto i:ss){
        cout << i << " ";
    }

    cout << endl;
    
    return 0;   
}