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
        int pa,pb,qa,qb;

        cin >> pa >> pb >> qa >> qb;

        int rUm = max(pa,pb), rDois = max(qa,qb);

        if(rUm==rDois){
            cout << "TIE" << endl;
        }else if(rUm<rDois){
            cout << "P" << endl;
        }else if(rDois < rUm){
            cout <<"Q" << endl;
        }
    }
    
    return 0;   
}