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
        int f = a/b;
        
        if(f%2==0 && a%b==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;   
}