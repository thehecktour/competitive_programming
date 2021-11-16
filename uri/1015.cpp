#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double x1,y1,x2,y2;
    double result1, result;

    cin >> x1 >> y1 >> x2 >> y2;

    result1 = (pow(x2-x1,2)+pow(y2-y1,2));
    result = sqrt(result1);

    cout << fixed << setprecision(4);
    cout << result << endl;


    return 0;
}