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
        string f;
        map<int, int> mapinha = {
            {1,0},
            {2,0},
            {3,0},
            {4,0},
            {5,0},
            {6,0},
            {7,0},
            {8,0},
            {9,0},
        };

        mapinha.clear();

        cin >> f;
        for(int i=0; i<f.length(); i++){
            if(f[i]=='1'){
                mapinha[1]++;
            }else if(f[i]=='2'){
                mapinha[2]++;
            }else if(f[i]=='3'){
                mapinha[3]++;
            }else if(f[i]=='4'){
                mapinha[4]++;
            }else if(f[i]=='5'){
                mapinha[5]++;
            }else if(f[i]=='6'){
                mapinha[6]++;
            }else if(f[i]=='7'){
                mapinha[7]++;
            }else if(f[i]=='8'){
                mapinha[8]++;
            }else if(f[i]=='9'){
                mapinha[9]++;
            }
        }
        int soma = 0;
        for(auto i:mapinha){
            if(i.first){
                while(i.second--){
                    soma+=i.first;
                }
            }
        }

        cout << soma << endl;
    }

    return 0;   
}