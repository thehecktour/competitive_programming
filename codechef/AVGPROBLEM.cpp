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
        float a,b,c;
        cin >> a >> b >> c;

        if(((a+b)/2)>c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
    return 0;   
}