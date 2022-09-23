#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int f;
    cin >> f;

    while(f--){
        int k;

        cin >> k;

        if(k%2==0){
            cout << (k/2)-1 << endl;
        }else{
            cout << k/2 << endl;
        }
    }


    return 0;   
}