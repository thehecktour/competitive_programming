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
        int f;
        cin >> f;
        int maior = 0;

        while(f--){
            int a;
            cin >> a;
            if(a>maior){
                maior = a;
            }
        }

        cout << maior << endl;
    }

    return 0;   
}