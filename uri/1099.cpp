#include <iostream>
using namespace std;

int main(){

    int i;
    int sum;

    sum = 0;
    cin >> i;

    while(i--){
        int a,b;
        cin >> a >> b;

        if(a>b){
            for(int i=b+1; i<a; i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
        }else if(b>a){
            for(int i=a+1; i<b; i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
        }
        
        cout << sum << endl;
        sum = 0;
    }

}