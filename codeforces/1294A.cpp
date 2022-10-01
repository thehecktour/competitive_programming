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
        int a,b,c,d;

        l.clear();

        cin >> a >> b >> c >> d;

        l.pb(a);
        l.pb(b);
        l.pb(c);

        sort(l.begin(), l.end());

        int auxUm = 0, auxDois = 0;

        auxUm = l[2]-l[1];
        auxDois = l[2]-l[0];

        if(((d-(auxDois+auxUm))%3==0)&&(d>=(auxDois+auxUm))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;   
}