#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b;

    cin >> a >> b;

    int f = 1;

    for(int i=1; i<=min(a,b); i++){
        f*=i;
    }

    cout << f << endl;

    return 0;   
}