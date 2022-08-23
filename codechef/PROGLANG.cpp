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
        int a,b,a1,b1,a2,b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        
        int contador = 0;

        if(((a==a1)&&(b==b1))||(a==b1)&&(b==a1)){
            contador = 1;
        }else if(((a==a2)&&(b==b2))||(a==b2)&&(b==a2)){
            contador = 2;
        }

        cout << contador << endl;
    }
    
    return 0;   
}