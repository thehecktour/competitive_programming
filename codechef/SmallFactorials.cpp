#include <iostream>
using namespace std;

int main(){

    int a;
    int result;

    cin >> a;

    while(a--){
        int b;
        cin >> b;
        while(b>1){   
            result = 1;
            result *= b;
            b--;
        }
        cout << result << endl;
    }

    return 0;

}