#include <iostream>
using namespace std;

int main(){

    int x,y;
    int soma;

    cin >> x >> y;

    soma = 0;

    if(x>y){
        for(int i=x; i<=y; i++){
            if(i%13!=0){
                soma +=i;
            }
        }
        cout << soma << endl;
    }else if(y>x){
        for(int i=y; i<=x; i++){
            if(i%13!=0){
                soma +=i;
            }
        }
        cout << soma << endl;
    }


    return 0;

}