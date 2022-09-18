#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    string lindona = "", address = "1.1.1.1";
        
    for(auto i:address){
        if(i=='.'){
            lindona+="[.]";
        }else{
            lindona+=i;
        }
    }
    
    return 0;
}