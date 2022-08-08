#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;

    cin >> k;

    if(k>100){
        cout << 0 << endl;
    }else if(k>=51 && k<=100){
        cout << 50 << endl;
    }else if(k>=1 && k<=50){
        cout << 100 << endl;
    }

    return 0;   
}