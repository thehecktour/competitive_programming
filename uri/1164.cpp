#include <iostream>
using namespace std;

int main(){

    int k;

    cin >> k;

    while(k--){
        int f;
        int sum;

        sum =0;
        cin >> f;

        for(int i=1; i<f; i++){
            if(f%i==0){
                sum+=i;
            }    
        }

        if(sum==f){
            cout << f << " eh perfeito" << endl;
        }else {
            cout << f << " nao eh perfeito" << endl;
        }

    }

}