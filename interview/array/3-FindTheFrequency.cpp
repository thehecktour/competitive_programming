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

    cin >> sizeVector;

    for(int i=0; i<sizeVector; i++){
        int value;
        cin >> value;
        myList.push_back(value);
    }

    cin >> valor;

    for(int i=0; i<sizeVector; i++){
        if(mapinha.find(myList[i] == valor) == mapinha.end()){
            somador+=1;
        }
    }

    cout << somador << endl;
}