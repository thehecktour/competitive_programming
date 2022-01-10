#include <iostream>
using namespace std;

int main(){

    int k;
    int countEven, countOdd;

    countEven = 0;
    countOdd = 0;

    cin >> k;

    while(k--){
        int f;
        cin >> f;
        if(f%2==0){
            countEven +=1;
        }else{
            countOdd +=1;
        }
    }

    if(countEven>countOdd){
        cout << "READY FOR BATTLE" << endl;
    }else{
        cout << "NOT READY" << endl;
    }

}