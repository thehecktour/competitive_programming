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
        int a1,a2,b1,b2,c1,c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        int r1,r2;

        r1 = max((a1+a2),(b1+b2));
        r2 = max((b1+b2),(c1+c2));

        cout << max(r1,r2) << endl;

    }

    return 0;   
}