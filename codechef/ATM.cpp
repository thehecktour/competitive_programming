#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int y;
    double x;

    cin >> y >> x;

    if(y%5==0 && y<=x-0.5){
        double r = (x-y-0.5);
        cout << fixed << setprecision(2);
        cout << r << endl;
    }else{
        cout << fixed << setprecision(2);
        cout << x << endl;
    }
}