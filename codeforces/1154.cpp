#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int x1,x2,x3,x4;
    vector<int> l;

    cin >> x1 >> x2 >> x3 >> x4;

    l.pb(x1);
    l.pb(x2);
    l.pb(x3);
    l.pb(x4);

    sort(l.begin(), l.end());

    int aux1 = l[l.size()-1], aux2 = l[l.size()-2], aux3 = l[0], aux4 = l[l.size()-3];

    cout << aux1-aux2 << " "<< aux1-aux3 << " " << aux1-aux4 <<endl;

    return 0;   
}