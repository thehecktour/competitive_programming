#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    vector<string> l;
    int n = 15;
    
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            l.push_back("FizzBuzz");
        }else if(i%3==0){
            l.push_back("Fizz");
        }else if(i%5==0){
            l.push_back("Buzz");
        }else{
            l.push_back(to_string(i));
        }
    }
    return 0;   
}