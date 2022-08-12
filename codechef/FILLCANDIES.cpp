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
        int a,b,c;
        cin >> a >> b >> c;
        int contador = 0, r = b*c;
        while(a>0){
            a-=r;
            contador++;
        }
        cout << contador << endl;
    }
    return 0;   
}