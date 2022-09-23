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
        l.clear();
        while(f--){
            int a;
            cin >>a ;
            l.pb(a);
        }

        sort(l.begin(), l.end());
        bool lindo = false;
        
        if(l.size()==1){
            lindo = true;
            // lindo
        }else{
            for(int i=0; i<l.size()-1; i++){
                // cout << "l[i] - " << l[i] << endl;
                // cout << "l[i+1] - " << l[i+1] << endl;
                if(abs(l[i]-l[i+1])<=1){
                    lindo = true;
                }else{
                    lindo = false;
                    break;
                }
            }
        }

        if(lindo == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;   
}