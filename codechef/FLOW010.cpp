#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int a;
    cin >> a;

    while(a--){
        char f;
        cin >> f;

        f = tolower(f);

        if(f=='b'){
            cout << "BattleShip" << endl;
        }else if(f=='c'){
            cout << "Cruiser" << endl;
        }else if(f=='d'){
            cout << "Destroyer" << endl;
        }else if(f=='e'){
            cout << "Frigate" << endl;
        }
    }
    return 0;   
}