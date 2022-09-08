#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back
 
using namespace std;
 
int main() {    
 
    int a,b;
 
    cin >> a >> b;
 
    int cont = 1;
 
    while(true){
        if((((a*cont)-b)%10==0)||((a*cont)%10==0)){
            cout << cont << endl;
            break;
        }else{
            cont++;
 
        }
 
    }
 
    return 0;   
}