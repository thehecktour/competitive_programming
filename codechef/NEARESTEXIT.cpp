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
        int f;
        cin >> f;

        if(f<=50){
            cout << "LEFT" << endl;
        }else{
            cout << "RIGHT" << endl;
        }
    }

    return 0;   
}