#include <iostream>
using namespace std;

int main(){

    double nota;
    double soma, media;
    int tempo;

    tempo = 0;

    while(true){
        cin >> nota;
        if(nota>=0 && nota <=10){
            soma+=nota;
            tempo +=1;
            if(tempo ==2){
                break;
            }
        }else{
            cout << "nota invalida" << endl;
        }
    }


    media = (soma/2);
    cout << "media = " << media << endl;

    return 0;
}