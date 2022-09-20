#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    int k;

    cin >> k;


    if(k==1){
        cout << -1 << endl;
    }else if(k==2 || k==3){
        cout << 2 << " " << 2 << endl;
    }else{
        int e = k/2;
        while(true){
            if((((e)*(e/2))>k) && ((e%(e/2))==0)){
                break;
            }else{
                e++;
            }
        }

        cout << e << " " << e/2 << endl;
    }
    

    return 0;   
}