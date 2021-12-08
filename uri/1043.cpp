#include <iostream>
#include <iomanip>
using namespace std;

double checkTriangle(double a, double b, double c){
    if(a + b <= c || b + c <= a || a + c <= b){
        return false;
    }else{
        return true;
    }
}

int main(){

    double a,b,c;
    double perimetro;
    double area;

    cin >> a >> b >> c;

    if(checkTriangle(a,b,c) == true){
        perimetro = (a+b+c);
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    }else if(checkTriangle(a,b,c) == false){
        area = ((a+b)*c)/2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
}