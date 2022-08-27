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
        int a,b,c,d;

        cin >> a >> b >> c >> d;

        cout << max((b*7),((a*c)+(d*(7-a)))) << endl;
        
    }
    
    return 0;   
}