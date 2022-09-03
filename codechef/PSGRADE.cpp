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
        int aMin,bMin,cMin,tMin, a,b,c;

        cin >> aMin >> bMin >> cMin >> tMin >> a >> b >> c;

        if((a>=aMin) && (b>=bMin) && (c>=cMin) && ((a+b+c)>=tMin)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;   
}