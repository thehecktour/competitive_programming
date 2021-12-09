#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> myList;
    int size;

    cin >> size;

    for(int i=0; i<size; i++){
        int number;
        cin >> number;
        myList.push_back(number);
    }

    int first, last;

    first = 0;
    last = size-1;

    while(first<=last){
        int helpGuy;
        helpGuy = myList[first];    
        myList[first] = myList[last];
        myList[last] = helpGuy;
        first++, last--;    
    }

    for(int i=0; i<size; i++){
        cout << myList[i] << endl;
    }

}