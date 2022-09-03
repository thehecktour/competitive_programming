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

        if((f==2010)||(f==2015)||(f==2016)||(f==2017)||(f==2019)){
            cout << "HOSTED" << endl;
        }else{
            cout << "NOT HOSTED" << endl;
        }
    }

    return 0;   
}