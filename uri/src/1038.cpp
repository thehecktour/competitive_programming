#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int code, quantify;
    double result;

    cin >> code >> quantify;
    cout << fixed << setprecision(2);
    if(code == 1){
        result = (quantify*4.00);
        cout << "Total: R$ " << result << endl;
    }else if(code == 2){
        result = (quantify*4.50);
        cout << "Total: R$ " << result << endl;
    }else if(code == 3){
        result = (quantify*5.00);
        cout << "Total: R$ " << result << endl;
    }else if(code == 4){
        result = (quantify*2.00);
        cout << "Total: R$ " << result << endl;
    }else if(code == 5){
        result = (quantify*1.50);
        cout << "Total: R$ " << result << endl;
    }

}