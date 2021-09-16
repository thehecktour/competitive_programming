#include <iostream>
#include <stdio.h>
using namespace std;


int main(){

    int k,n,w;
    int a;
    int result;
    int final_result;
    int final_final;

    a =1;
    final_result = 0;
    final_final = 0;

    cin >> k >> n >> w;

    for(int i=0; i<w; i++){
        result = (a*k);
        final_result = (final_result + result);
        a+=1;    
    }

    if (final_result>n){
        final_final = (final_result-n);
        cout << final_final << endl;
    }else if(final_result = w){
        cout << 0 << endl;
    }else{
        cout << final_result << endl;
    }

}