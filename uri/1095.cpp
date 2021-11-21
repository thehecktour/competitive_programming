#include <iostream>
using namespace std;

int main(){

    int i,j;

    i = 1;
    j = 60;

    while(true){
        cout << "I=" << i << " J=" << j << endl;
        if(j==0){
            break;
        }
        i+=3;
        j-=5;
    }

    return 0;

}