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

        cin >> a;

        if(a<=100){
            cout << a << endl;
        }else if(a>100 && a<= 1000){
            cout << a-25 << endl;
        }else if(a>1000 && a<= 5000){
            cout << a-100 << endl;
        }else if(a>5000){
            cout << a-500 << endl;
        }
    }

    return 0;   
}