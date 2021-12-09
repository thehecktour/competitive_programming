#include <iostream>
using namespace std;

int main(){

    int a,b,remainder;
    int n, num;

    num = 0;

    cin >> n;

    while(true){
        cin >> a >> b;

        remainder = a%b;

        cout << remainder << endl;  
        
        num+=1;
        if(num == n){
            break;
        }
    }
    
    
    

}