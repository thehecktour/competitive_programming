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
        int a,b,c;

        cin >> a >> b >> c;

        if(a>=b){
            cout << "PIZZA" << endl;
        }else if(a<b && a>=c){
            cout << "BURGER" << endl;
        }else{
            cout << "NOTHING" << endl;
        }

       
    }


    return 0;   
}