#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    cin >> k;

    while(k--){
        int a,b,c,d;
        int q;

        cin >> q >> a >> b >> c >> d;

        cout << max(max(a,b), max(c,d)) << endl;

    }
    
    return 0;   
}