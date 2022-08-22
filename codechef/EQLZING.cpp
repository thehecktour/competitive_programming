#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {  
    
    int a,b,c,d;

    cin >> d;

    while(d--){
        cin >> a >> b;

        if(a==b){
            cout << "Yes" << endl;
        }else if(((a%2==0)&&(b%2!=0))||((b%2==0)&&(a%2!=0))){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    
    return 0;   
}