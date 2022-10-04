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
        cin >> a >> b >> c >> d;
        int contador = 0;

        if(b>a){
            contador++;
        }

        if(c>a){
            contador++;
        }

        if(d>a){
            contador++;
        }

        cout << contador << endl;
    }
    return 0;   
}