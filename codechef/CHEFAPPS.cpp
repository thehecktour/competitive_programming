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

        if((a-(b+c))>=d){
            cout << 0 << endl;
        }else if(((a-b)>=d)&&((a-c)>=d)){
            cout << 1 << endl;
        }else if(((a-b)>=d)||((a-c)>=d)){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

    }
    return 0;   
}