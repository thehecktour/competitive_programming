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
        int a,b;

        cin >> a >> b;
        int contador = 0;

        if((a%2!=0 && b%2==0)||(a%2==0 && b%2!=0)){
            if(a>b){
                a++;
                while(a!=b){
                    a--;
                    b++;
                    contador++;
                }
            }else if(b>a){
                b++;
                while(a!=b){
                    a++;
                    b--;
                    contador++;
                }
            }
        }else{
            if(a>b){
                while(a!=b){
                    a--;
                    b++;
                    contador++;
                }
            }else if(b>a){
                while(a!=b){
                    a++;
                    b--;
                    contador++;
                }
            }
        }


        cout << contador << endl;
    }

    return 0;   
}