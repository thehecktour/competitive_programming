#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double pi, radius, result;

    pi = 3.14159;

    cin >> radius;

    result = ((4/3.0)*pi* pow(radius, 3));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << result << endl;

}