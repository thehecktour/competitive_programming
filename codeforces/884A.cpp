#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {

    int n,m;
    cin >> n >> m;
    vector<int> l;

    while(n--){
        int a;
        cin >> a;
        l.pb(a);
    }   

    int f = 0;

    for(int i=0; i<l.size(); i++){

        if(l[i]<86400){
            int ee = 86400-l[i];
            m-=ee;
        }

        f++;

        if(m<=0){
            break;
        } 
    }

    cout << f << endl;

    return 0;      
}