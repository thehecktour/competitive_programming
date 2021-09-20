#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int pecas1, numero_pecas1;
    double valor_pecas1;
    int pecas2, numero_pecas2; 
    double valor_pecas2;
    double total;

    cin >> pecas1 >> numero_pecas1 >> valor_pecas1;
    cin >> pecas2 >> numero_pecas2 >> valor_pecas2;

    total = ((numero_pecas1*valor_pecas1)+(numero_pecas2*valor_pecas2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

}
