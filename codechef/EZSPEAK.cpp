#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {  
    
    int a,b,c,d;
    vector<int> l;
    cin >> d;   

    while(d--){
        int a;
        string b;
        cin >> a >> b;

        int contador = 0, total = 0;

        for(int i=0; i<b.length(); i++){
            if((b[i]!='a')&&((b[i]!='e'))&&(b[i]!='i')&&(b[i]!='o')&&(b[i]!='u')){
                contador++;
            }else{
                contador = 0;
            }

            if(contador==4){
                break;
            }
        }
        

        if(contador==4){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }
    
    return 0;   
}