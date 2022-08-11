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
        cin >> a >> b >> c >> d;

        if((a-c)<(b-d)){
            cout << "First" << endl;
        }else if((b-d)<(a-c)){
            cout << "Second" << endl;
        }else{
            cout << "Any" << endl;
        }
    }

    return 0;   
}