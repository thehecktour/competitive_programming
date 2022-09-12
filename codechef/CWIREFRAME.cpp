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
        int a,b,c;

        cin >> a >> b >> c;

        cout << ((a*2)+(b*2))*c << endl;
    }

    return 0;   
}