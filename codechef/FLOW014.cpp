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

        if((a>50)&&(b<0.7)&&(c>5600)){
            cout << 10 << endl;
        }else if((a>50)&&(b<0.7)){
            cout << 9 << endl;
        }else if((b<0.7)&&(c>5600)){
            cout << 8 << endl;
        }else if((a>50)&&(c>5600)){
            cout << 7 << endl;
        }else if((a>50)||(b<0.7)||(c>5600)){
            cout << 6 << endl;
        }else{
            cout << 5 << endl;
        }
        
    }

    return 0;   
}