#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double resultado, pi, raio;

    pi = 3.14159;

    cin >> raio;

    resultado = ((4/3.0)*pi*pow(raio,3));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << resultado << endl;


    return 0;
}