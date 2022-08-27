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
        int a,b,c,d,e;


        cin >> a >> b >> c >> d >> e;

        int f = 1, contador = 0;
        f = (a*b);

        if(f>=42){
            contador = e;
        }else if(f>=21){
            contador = d;
        }else if(f>=10){
            contador = c;
        }

        cout << contador << endl;

    }
    return 0;   
}