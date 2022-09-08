#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int d;
    vector<int> l;
    cin >> d;
    
    while(d--){
        int f,e = 0;
        cin >> f;

        e = f;
        l.clear();
        while(f--){
            int a;
            cin >> a;
            l.pb(a);
        }

        int mas = 0, rrr = 0;

        for(int i=0; i<l.size(); i++){
            if(l[i]>=mas){
                mas = l[i];
                rrr = i+1;
            }
        }

        cout << rrr << endl;
    }

    return 0;   
}