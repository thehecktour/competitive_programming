#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x,y;
    double result;

    cin >> x >> y;

    result = (x*y)/12.0;

    cout << fixed << setprecision(3);
    cout << result << endl;

}