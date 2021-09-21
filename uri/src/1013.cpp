#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){

    int a,b,c, result;
    int maiorAB;

    cin >> a >> b >> c;

    maiorAB = (a+b+abs(a-b))/2;

    if (maiorAB>c){
        cout << maiorAB << " eh o maior" << endl;
    }else {
        cout << c << " eh o maior" << endl;
    }

}