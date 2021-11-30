#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> myList;
    int size;

    cin >> size;

    for(int i=0; i<size ; i++){
        int numbers;
        cin >> numbers;
        myList.push_back(numbers);
    }

    int helpGuy;
    for(int i=0; i<size; i++){
        for(int l=0; l<i; l++){
            if(myList[i]<myList[l]){
                helpGuy = myList[i];
                myList[i] = myList[l];
                myList[l] = helpGuy;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout << "Vector in the position " << i << " is equal: " << myList[i] << endl;
    }

}