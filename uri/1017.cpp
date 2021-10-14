#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a,b;
    double result;

    cin >> a >> b;

    result = (a*b)/12;

    cout << fixed << setprecision(3);
    cout << result << endl;

}