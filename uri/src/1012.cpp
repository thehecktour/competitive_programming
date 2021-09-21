#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double A,B,C;
    double triangulo;
    double circulo;
    double trapezio;
    double quadrado;
    double retangulo;
    double pi;

    cin >> A >> B >> C;

    pi = 3.14159;

    triangulo = (A*C)/2;
    circulo = (pi*pow(C,2));
    trapezio = ((A+B)*C)/2;
    quadrado = (B*B);
    retangulo = (A*B);

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

}