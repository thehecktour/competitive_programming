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
        int a,b, contador = 0;
        cin >> a >> b;

        while(a--){
            int f;
            cin >> f;
            if(f>b){
                contador++;
            }
        }

        cout << contador << endl;
    }

    return 0;   
}