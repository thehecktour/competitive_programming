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

        int aux = 0;
        
        while(true){
            if(f<=0){
                break;
            }else{
                f = f-((int)sqrt(f)*(int)sqrt(f));
                aux++;
            }
        }

        cout << aux << endl;
    }
  
    return 0;   
}