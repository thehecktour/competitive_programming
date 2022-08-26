#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    vector<int> nums;
    int target;

    int comeco, meio, fim, paradinha;
        
    comeco = 0;
    fim = nums.size()-1;
    
    while(comeco<=fim){
        meio = (comeco+fim)/2;
        
        if(nums[meio]==target){
            return meio;
        }else if(nums[meio] < target){
            comeco = meio+1;
        }else{
            fim = meio-1;
        }
    }

    return comeco;

}