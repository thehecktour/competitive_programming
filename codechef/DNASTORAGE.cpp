#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    vector<int> l = {100,50,20,10,5,2,1};

    int k;
    cin >> k;

    while(k--){
        int f;
        string b;
        cin >> f >> b;

        string final = "";

        for(int i=0; i<b.length(); i++){
            if(b[i]=='0'&&b[i+1]=='0'){
                final+="A";
            }else if(b[i]=='0'&&b[i+1]=='1'){
                final+="T";
            }else if(b[i]=='1'&&b[i+1]=='0'){
                final+="C";
            }else if(b[i]=='1'&&b[i+1]=='1'){
                final+="G";
            }
            i++;
        }

        cout << final << endl;

    }
    
    return 0;   
}