#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    


    int l;

    cin >> l;

    while(l--){
        int f;
        cin >> f;
        if(f<=25){
            cout << 1 << endl;
        }else{
            if(f%25==0){
                cout << f/25 << endl;
            }else{
                cout << (f/25)+1 << endl;
            }
           
        }
    }
    return 0;   
}