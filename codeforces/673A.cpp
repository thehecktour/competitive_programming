#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {

    int k;
    vector<int> l;
    cin >> k;

    while(k--){
        int f;
        cin >> f;
        l.pb(f);
    }
    
    int aux = 15;
    if(l.size()==1){
        if(l[0]>15){
            cout << 15 << endl;
        }else{
            cout << l[0]+15 << endl;
        }
    }else if(l[0]>15){
        cout << 15 << endl;
    }else{
        for(int i=0; i<l.size(); i++){
            if(l[i]){
                aux=(l[i]+15);
            }
            if(l[i+1]>aux){
                break;
            }
        }

        if(aux>l[l.size()-1]){
            if((l[l.size()-1]+15)>=90){
                cout << 90 << endl;
            }else{
                cout << l[l.size()-1]+15 << endl;
            }

        }else{
            cout << aux << endl;
        }
        
    }
    
    return 0;      
}