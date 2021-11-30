#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(int size, vector<int> vetor, int askedNumber){
    int first = 0;
    int last = size -1;

    while(first <= last){
        int middle = (first + last)/2;
        if(askedNumber < vetor[middle]){
            last = middle - 1;
        }else if(askedNumber> vetor[middle]){
            first = middle +1;
        }else{
            return middle;
        }
    }return -1;
}


int main(){

    vector<int> list;
    int value, size, number;

    cout << "Write the size of this vector: " << endl;
    cin >> size;

    for(int i=0; i<size; i++){
        cin >> value;
        list.push_back(value);
    }

    cout << "Write the number that you are looking for: " << endl;
    cin >> number;

    cout << BinarySearch(size, list, number) << endl;

}