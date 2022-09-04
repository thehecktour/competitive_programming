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
        int a,b,c,d,e;

        cin >> a >> b >> c;

        cout << min(b,(a-b))*c << endl;
    }

    return 0;   
}