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

        if(((b+c)==a)||(b==a)||(c==a)||(d==a)||((c+d)==a)||((b+d)==a)||((b+c+d)==a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;   
}