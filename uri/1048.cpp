#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(void) {
    double s, r;
 
    cin >> s;
 
    if(s > 0 && s <= 400) r = 0.15;
    else if(s >= 400.01 && s <= 800) r = 0.12;
    else if(s >= 800.01 && s <= 1200) r = 0.10;
    else if(s >= 1200.01 && s <= 2000) r = 0.07;
    else if(s > 2000) r = 0.04;
 
    cout << "Novo salario: " << fixed << setprecision(2) << s + s * r << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << s * r << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << r * 100 << " %"<< endl;
    
    return 0;
}