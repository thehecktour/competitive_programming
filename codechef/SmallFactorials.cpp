#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main(){

    int a;
    int result;

    cin >> a;

    while(a--){
        int b;
        cin >> b;
        while(b>1){   
            cpp_int result = 1;
            result *= b;
            b--;
        }
        cout << result << endl;
    }

    return 0;

}