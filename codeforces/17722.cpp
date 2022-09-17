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
        string f, d = "Timur";
        int e;
        cin >> e >>  f;

        sort(d.begin(), d.end());
        sort(f.begin(), f.end());

        if(d==f){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;   
}