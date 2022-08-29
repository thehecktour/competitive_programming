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
        int a,b,c;
        string d;

        cin >> a >> d;

        int n = 0, ii = 0, y = 0;

        for(int i=0; i<d.length(); i++){
            if(d[i]=='N'){
                n++;
            }else if(d[i]=='I'){
                ii++;
            }else{
                y++;
            }
        }

        if(ii==0 && y>0){
            cout << "NOT INDIAN" << endl;
        }else if(ii>0 && y==0){
            cout << "INDIAN" << endl;
        }else{
            cout << "NOT SURE" << endl;
        }

    }

    return 0;   
}