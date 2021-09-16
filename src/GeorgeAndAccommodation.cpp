#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int number_rooms;
    int a,b;
    int counter;

    cin >> number_rooms;

    counter =0;

    for (int i=0; i<number_rooms; i++){
        cin >> a >> b ;
        
        if(a<b){
            counter +=1;
        }

    }

    cout << counter << endl;

}