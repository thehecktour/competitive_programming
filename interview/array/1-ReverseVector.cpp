#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> mylist;
    int sizeList;

    cout << "Whats the size of this vector?" << endl;
    cin >> sizeList;

    for(int i=0; i<sizeList; i++){
        int numbers;
        cout  << i+1 << "º number of the vector: " << endl;
        cin >> numbers;
        mylist.push_back(numbers);
    }

    int first, last;

    first = 0;
    last = sizeList - 1;

    while(first<=last){
        int helpVariable;
        helpVariable = mylist[first];
        mylist[first] = mylist[last];
        mylist[last] = helpVariable;
        first++, last--;
    }

    for(int i=0; i<sizeList; i++){
        cout << i << "º number of my list: " << mylist[i] << endl;
    }

}