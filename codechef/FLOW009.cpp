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
        double a,b;

        cin >> a >> b;

        if(a<=1000){
            cout << fixed << setprecision(6);
            cout << a*b << endl;
        }else if(a>1000){
            double f = a*b;
            f = f-((f*10)/100);
            cout << fixed << setprecision(6);
            cout << f << endl;
        }
    }

    return 0;   
}