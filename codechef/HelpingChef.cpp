#include <iostream>
using namespace std;

int main(){

    int f;

    cin >> f;

    while(f--){
        int k;
        cin >> k;

        if(k<10){
            cout << "Thanks for helping Chef!" << endl;
        }else{
            cout << "-1" << endl;
        }
    }

}