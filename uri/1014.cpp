#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double consumoMedio, distanciaTotal, combustivelGasto;

    cin >> distanciaTotal >> combustivelGasto;

    consumoMedio = (distanciaTotal/combustivelGasto);

    cout << fixed << setprecision(3);
    cout << consumoMedio << " km/l" << endl;

    return 0;

}