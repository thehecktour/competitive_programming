#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main(){

    int k, factorial;

    cin >> k;

    while(k--){
        cpp_int factorial = 1;
        int f;
        cin >> f;

        for(int i=1; i<=f; i++){
            factorial = factorial*i;
        }

        cout << factorial << endl;
    }

}