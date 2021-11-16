#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double peca1, numeroPecas1, valorUnitario1;
    double peca2, numeroPecas2, valorUnitario2;
    double resultado;


    cin >> peca1 >> numeroPecas1 >> valorUnitario1;
    cin >> peca2 >> numeroPecas2 >> valorUnitario2;

    resultado = ((numeroPecas1*valorUnitario1)+(numeroPecas2*valorUnitario2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << resultado << endl;

    return 0; 

}