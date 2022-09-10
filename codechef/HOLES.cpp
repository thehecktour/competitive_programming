#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int z;
    cin >> z;

    while(z--){
        string f;
        cin >> f;

        int aux = 0;

        for(int i=0; i<f.length(); i++){
            if((f[i]=='A')||(f[i]=='D')||(f[i]=='O')||(f[i]=='P')||(f[i]=='R')||(f[i]=='Q')){
                aux++;
            }else if(f[i]=='B'){
                aux++;
                aux++;
            }
            
        }

        cout << aux << endl;
        
    }

    return 0;   
}