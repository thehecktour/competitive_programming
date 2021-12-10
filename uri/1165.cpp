#include <iostream>
using namespace std;

int main(){

    int g;

    cin >> g;

    while(g--){
        int j;
        int sum;

        sum =0;
        cin >> j;

        for(int i=1; i<=j; i++){
            if(j%i==0){
                sum+=1;
            }
        }

        if(sum==2){
            cout << j << " eh primo" << endl;
        }else {
            cout << j << " nao eh primo" << endl;
        }
    }

}