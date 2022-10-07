#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b,c,d;

    cin >> a >> b >> c >> d;

    cout << max((abs(a-c)), (abs(b-d))) << endl;

    return 0;   
}