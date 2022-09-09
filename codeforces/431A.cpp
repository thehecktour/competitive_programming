#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b,c,d;
    string e;

    cin >> a >> b >> c >> d >> e;

    int cont = 0;

    for(int i=0; i<e.length(); i++){
        if(e[i]=='1'){
            cont+=a;
        }else if(e[i]=='2'){
            cont+=b;
        }else if(e[i]=='3'){
            cont+=c;
        }else if(e[i]=='4'){
            cont+=d;
        }
    }

    cout << cont << endl;

    return 0;   
}