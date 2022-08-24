#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {  
    
    int k;
    cin >> k;

    while(k--){
        int x,y,z;

        cin >> x >> y >> z;

        if(x<=y){
            cout << z << endl;
        }else{
            int contador = 0,vezes = 1;

            while(true){
                if((y*vezes)>=x){
                    break;
                }else{
                    vezes++;
                }
            }

            cout << vezes*z << endl;
        }
    }
    
    return 0;   
}