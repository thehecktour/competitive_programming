#include <iostream>
using namespace std;

int main(){

    int a,b;
    int g;
    g=0;
    cin >> a >> b;

    for(int i=0; i<a; i++){
        int numero;
        cin >> numero;
        if(numero%b==0){
            g+=1;
        }
    }

    cout << g << endl;

}