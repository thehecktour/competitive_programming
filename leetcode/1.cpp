#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    vector<int> listinha, nums={1,2,3,5};
    map<int,int> mapinha;
    int target = 8;
    
    for(int i=0; i<nums.size(); i++){
        if(mapinha.find(target-nums[i])!=mapinha.end()){
            listinha.push_back(mapinha[target-nums[i]]);
            listinha.push_back(i);
        }else{
            mapinha[nums[i]] = i; 
        }
        
    }
    
    return 0;   
}