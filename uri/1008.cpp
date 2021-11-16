#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int numeroFuncionario, horasTrabalhadas;
    double valorHora, salario;

    cin >> numeroFuncionario >> horasTrabalhadas >> valorHora;

    salario = (valorHora*horasTrabalhadas);

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;

    return 0;

}