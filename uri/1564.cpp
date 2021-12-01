#include <iostream>
using namespace std;

int main(){

    int x;

    while(scanf("%d", &x) != EOF){
        if(x<=0){
            cout << "vai ter copa!" << endl;
        }else{
            cout << "vai ter duas!" << endl;
        }
    }

}