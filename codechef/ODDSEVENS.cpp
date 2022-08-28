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
        cin >> a >> b;

        if((a+b)%2==0){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }

    return 0;   
}