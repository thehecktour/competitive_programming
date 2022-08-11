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
        int a;
        string b;
        cin >> a >> b;

        string f = "";

        for(int i=0; i<b.length(); i++){
            if(b[i]=='A'){
                f+="T";
            }else if(b[i]=='T'){
                f+="A";
            }else if(b[i]=='C'){
                f+="G";
            }else if(b[i]=='G'){
                f+="C";
            }
        }

        cout << f << endl;
    }
    return 0;   
}