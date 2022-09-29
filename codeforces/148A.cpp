#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a,b,c,d,e;

    cin >> a >> b >> c >> d >> e;

    int contador = 0;

    for(int i=1; i<=e; i++){
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;   
}