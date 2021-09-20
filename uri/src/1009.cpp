#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    string nome;
    double salary;
    double vendas;
    double comisao;
    double total;

    cin >> nome >> salary >> vendas;

    comisao = (vendas*0.15);

    total = (salary + comisao);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

}