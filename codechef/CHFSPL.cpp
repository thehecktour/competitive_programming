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
        int a,b,c;

        cin >> a >> b >> c;

        if(((a+b)>=(b+c))&&((a+b)>=(a+c))){
            cout << a+b << endl;
        }else if(((a+c)>=(b+c))&&((a+c)>=(a+b))){
            cout << a+c << endl;
        }else if(((b+c)>=(b+a))&&((b+c)>=(a+b))){
            cout << b+c << endl;
        }

    }
    return 0;   
}