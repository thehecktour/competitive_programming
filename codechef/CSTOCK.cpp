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
        double s,a,b,c;

        cin >> s >> a >> b >> c;

        if(c<0){
            s = s-(s*(abs(c)/100));
            if(s>=a && s<=b){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else if(c>=0){
            s = s+(s*(c/100));
            if(s>=a && s<=b){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }

    }
    
    return 0;   
}