#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    string palavra;
    int i,j;
    int lindo;
    int result;
    int pass;

    pass = 1;
    cin >> palavra;
    result = palavra.length();
    lindo = 0;

    for (i=0; i<result; i++){
        for (j=0; j<i; j++){
            if (palavra[i] == palavra[j]){
                lindo+=1;
            }
        }
        if (lindo == 0){
        pass++;
        }
        lindo =0;
    }
    
    
    if (pass%2 == 0){
        cout << "IGNORE HIM!" << endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }

}