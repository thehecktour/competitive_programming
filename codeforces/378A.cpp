#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int a,b;
    cin >> a >> b;

    int c = 6;
    int rA = 0, rB = 0, rN = 0;
    
    while(true){
        if(c==0){
            break;
        }
        if(abs(c-b)>abs(c-a)){
            rB++;
        }else if(abs(c-a)>abs(c-b)){
            rA++;
        }else{
            rN++;
        }
        c--;
    }

    cout << rB << " " << rN << " " << rA << endl;

    return 0;   
}