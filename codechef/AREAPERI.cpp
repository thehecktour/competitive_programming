#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b;
    cin >> a >> b;

    int peri, area;

    peri = (a+b)*2;
    area = a*b;

    if(area > peri){
        cout << "Area" << endl;
        cout << area;
    }else if(peri > area) {
        cout << "Peri" << endl;
        cout << peri;
    }else{
        cout << "Eq" << endl;
        cout << peri << endl;
    }



    return 0;   
}