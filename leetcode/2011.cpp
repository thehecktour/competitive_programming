#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int aux = 0;
    vector<string> operations = {"--X","X++","X++"};
        
    for(int i=0; i<operations.size(); i++){
        if(operations[i]=="--X" || operations[i]=="X--"){
            aux--;
        }else{
            aux++;
        }
    }
    
    return aux;
}