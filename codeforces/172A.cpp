#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    vector<string> l;
    cin >> k;

    while(k--){
        string f;
        cin >> f;
        l.pb(f);
    }
    sort(l.begin(), l.end());

    string b = l[0], c=l[l.size()-1];
    string e = "";

    for(int i=0; i<b.length(); i++){
        if(b[i]==c[i]){
            e+=b[i];
        }else{
            break;
        }
    }

    cout << e.length() << endl;

    return 0;   
}