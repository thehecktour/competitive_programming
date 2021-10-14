#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double x1,y1,x2,y2, first_result, final_result;

    cin >> x1 >> y1 >> x2 >> y2;

    first_result = (pow(x2-x1,2)+ pow(y2-y1,2));
    final_result = sqrt(first_result);

    cout << fixed << setprecision(4);
    cout << final_result << endl;

}