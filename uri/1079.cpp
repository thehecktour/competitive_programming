#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int valor;
    double a,b,c;
    double media;

    cin >> valor;

    for(int i=0; i<valor; i++){
        cin >> a >> b >> c;
        media = ((a*2)+(b*3)+(c*5))/10;
        cout << fixed << setprecision(1);
        cout << media << endl;
    }

    return 0;

}