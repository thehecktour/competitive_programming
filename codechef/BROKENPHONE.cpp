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
        cin >> a >> b;

        if(a<b){
            cout <<"REPAIR" << endl;
        }else if(b<a){
            cout <<"NEW PHONE" << endl;
        }else{
            cout << "ANY" << endl;
        }
    }

    return 0;   
}