#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int b;

    cin >> b;
    int listinha[b];

    for(int i=0; i<b; i++){
        int a;
        cin >> listinha[i];
        
    }

    sort(listinha, listinha+b);

    for(int i=0; i<b; i++){
        cout << listinha[i] << endl;
    }

}