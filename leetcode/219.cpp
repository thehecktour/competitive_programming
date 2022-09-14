#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main(){    
    unordered_map<int, int> mapinha;
    vector<int> nums = {};
    int k = 1;

    for(int i=0; i<nums.size(); i++){
        if(mapinha.count(nums[i])){
            if(abs(mapinha[nums[i]]-i)<=k){
                return true;
            }
        }
        mapinha[nums[i]] = i;
    }
    

    return 0;   
}