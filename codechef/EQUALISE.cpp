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

        cin >> a >> b;

        if(a==b){
            cout << "YES" << endl;
        }else if(a>b){
            while(true){
                b = b*2;
                if(b>=a){
                    break;
                }
            }

            if(b==a){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(b>a){
            while(true){
                a = a*2;
                if(a>=b){
                    break;
                }
            }

            if(b==a){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;   
}