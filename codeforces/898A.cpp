#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int k;
    cin>> k;

    if(k%10==0){
        cout << k << endl;
    }else{
        int f = min(abs((k%10)-10), k%10);
        
        if(f==(k%10)){
            cout << k-f << endl;
        }else{
            cout << k+f << endl;
        }

    }
    return 0;   
}