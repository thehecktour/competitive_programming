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
        double n,x,y,a,b;

        cin >> n >> x >> y >> a >> b;

        int opcaoA = ((double)n/a)*x, opcaoB = ((double)n/b)*y;

        if(opcaoA<opcaoB){
            cout << "PETROL" << endl;
        }else if(opcaoA > opcaoB){
            cout << "DIESEL" << endl;
        }else{
            cout << "ANY" << endl;
        }

    }

    return 0;   
}