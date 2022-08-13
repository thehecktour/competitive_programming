#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    vector<int> l = {100,50,10,5,2,1};

    int k;

    cin >> k;

    while(k--){
        int f;
        cin >> f;
        int contador = 0, i = 0;

        while(f>0){
            if(f>=l[i]){
                f = f-l[i];
                contador++;
            }else{
                i++;
            }
        }

        cout << contador << endl;
    }

    return 0;   
}