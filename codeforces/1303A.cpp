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
        string d;
        cin >> d;

        int con = 0;

        for(int i=d.find('1'); i<d.find_last_of('1'); i++){
            if(d[i]=='0'){
                con++;
            }
        }

        cout << con << endl;
    }
    
    return 0;   
}