#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double x,y;
    double fim;
    double ultimate;

    cin >> x >> y;

    fim = (100*y)/x;
    ultimate = fim - 100;
    
    cout << fixed << setprecision(2);
    cout << ultimate << "%" << endl;
    //fim = (100*y)/x; 

}