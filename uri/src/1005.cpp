#include <iomanip>
#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){

    double A,B;
    double result;

    cin >> A >> B;

    result = ((A*3.5)+(B*7.5))/11;

    cout << fixed << setprecision(5);
    cout <<"MEDIA = " << result << endl;

}