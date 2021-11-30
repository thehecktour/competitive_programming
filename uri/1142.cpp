#include <iostream>
using namespace std;

int main(){

    int valor;

    cin >> valor;

    int a,b,c;

    a = 1;
    b = 2;
    c = 3;

    for(int i=0; i<valor; i++){
        cout << a;
        a+=4;
        cout << " ";
        cout << b ;
        b+=4;
        cout << " ";
        cout << c;
        cout << " PUM";
        c+=4;
        cout << endl;
    }    

    return 0;

}