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
        bool lindo = false;
        cin >> a >> b;
        while(a<b){
            
            if(a%2!=0){
                a++;
            }else{
                a+=2;
            }
        }

        cout << "A: " << a << endl;

        if(a==b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;   
}