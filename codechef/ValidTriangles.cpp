#include <iostream>
using namespace std;

int main(){

    int k;

    cin >> k;

    while(k--){
        int a,b,c;
        cin >> a >> b >> c;

        int res;
        res = (a+b+c);

        if(res==180){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;

}