#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string nomeVendedor;
    double salarioFixo, vendasEfetuadas, salarioTotal;

    cin >> nomeVendedor >> salarioFixo >> vendasEfetuadas;

    salarioTotal = (salarioFixo + (vendasEfetuadas*0.15));

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioTotal << endl;


    return 0;
}