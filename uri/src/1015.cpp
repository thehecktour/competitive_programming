#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double x1,y1,x2,y2;
    double distancia;
    double calculo1;
    double calculo2;
    double distanciaFinal;

    cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    

    cout << fixed << setprecision(4);
    cout << distancia << endl;

}