#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    vector<int> nums = {1,2,3,4};
    vector<int> l;
    int aux = 0;
    
    for(int i=0; i<nums.size(); i++){
        aux+=nums[i];
        l.push_back(aux);
    }
    
}