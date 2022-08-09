#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    
    cin >> k;
    
    int a = 0, b= 0;
    while(k--){
        int f;
        cin >> f;
        if(f%2==0){
            a++;
        }else{
            b++;
        }
    }

    if(a>b){
        cout << "READY FOR BATTLE" << endl;
    }else{
        cout << "NOT READY" << endl;
    }

    return 0;   
}