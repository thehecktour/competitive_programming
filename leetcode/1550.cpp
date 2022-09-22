#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int contador = 0;
    vector<int> l, arr = {1,1,1};
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2!=0){
            contador++;
            cout << "Cont 1 - " << contador << endl;        
        }else{
            cout << "Cont 2 - " << contador << endl;
            l.push_back(contador);
            contador = 0;
        }

        if(contador==3){
            l.push_back(contador);
        }
    }

    for(auto i:l){
        if(i==3){
            return true;
        }
    }

    return 0;   
}