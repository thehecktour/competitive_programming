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
            int a,b,c;

            b = 10;
            int contador = 1;

            int timeUm = 0, timeDois = 0;

            while(b--){
                int f;
                cin >> f;
                if(contador%2!=0){
                    if(f==1){
                        timeUm++;
                    }
                }else{
                    if(f==1){
                        timeDois++;
                    }
                }

                contador++;
            }

            if(timeUm>timeDois){
                cout << 1 << endl;
            }else if(timeDois>timeUm){
                cout << 2 << endl;
            }else{
                cout << 0 << endl;
            }
            
        }

        return 0;   
    }