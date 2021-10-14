#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int km;
    double liter, result;

    cin >> km >> liter;

    result = (km/liter);

    cout << fixed << setprecision(3);
    cout << result << " km/l" << endl;

}