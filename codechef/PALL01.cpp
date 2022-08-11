#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    vector<int> l = {100,50,20,10,5,2,1};

    int k;
    cin >> k;

    while(k--){
        string a,b;

        cin >> a;

        b = a;

        reverse(a.begin(), a.end());

        if(a==b){
            cout << "wins" << endl;
        }else{
            cout << "loses" << endl;
        }
    }
    
    return 0;   
}