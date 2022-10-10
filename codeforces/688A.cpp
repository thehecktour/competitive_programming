#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    ll a,b;

    cin >> a >> b;
    vector<char> l;

    while(b--){
        string d;

        cin >> d;

        // cout << "String: " << d << endl;

        int num = 0;
        for(int i=0; i<d.length(); i++){
            if(d[i]=='0'){
                num++;
            }
        }
        // cout << "Num: " << num << endl;
        if(num>0){
            l.pb('V');
        }else{
            l.pb('P');
        }
    }

    int vito = 0, aux = 0, t = 0;
    for(int i=0; i<=l.size(); i++){
        if(l[i]=='V'){
            vito++;
            t++;
        }else{
            aux = max(aux,vito);
            vito = 0;
        }
    }

    cout << aux << endl;
    
    return 0;   
}