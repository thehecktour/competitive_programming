#include <iostream>
using namespace std;

int main(){

    int k;
    cin >> k;

    if(k%4==0){
        int r;
        r = (k+1);
        cout << r << endl;
    }else{
        int r;
        r = (k-1);
        cout << r << endl;
    }

}