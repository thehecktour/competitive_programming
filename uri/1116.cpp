#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int k, result;
    double lindo;

    result = 0;

    cin >> k;

    while(k--){
        int x,y;

        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel" << endl;
        }else{
            cout << fixed << setprecision(1);
            lindo = double(x)/double(y);
            cout << lindo << endl;
        }

        result = 0;
    }

    return 0;

}