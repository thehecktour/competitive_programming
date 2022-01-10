#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> lindinho;
    int k;

    for(int i=0; i<10; i++){
        cin >> k;
        lindinho.push_back(k);
    }

    for(int i=0; i<10; i++){
        if(lindinho[i]<=0){
            lindinho[i] = 1;
        }
        cout << "X" << "[" << i << "]" << " = " << lindinho[i] << endl;
    }

}