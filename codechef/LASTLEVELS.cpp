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

        if(a>3){

            if(a%3==0){
                cout << (a*b)+(((a/3)-1)*c) << endl;
            }else{
                cout << (a*b)+((a/3)*c) << endl;
            }
            
        }else{
            cout << (a*b) << endl;
        }
    }
    return 0;   
}