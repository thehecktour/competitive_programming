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
        string f;
        cin >> f;
        int contador = 0;

        for(int i=0; i<f.length(); i++){
            if(f[i]=='4'){
                contador++;
            }
        }

        cout << contador << endl;

    }

    return 0;   
}