#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main(){

    int sizeVector;
    map<int,int> mapinha;
    vector<int> myList;
    int valor;
    int somador = 0;

    cout << "Whats the size of your vector?" << endl;
    cin >> sizeVector;

    for(int i=0; i<sizeVector; i++){
        int value;
        cout << "Whats the " << i+1 << "º item of your vector?" << endl;
        cin >> value;
        myList.push_back(value);
    }

    cout << "Whats the frequency?" << endl;
    cin >> valor;

    for(int i=0; i<sizeVector; i++){
        if(mapinha.find(myList[i] == valor) == mapinha.end()){
            somador+=1;
        }
    }

    cout << somador << endl;
}