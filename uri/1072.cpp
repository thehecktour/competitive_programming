#include <iostream>
using namespace std;

int main(){

    int valor, tamanho;
    int in,out;

    cin >> valor;

    in = 0;
    out = 0;

    for(int i=0; i<valor; i++){
        cin >> tamanho;
        if(tamanho>=10 && tamanho <=20){
            in +=1;
        }else{
            out +=1;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

}