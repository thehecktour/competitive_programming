#include <iostream>
using namespace std;

int main(){

    int f;

    cin >> f;
    
    while(f--){
        int a,b;

        cin >> a >> b;

        if(a<b){
            cout << "<\n";
        }else if(b<a){
            cout << ">\n";
        }else if(a==b){
            cout << "=\n";
        }

    }
    return 0;
}