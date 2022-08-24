#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {  
    
    int n,h,x;
    map<int,int> mapinha;

    cin >> n >> h >> x;
    bool lindo = false;
    while(n--){
        int f;
        cin >> f;
        mapinha[f]++;

        if(mapinha.count(f)){
            if((f+x)==h){
                lindo = true;
                break;
            }
        }
    }

    if(lindo == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 
    return 0;   
}