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
        int a,b;

        cin >> a >> b;

        cout << ((b*b)/(2*a)) << endl;
    }
    return 0;   
}