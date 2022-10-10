#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    ll n,k;

    cin >> n >> k;
    int x = 2;

    if(k>n){
        cout << k << endl;
    }else{
        if(k==1){
            cout << n+k << endl;
        }else{
            while(true){
                if((k*x)>n){
                    cout << k*x << endl;
                    break;
                }else{
                    x++;    
                }   
            }
        }
        
    }
    

    return 0;   
}