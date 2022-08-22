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
        cin >> a >> b >> c;

        if((((a+b)/2)<35)||(((b+c)/2)<35)||(((a+c)/2)<35)){
            cout << "Fail" << endl;
        }else{
            cout << "Pass" << endl;
        }
    }
    
    return 0;   
}