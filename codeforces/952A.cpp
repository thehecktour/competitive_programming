#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    string f;

    cin >> f;

    if(f[f.length()-1]%2==0){
        cout << 0 << endl;
    }else{
        cout << 1 << endl;
    }


    return 0;   
}