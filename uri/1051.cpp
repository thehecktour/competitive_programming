#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double salary;

    cin >> salary;

    if(salary>=0.0 && salary <=2000.00){
        cout << "Isento" << endl;
    }else if(salary>=2000.01 && salary <=3000.00){
        double tax;
        tax = (salary*0.08);
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }else if(salary>=3000.01 && salary<=4500.00){
        double tax;
        tax = ((salary-1000.00)*0.18);
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }else if(salary> 4500.00){
        double tax;
        tax = ((salary-1000.00)*0.28);
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }

}