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
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;

        int pa = 0, pb = 0;

        if(a>d){
            pa++;
        }else if(d>a){
            pb++;
        }

        if(b>e){
            pa++;
        }else if(e>b){
            pb++;
        }

        if(c>f){
            pa++;
        }else if(f>c){
            pb++;
        }

        if(pa>pb){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }


    return 0;   
}