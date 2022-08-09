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
        int a,b, c;

        cin >> a >> b;

        if(a<=6){
            cout << 1*b << endl;
        }else{
            if(a%6==0){
                cout << (a/6)*b << endl;
            }else{
                cout << ((a/6)+1)*b << endl;
            }
        }
    }

    return 0;   
}