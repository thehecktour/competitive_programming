#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int soma = 0;

    for(int i=1; i<=1000; i++){
        if(i%3==0 || i%5==0){
            soma+=i;
        }
    }

    cout << soma << endl;
    return 0;   
}