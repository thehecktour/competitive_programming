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
        int a,b,c,d;
        cin >> a >> b;
        int contador = 1, aux = 1;
        int auxA = 0, auxB = 0;
        int totalA = 0, totalB = 0;

        while(true){
            // cout << "A: " << a << endl;
            // cout << "B: " << b << endl;
            if(totalA>a){
                cout << "Bob" << endl;
                break;
            }else if(totalB>b){
                cout << "Limak" << endl;
                break;
            }else{
                if(aux%2!=0){
                    totalA+=contador;
                }else{
                    totalB+=contador;
                }
            }

            contador++;
            aux++;

        }
    }

    return 0;   
}