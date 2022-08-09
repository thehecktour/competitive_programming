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
        int a,b, c;
        cin >> a >> b >> c;


        if(((a+b)==c)||((a+c)==b)||((b+c)==a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;   
}