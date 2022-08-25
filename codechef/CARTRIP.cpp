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
        int a;
        cin >> a;

        if(a<=300){
            cout << 3000 << endl;
        }else{
            cout << a*10 << endl;
        }
    }
    return 0;   
}