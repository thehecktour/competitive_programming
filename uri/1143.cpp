#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int b;

    cin >> b;

    int x,y,z;

    x=1;
    y=1;
    z=1;

    for(int i=0; i<b; i++){
        cout << x << " " << y << " " << z << endl;
        x+=1;
        y = pow(x,2);
        z = x*y;
    }

    

}