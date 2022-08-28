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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if((a+(c*10))<((b+(d*10)))){
            cout << "Chef" << endl;
        }else if((a+(c*10))>((b+(d*10)))){
            cout << "Chefina" << endl;
        }else{
            cout << "Draw" << endl;
        }

    }

    return 0;   
}