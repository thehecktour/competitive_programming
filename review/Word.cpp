#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main(){

    string word;
    int result;
    int comprimento_palavra;

    cin >> word;

    result = transform(word.begin(), word.end(), word.begin(), toupper);

    comprimento_palavra = word.length();

    for (int i=0; i<comprimento_palavra; i++){
        if (i)
    }


}