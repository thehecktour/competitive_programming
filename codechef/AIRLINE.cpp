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
        int a,b,c,d, e;
        cin >> a >> b >> c >> d >> e;    
        
        if((((a+b)<=d)&&(c<=e))||(((a+c)<=d)&&(b<=e))||(((b+c)<=d)&&(a<=e))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;   
}