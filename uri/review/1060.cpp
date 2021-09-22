#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main(){

    int a;
    int pos;
    int positivo;
    int negativo;

    positivo = 0;
    negativo =0;
    pos =0;

    do{
        cin >> a;
        if (a<0){
            negativo +=1;
        }else if(a>0){
            positivo +=1;
        }else if(a==0){
            positivo +=1;
        }
        pos += 1;
    }while (pos<6); 

    cout << positivo << " valores positivos" << endl;
}