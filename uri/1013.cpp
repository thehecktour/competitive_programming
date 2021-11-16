#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,b,c;

    cin >> a >> b >> c;

    int maiorAB;

    maiorAB = (a+b+abs(a-b))/2;

    if(maiorAB>c){
        cout << maiorAB << " eh o maior" << endl;
    }else{
        cout << c << " eh o maior" << endl;
    }

    return 0;
}