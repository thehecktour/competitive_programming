#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {  
    
    int a,b,c,d;
    vector<int> l;
    cin >> d;   

    while(d--){
        int f;

        cin >> f;
        l.clear();
        while(f--){
            int a;
            cin >> a;
            l.pb(a);
        }

        sort(l.begin(), l.end());

        bool lindo = false;

        for(int i=0; i<l.size(); i)
    }
    
    return 0;   
}