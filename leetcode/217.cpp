#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    map<int,int> mapinha;
    vector<int> nums = {};

    for(int i=0; i<nums.size(); i++){
        if(mapinha.count(nums[i])){
            return true;
        }
        
        mapinha[nums[i]]++;
    }
    
    return 0;   
}