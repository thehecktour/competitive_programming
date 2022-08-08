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
        int a,b, c;

        cin >> a >> b >> c;

        if(((a+b+c)>=100)&&((a>=10)&&(b>=10)&&(c>=10))){
            cout << "PASS" << endl;
        }else{
            cout << "FAIL" << endl;
        }
    }

    return 0;   
}