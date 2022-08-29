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
        cin >> a >> b >> c;

        if((a>b)&&(a>c)&&(a>50)){
            cout << "A" << endl;
        }else if((b>a)&&(b>c)&&(b>50)){
            cout << "B" << endl;
        }else if((c>b)&&(c>a)&&(c>50)){
            cout << "C" << endl;
        }else{
            cout << "NOTA" << endl;
        }
    }

    return 0;   
}