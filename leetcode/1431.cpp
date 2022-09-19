#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int aux = 0;
    vector<bool> l;
    vector<int> candies = {2,3,5,1,9,4};
    int extraCandies = 4;
    
    for(int i=0; i<candies.size(); i++){
        aux = max(aux, candies[i]);
    }
    
    for(int i=0; i<candies.size(); i++){
        if((candies[i]+extraCandies)>=aux){
            l.push_back(true);
        }else{
            l.push_back(false);
        }
    }
    
    return 0;   
}