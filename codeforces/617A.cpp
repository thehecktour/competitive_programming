#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;

    cin >> k;

    if(k%5==0){
        cout << k/5 << endl;
    }else{
        cout << (k/5)+1 << endl;
    }


    return 0;   
}