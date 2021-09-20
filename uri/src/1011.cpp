#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double pi;
    double formula;
    int raio;

    cin >> raio;

    pi = 3.14159;

    formula = ((4.0/3)*pi*pow(raio,3));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << formula << endl;

}