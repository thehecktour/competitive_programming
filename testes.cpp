#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() { 
    long long int x; 
    cin>>x; 

    for(int i=1;i<=x;i++){ 
        cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl; 
        cout<<i<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<endl; 
    }

    return 0; 
}