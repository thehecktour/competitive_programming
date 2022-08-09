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
        int contadorA = 0, contadorB = 0;
        cin >> f;
        for(int i=0; i<f.length(); i++){
            if((f[i]=='A'&&f[i+1]=='B')||f[i]=='B'&&f[i+1]=='A'){
                contadorA++;
                i++;
            }
        }

        if(contadorA!=(f.length()/2)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;   
}