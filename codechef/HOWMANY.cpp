#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int k;

    cin >> k;

    string f = to_string(k);

    if(f.length()==1){
        cout << 1 << endl;
    }else if(f.length()==2){
        cout << 2 << endl;
    }else if(f.length()==3){
        cout << 3 << endl;
    }else if(f.length()>3){
        cout << "More than 3 digits" << endl;
    }
    return 0;   
}