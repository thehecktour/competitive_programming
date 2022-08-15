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
        float a,b;

        cin >> a;

        b = a*60;

        cout << b/30 << endl;
    }

    return 0;   
}