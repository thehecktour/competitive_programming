#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b,c,d;
    cin >> a >> b >> c;

    if((a==b)||(b==c)||(a==c)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;   
}