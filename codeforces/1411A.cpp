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
        int a;
        string b;
        cin >> a >> b;

        int contador = 0;

        for(int i=b.length()-1; i>=0; i--){
            if(b[i]==')'){
                contador++;
            }else{
                break;
            }
        }   

        if((b.length()-contador)<contador){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;   
}