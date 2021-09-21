#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){

    double consumoMedio;
    double distanciaTotal;
    double combustivelGasto;

    cin >> distanciaTotal >> combustivelGasto;

    consumoMedio = (distanciaTotal/combustivelGasto);

    cout << fixed << setprecision(3);

    cout << consumoMedio << " km/l" << endl;
    

}