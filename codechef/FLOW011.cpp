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
        float a;
        cin >> a;

        if(a<1500){
            cout << a*2 << endl;
        }else{
            cout << fixed << setprecision(2);
            cout << 500+((a*98)/100)+a << endl;
        }
    }

    return 0;   
}