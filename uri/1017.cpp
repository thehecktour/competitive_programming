#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double a,b, result;

    cin >> a >> b;

    result = (a*b)/12;

    cout << fixed << setprecision(3);
    cout << result << endl;

    return 0;

}