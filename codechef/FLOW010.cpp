#include <iostream>
using namespace std;

int main(){

    int k;

    cin >> k;

    while(k--){
        string pa;

        cin >> pa;

        if(pa=="B" || pa=="b"){
            cout << "BattleShip" << endl;
        }else if(pa=="C" || pa=="c"){
            cout << "Cruiser" << endl;
        }else if(pa=="D" || pa=="d"){
            cout << "Destroyer" << endl;
        }else if(pa=="F" || pa=="f"){
            cout << "Frigate" << endl;
        }
    }

}