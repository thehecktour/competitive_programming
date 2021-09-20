#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int numero_funcionario;
    int horas_trabalhadas;
    double valor_hora;
    double salary;

    cin >> numero_funcionario >> horas_trabalhadas >> valor_hora;

    salary = (horas_trabalhadas*valor_hora);

    cout << "NUMBER = " << numero_funcionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;

}