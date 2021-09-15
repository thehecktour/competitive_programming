#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int times;
    string word;
    string first_letter;
    string last_letter;
    int comprimento;
    int new_comprimento;
    string result;
    
    cin >> times;
    
    for(int i=0; i<times; i++){
        
        cin >> word;

        first_letter = word[0];
        last_letter = word.back();
        comprimento = word.length();
        new_comprimento = (comprimento-2);

        if(comprimento<=10){
            cout << word << endl;
        }else{
            cout << first_letter << new_comprimento << last_letter<< endl;  
        }
    }

}