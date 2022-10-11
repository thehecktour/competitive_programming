#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b, c;
    vector<int> l;
    cin >> a >> b;

    c = a;

    while(a--){
        int f;
        cin >> f;
        l.pb(f);
    }

    sort(l.begin(), l.end());
    c--;
    int soma = 0;

    for(int i=0; i<c; i++){
        soma+=l[i];
    }

    if(soma>b){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    
    return 0;   
}