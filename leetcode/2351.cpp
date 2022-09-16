#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    map<char,int> mapinha;
    char c;
    string s = "abcdd";
    
    for(int i=0; i<s.length(); i++){
        if(mapinha.count(s[i])){
            c = s[i];
            break;
        }
        mapinha[s[i]]++;
    }
    
    return c;
}