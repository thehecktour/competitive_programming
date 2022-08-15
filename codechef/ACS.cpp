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
        int a,b;

        cin >> a;

        int contador = 0;

        while(a>0){
            if(a>=100){
                a-=100;
                contador++;
            }else{
                contador++;
                a--;
            }
        }

        if(contador>10){
            cout << -1 << endl;
        }else{
            cout << contador << endl;
        }

    }

    return 0;   
}