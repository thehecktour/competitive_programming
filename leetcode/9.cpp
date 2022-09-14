#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    string f = "";
    int x = 121;
        
    f = to_string(x);
    
    if(f[0]=='-'){
        return false;
    }else{
        string a;
        
        a = f;
        
        reverse(a.begin(), a.end());
        
        if(a==f){
            return true;
        }else{
            return false;
        }
    }
    return 0;   
}