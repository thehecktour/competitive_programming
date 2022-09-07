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
        float f;
        cin >> f;

        float a = 0.143*f;
        float r = (pow(a,f));
        
        if(pow(a,f)<0.5){
            cout << round(r) << endl;
        }else{
            cout << round(r)+1 << endl;
        }
    }

    return 0;   
}