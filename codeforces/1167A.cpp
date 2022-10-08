#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;
    vector<int> l;

    cin >> k;
    
    while(k--){
        int d;
        string f;
        cin >> d >> f;

        int contador = 0;   
        bool lindo = false;

        for(int i=0; i<f.length(); i++){
            contador++;
            if(f[i]=='8'){
                lindo = true;
                break;
            }
        }

        // cout << f.length() << endl;
        // cout << contador << endl;
        // cout << lindo << endl;

        if(((f.length()-contador)>=10 && lindo==true)||(f.length()-contador>=10 && f[0]=='8')){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;   
}