#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    double a,b;
    char c;

    cin >> a >> b >> c;

    if(c=='/'){
        cout << fixed << setprecision(1);
        cout << a/b << endl;
    }else if(c=='+'){
        cout << a+b << endl;
    }else if(c=='-'){
        cout << a-b << endl;
    }else if(c=='*'){
        cout << a*b << endl;
    }

    return 0;   
}