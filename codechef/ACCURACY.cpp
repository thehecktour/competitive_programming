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
        double f;
        cin >> f;

        if((int)f%3==0 || f==0){
            cout << 0 << endl;
        }else{
            cout << ((((int)f/3)+1)*3)-f << endl;
        }
       

    }

    return 0;   
}