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
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        if(a+b+c+d==0){
            cout << "IN" << endl;
        }else{
            cout << "OUT" << endl;
        }
    }

    return 0;   
}