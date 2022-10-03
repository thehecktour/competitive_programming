#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int l;
    cin >> l;
    vector<int> d;

    while(l--){
        int f;
        cin >> f;
        d.pb(f);
    }
    
    int con = 1, r = 0;

    for(int i=0; i<d.size()-1; i++){
        if(d[i]<d[i+1]){
            con++;
        }else{
            r = max(r, con);
            con = 1;
        }
        r = max(r, con);
    }

    if(d.size()==1){
        cout << 1 << endl;
    }else{
        cout << r << endl;
    }
    

    return 0;   
}