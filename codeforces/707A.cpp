#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    
    int a,b;
    map<char,int> mapinha;

    cin >> a >> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            char f;
            cin >> f;
            mapinha[f]++;
        }
    }

    int be = 0, w =0, o = 0, g=0;

    for(auto i:mapinha){
        if(i.first == 'B'){
            be++;
        }else if(i.first == 'W'){
            w++;
        }else if(i.first!='B' && i.first != 'W' && i.first !='G'){
            o++;
        }else if(i.first=='G'){
            g++;
        }
    }

    if(o>0){
        cout << "#Color" << endl;
    }else if((g==1 && w==1 && be==1)||(g==w==be)){
        cout << "#Black&White" << endl;
    }else{
        cout << "#Black&White" << endl;
    }

    return 0;   
}