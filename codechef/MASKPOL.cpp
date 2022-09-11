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
        int a,b,c, d = 0;

        cin >> a >> b;

        cout << min((a-b),(a-(a-b))) << endl;
    }

    return 0;   
}