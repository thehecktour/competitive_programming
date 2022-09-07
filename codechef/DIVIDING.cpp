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

    int tS = 0, tM = 0;

    while(k--){
        int f;
        cin >> f;
        l.pb(f);
    }

    for(int i=0; i<l.size(); i++){
        tS+=l[i];
        tM+=(i+1);
    }

    if(tS%tM==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;   
}