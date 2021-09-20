#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double area;
    double raio;
    double pi;

    pi = 3.14159;

    cin >> raio;

    area = (pi*pow(raio,2));

    cout << fixed << setprecision(4);
    cout << "A="<< area << endl;

}